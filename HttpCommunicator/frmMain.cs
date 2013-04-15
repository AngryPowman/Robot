using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HttpCommunicator
{
    public partial class frmMain : Form
    {
        class ResponseData
        {
            public string ResponseHeader { get; set; }
            public string ResponseContent { get; set; }
        }


        private HttpWebRequest _httpWebRequest;
        public frmMain()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            cmbRequestType.SelectedIndex = 0;
        }

        private void btnExecute_Click(object sender, EventArgs e)
        {
            ResponseData responseData = getURL(txtUrl.Text, txtRequestHeader.Lines);
            txtResponseHeader.Text = responseData.ResponseHeader;
            txtResponseContent.Text = responseData.ResponseContent;
        }

        private ResponseData getURL(string url, string[] requestHeader)
        {
            _httpWebRequest = (HttpWebRequest)WebRequest.Create(url);
            _httpWebRequest.Method = cmbRequestType.Text;
            _httpWebRequest.UserAgent = "Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.2; SV1; .NET CLR 1.1.4322; .NET CLR 2.0.50727)";
            _httpWebRequest.Accept = "*/*";
            _httpWebRequest.Proxy = null;

            foreach (string str in requestHeader)
            {
                string[] strElm = str.Split(':');
                if (strElm.Length == 2)
                {
                    string header = strElm[0].Trim();
                    string value = strElm[1].Trim();
                    if (header != "Accept" && header != "User-Agent" && header != "Host" && header != "Connection")
                    {
                        _httpWebRequest.Headers.Set(header, value);
                    }
                }
            }

            ResponseData responseData = new ResponseData();

            HttpWebResponse response = (HttpWebResponse)_httpWebRequest.GetResponse();
            StreamReader reader = new StreamReader(response.GetResponseStream(), Encoding.GetEncoding(response.CharacterSet));
            for (int i = 0; i < response.Headers.Count; ++i)
            {
                responseData.ResponseHeader += (response.Headers.GetKey(i) + ":" + response.Headers.Get(i) + "\n");
            }

            responseData.ResponseContent = reader.ReadToEnd();

            return responseData;
        }

        private void btnGenSeed_Click(object sender, EventArgs e)
        {
            Random r = new Random();
            txtRSeed.Text = r.NextDouble().ToString();
        }

        private void btnCheckUin_Click(object sender, EventArgs e)
        {
            string vCodeRequestUrl = string.Format(txtGetVCodeRequestUrl.Text, txtVcodeQQ.Text, txtRSeed.Text);
            ResponseData responseData = getURL(vCodeRequestUrl, txtGetVCodeRequestHeader.Lines);

            txtVcodeResponseHeader.Text = responseData.ResponseHeader;
            txtVcodeResponseContent.Text = responseData.ResponseContent;

            //正则分析
            Regex regex = new Regex(@"ptui_checkVC\('(\d)','(.*)','(.*)'\);");
            MatchCollection matches = regex.Matches(responseData.ResponseContent);

            foreach (Match match in matches)
            {
                if (match.Success == true)
                {
                    txtVcodeResult.Text = match.Groups[1].Value;
                    txtVcode.Text = match.Groups[2].Value;
                    txtVcodeDes.Text = match.Groups[3].Value;
                }
            }


            txtPasswordMd5.Text = QQPasswordEncrypt.encrypt(txtVCodePassword.Text, txtVcode.Text);
            txtPasswordMd5_Pic.Text = QQPasswordEncrypt.encrypt(txtVCodePassword.Text, txtPicVCodeInput.Text);
        }

        private void btnGetVCodePicture_Click(object sender, EventArgs e)
        {
            /*
             * URL:
             * https://ssl.captcha.qq.com/getimage?aid=1003903&r={0}&uin={1}
             */

            string vCodeRequestUrl = string.Format(txtPicVCodeRequestUrl.Text, txtRSeed.Text, txtVcodeQQ.Text);

            WebRequest.DefaultWebProxy = null;
            Stream stream = WebRequest.Create(vCodeRequestUrl).GetResponse().GetResponseStream();

            Image image = Image.FromStream(stream);
            pictureBox1.Image = image;
        }
    }
}
