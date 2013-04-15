namespace HttpCommunicator
{
    partial class frmMain
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmMain));
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.tabControl2 = new System.Windows.Forms.TabControl();
            this.tabPage4 = new System.Windows.Forms.TabPage();
            this.txtRequestHeader = new System.Windows.Forms.TextBox();
            this.tabPage5 = new System.Windows.Forms.TabPage();
            this.txtRequestBody = new System.Windows.Forms.TextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.txtUrl = new System.Windows.Forms.TextBox();
            this.btnExecute = new System.Windows.Forms.Button();
            this.cmbRequestType = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.tabControl3 = new System.Windows.Forms.TabControl();
            this.tabPage6 = new System.Windows.Forms.TabPage();
            this.txtResponseHeader = new System.Windows.Forms.TextBox();
            this.tabPage7 = new System.Windows.Forms.TabPage();
            this.txtResponseContent = new System.Windows.Forms.TextBox();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.label2 = new System.Windows.Forms.Label();
            this.txtVcodeQQ = new System.Windows.Forms.TextBox();
            this.btnCheckUin = new System.Windows.Forms.Button();
            this.txtGetVCodeRequestUrl = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.txtRSeed = new System.Windows.Forms.TextBox();
            this.btnGenSeed = new System.Windows.Forms.Button();
            this.txtVcodeResult = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.txtVcode = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.txtVcodeDes = new System.Windows.Forms.TextBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.btnGetVCodePicture = new System.Windows.Forms.Button();
            this.txtGetVCodeRequestHeader = new System.Windows.Forms.TextBox();
            this.txtVcodeResponseHeader = new System.Windows.Forms.TextBox();
            this.txtVcodeResponseContent = new System.Windows.Forms.TextBox();
            this.txtPicVCodeRequestUrl = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.txtPasswordMd5 = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
            this.txtPasswordMd5_Pic = new System.Windows.Forms.TextBox();
            this.txtPicVCodeInput = new System.Windows.Forms.TextBox();
            this.label9 = new System.Windows.Forms.Label();
            this.txtVCodePassword = new System.Windows.Forms.TextBox();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).BeginInit();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            this.tabControl2.SuspendLayout();
            this.tabPage4.SuspendLayout();
            this.tabPage5.SuspendLayout();
            this.tabControl3.SuspendLayout();
            this.tabPage6.SuspendLayout();
            this.tabPage7.SuspendLayout();
            this.tabPage2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Controls.Add(this.tabPage3);
            this.tabControl1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tabControl1.Location = new System.Drawing.Point(0, 0);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(1021, 613);
            this.tabControl1.TabIndex = 0;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.splitContainer1);
            this.tabPage1.Location = new System.Drawing.Point(4, 22);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(1013, 587);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "http通信测试";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // splitContainer1
            // 
            this.splitContainer1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer1.FixedPanel = System.Windows.Forms.FixedPanel.Panel1;
            this.splitContainer1.Location = new System.Drawing.Point(3, 3);
            this.splitContainer1.Name = "splitContainer1";
            this.splitContainer1.Orientation = System.Windows.Forms.Orientation.Horizontal;
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.Controls.Add(this.tabControl2);
            this.splitContainer1.Panel1.Controls.Add(this.button2);
            this.splitContainer1.Panel1.Controls.Add(this.txtUrl);
            this.splitContainer1.Panel1.Controls.Add(this.btnExecute);
            this.splitContainer1.Panel1.Controls.Add(this.cmbRequestType);
            this.splitContainer1.Panel1.Controls.Add(this.label1);
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.tabControl3);
            this.splitContainer1.Size = new System.Drawing.Size(1007, 581);
            this.splitContainer1.SplitterDistance = 290;
            this.splitContainer1.TabIndex = 8;
            // 
            // tabControl2
            // 
            this.tabControl2.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.tabControl2.Controls.Add(this.tabPage4);
            this.tabControl2.Controls.Add(this.tabPage5);
            this.tabControl2.Location = new System.Drawing.Point(0, 113);
            this.tabControl2.Name = "tabControl2";
            this.tabControl2.SelectedIndex = 0;
            this.tabControl2.Size = new System.Drawing.Size(1007, 175);
            this.tabControl2.TabIndex = 4;
            // 
            // tabPage4
            // 
            this.tabPage4.Controls.Add(this.txtRequestHeader);
            this.tabPage4.Location = new System.Drawing.Point(4, 22);
            this.tabPage4.Name = "tabPage4";
            this.tabPage4.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage4.Size = new System.Drawing.Size(999, 149);
            this.tabPage4.TabIndex = 0;
            this.tabPage4.Text = "Header";
            this.tabPage4.UseVisualStyleBackColor = true;
            // 
            // txtRequestHeader
            // 
            this.txtRequestHeader.AcceptsReturn = true;
            this.txtRequestHeader.BackColor = System.Drawing.SystemColors.GradientActiveCaption;
            this.txtRequestHeader.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtRequestHeader.Location = new System.Drawing.Point(3, 3);
            this.txtRequestHeader.Multiline = true;
            this.txtRequestHeader.Name = "txtRequestHeader";
            this.txtRequestHeader.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtRequestHeader.Size = new System.Drawing.Size(993, 143);
            this.txtRequestHeader.TabIndex = 1;
            this.txtRequestHeader.Text = resources.GetString("txtRequestHeader.Text");
            // 
            // tabPage5
            // 
            this.tabPage5.Controls.Add(this.txtRequestBody);
            this.tabPage5.Location = new System.Drawing.Point(4, 22);
            this.tabPage5.Name = "tabPage5";
            this.tabPage5.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage5.Size = new System.Drawing.Size(999, 149);
            this.tabPage5.TabIndex = 1;
            this.tabPage5.Text = "Body";
            this.tabPage5.UseVisualStyleBackColor = true;
            // 
            // txtRequestBody
            // 
            this.txtRequestBody.AcceptsReturn = true;
            this.txtRequestBody.BackColor = System.Drawing.SystemColors.GradientActiveCaption;
            this.txtRequestBody.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtRequestBody.Location = new System.Drawing.Point(3, 3);
            this.txtRequestBody.Multiline = true;
            this.txtRequestBody.Name = "txtRequestBody";
            this.txtRequestBody.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtRequestBody.Size = new System.Drawing.Size(993, 143);
            this.txtRequestBody.TabIndex = 2;
            // 
            // button2
            // 
            this.button2.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.button2.Location = new System.Drawing.Point(897, 33);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(106, 74);
            this.button2.TabIndex = 6;
            this.button2.Text = "Edit Query Params";
            this.button2.UseVisualStyleBackColor = true;
            // 
            // txtUrl
            // 
            this.txtUrl.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.txtUrl.Location = new System.Drawing.Point(4, 33);
            this.txtUrl.Multiline = true;
            this.txtUrl.Name = "txtUrl";
            this.txtUrl.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtUrl.Size = new System.Drawing.Size(887, 74);
            this.txtUrl.TabIndex = 1;
            this.txtUrl.Text = resources.GetString("txtUrl.Text");
            // 
            // btnExecute
            // 
            this.btnExecute.Location = new System.Drawing.Point(188, 5);
            this.btnExecute.Name = "btnExecute";
            this.btnExecute.Size = new System.Drawing.Size(75, 23);
            this.btnExecute.TabIndex = 5;
            this.btnExecute.Text = "execute";
            this.btnExecute.UseVisualStyleBackColor = true;
            this.btnExecute.Click += new System.EventHandler(this.btnExecute_Click);
            // 
            // cmbRequestType
            // 
            this.cmbRequestType.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cmbRequestType.FormattingEnabled = true;
            this.cmbRequestType.Items.AddRange(new object[] {
            "GET",
            "POST"});
            this.cmbRequestType.Location = new System.Drawing.Point(61, 7);
            this.cmbRequestType.Name = "cmbRequestType";
            this.cmbRequestType.Size = new System.Drawing.Size(121, 20);
            this.cmbRequestType.TabIndex = 2;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(8, 10);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(47, 12);
            this.label1.TabIndex = 3;
            this.label1.Text = "Request";
            // 
            // tabControl3
            // 
            this.tabControl3.Controls.Add(this.tabPage6);
            this.tabControl3.Controls.Add(this.tabPage7);
            this.tabControl3.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tabControl3.Location = new System.Drawing.Point(0, 0);
            this.tabControl3.Name = "tabControl3";
            this.tabControl3.SelectedIndex = 0;
            this.tabControl3.Size = new System.Drawing.Size(1007, 287);
            this.tabControl3.TabIndex = 8;
            // 
            // tabPage6
            // 
            this.tabPage6.Controls.Add(this.txtResponseHeader);
            this.tabPage6.Location = new System.Drawing.Point(4, 22);
            this.tabPage6.Name = "tabPage6";
            this.tabPage6.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage6.Size = new System.Drawing.Size(999, 261);
            this.tabPage6.TabIndex = 0;
            this.tabPage6.Text = "Response Header";
            this.tabPage6.UseVisualStyleBackColor = true;
            // 
            // txtResponseHeader
            // 
            this.txtResponseHeader.AcceptsReturn = true;
            this.txtResponseHeader.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.txtResponseHeader.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtResponseHeader.Location = new System.Drawing.Point(3, 3);
            this.txtResponseHeader.Multiline = true;
            this.txtResponseHeader.Name = "txtResponseHeader";
            this.txtResponseHeader.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtResponseHeader.Size = new System.Drawing.Size(993, 255);
            this.txtResponseHeader.TabIndex = 2;
            // 
            // tabPage7
            // 
            this.tabPage7.Controls.Add(this.txtResponseContent);
            this.tabPage7.Location = new System.Drawing.Point(4, 22);
            this.tabPage7.Name = "tabPage7";
            this.tabPage7.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage7.Size = new System.Drawing.Size(999, 261);
            this.tabPage7.TabIndex = 1;
            this.tabPage7.Text = "Response Content";
            this.tabPage7.UseVisualStyleBackColor = true;
            // 
            // txtResponseContent
            // 
            this.txtResponseContent.AcceptsReturn = true;
            this.txtResponseContent.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.txtResponseContent.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtResponseContent.Location = new System.Drawing.Point(3, 3);
            this.txtResponseContent.Multiline = true;
            this.txtResponseContent.Name = "txtResponseContent";
            this.txtResponseContent.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtResponseContent.Size = new System.Drawing.Size(993, 255);
            this.txtResponseContent.TabIndex = 2;
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.txtPicVCodeInput);
            this.tabPage2.Controls.Add(this.pictureBox1);
            this.tabPage2.Controls.Add(this.txtPasswordMd5_Pic);
            this.tabPage2.Controls.Add(this.txtPasswordMd5);
            this.tabPage2.Controls.Add(this.txtVcodeDes);
            this.tabPage2.Controls.Add(this.txtVcode);
            this.tabPage2.Controls.Add(this.txtVcodeResult);
            this.tabPage2.Controls.Add(this.txtVcodeResponseContent);
            this.tabPage2.Controls.Add(this.txtVcodeResponseHeader);
            this.tabPage2.Controls.Add(this.txtPicVCodeRequestUrl);
            this.tabPage2.Controls.Add(this.txtGetVCodeRequestHeader);
            this.tabPage2.Controls.Add(this.txtGetVCodeRequestUrl);
            this.tabPage2.Controls.Add(this.btnGenSeed);
            this.tabPage2.Controls.Add(this.btnGetVCodePicture);
            this.tabPage2.Controls.Add(this.btnCheckUin);
            this.tabPage2.Controls.Add(this.label8);
            this.tabPage2.Controls.Add(this.txtRSeed);
            this.tabPage2.Controls.Add(this.label7);
            this.tabPage2.Controls.Add(this.label3);
            this.tabPage2.Controls.Add(this.label6);
            this.tabPage2.Controls.Add(this.label5);
            this.tabPage2.Controls.Add(this.txtVCodePassword);
            this.tabPage2.Controls.Add(this.txtVcodeQQ);
            this.tabPage2.Controls.Add(this.label9);
            this.tabPage2.Controls.Add(this.label4);
            this.tabPage2.Controls.Add(this.label2);
            this.tabPage2.Location = new System.Drawing.Point(4, 22);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(1013, 587);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "QQ验证码请求";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // tabPage3
            // 
            this.tabPage3.Location = new System.Drawing.Point(4, 22);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage3.Size = new System.Drawing.Size(1013, 587);
            this.tabPage3.TabIndex = 2;
            this.tabPage3.Text = "加解密工具";
            this.tabPage3.UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(18, 17);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(17, 12);
            this.label2.TabIndex = 0;
            this.label2.Text = "QQ";
            // 
            // txtVcodeQQ
            // 
            this.txtVcodeQQ.Location = new System.Drawing.Point(41, 14);
            this.txtVcodeQQ.Name = "txtVcodeQQ";
            this.txtVcodeQQ.Size = new System.Drawing.Size(94, 21);
            this.txtVcodeQQ.TabIndex = 1;
            this.txtVcodeQQ.Text = "2641271568";
            // 
            // btnCheckUin
            // 
            this.btnCheckUin.Font = new System.Drawing.Font("宋体", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.btnCheckUin.ForeColor = System.Drawing.Color.Black;
            this.btnCheckUin.Location = new System.Drawing.Point(363, 558);
            this.btnCheckUin.Name = "btnCheckUin";
            this.btnCheckUin.Size = new System.Drawing.Size(75, 23);
            this.btnCheckUin.TabIndex = 2;
            this.btnCheckUin.Text = "Check";
            this.btnCheckUin.UseVisualStyleBackColor = true;
            this.btnCheckUin.Click += new System.EventHandler(this.btnCheckUin_Click);
            // 
            // txtGetVCodeRequestUrl
            // 
            this.txtGetVCodeRequestUrl.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.txtGetVCodeRequestUrl.Location = new System.Drawing.Point(20, 41);
            this.txtGetVCodeRequestUrl.Multiline = true;
            this.txtGetVCodeRequestUrl.Name = "txtGetVCodeRequestUrl";
            this.txtGetVCodeRequestUrl.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtGetVCodeRequestUrl.Size = new System.Drawing.Size(887, 74);
            this.txtGetVCodeRequestUrl.TabIndex = 3;
            this.txtGetVCodeRequestUrl.Text = resources.GetString("txtGetVCodeRequestUrl.Text");
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(475, 15);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(53, 12);
            this.label3.TabIndex = 0;
            this.label3.Text = "randSeed";
            // 
            // txtRSeed
            // 
            this.txtRSeed.Location = new System.Drawing.Point(534, 12);
            this.txtRSeed.Name = "txtRSeed";
            this.txtRSeed.Size = new System.Drawing.Size(130, 21);
            this.txtRSeed.TabIndex = 1;
            this.txtRSeed.Text = "0.8545043979949859";
            // 
            // btnGenSeed
            // 
            this.btnGenSeed.Location = new System.Drawing.Point(670, 12);
            this.btnGenSeed.Name = "btnGenSeed";
            this.btnGenSeed.Size = new System.Drawing.Size(40, 23);
            this.btnGenSeed.TabIndex = 2;
            this.btnGenSeed.Text = "Gen";
            this.btnGenSeed.UseVisualStyleBackColor = true;
            this.btnGenSeed.Click += new System.EventHandler(this.btnGenSeed_Click);
            // 
            // txtVcodeResult
            // 
            this.txtVcodeResult.Location = new System.Drawing.Point(88, 458);
            this.txtVcodeResult.Name = "txtVcodeResult";
            this.txtVcodeResult.Size = new System.Drawing.Size(347, 21);
            this.txtVcodeResult.TabIndex = 4;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(8, 464);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(41, 12);
            this.label4.TabIndex = 0;
            this.label4.Text = "Result";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(8, 488);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(65, 12);
            this.label5.TabIndex = 0;
            this.label5.Text = "verifyCode";
            // 
            // txtVcode
            // 
            this.txtVcode.Location = new System.Drawing.Point(88, 485);
            this.txtVcode.Name = "txtVcode";
            this.txtVcode.Size = new System.Drawing.Size(347, 21);
            this.txtVcode.TabIndex = 4;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(8, 515);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(71, 12);
            this.label6.TabIndex = 0;
            this.label6.Text = "description";
            // 
            // txtVcodeDes
            // 
            this.txtVcodeDes.Location = new System.Drawing.Point(88, 512);
            this.txtVcodeDes.Name = "txtVcodeDes";
            this.txtVcodeDes.Size = new System.Drawing.Size(347, 21);
            this.txtVcodeDes.TabIndex = 4;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Location = new System.Drawing.Point(452, 464);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(186, 80);
            this.pictureBox1.TabIndex = 5;
            this.pictureBox1.TabStop = false;
            // 
            // btnGetVCodePicture
            // 
            this.btnGetVCodePicture.Font = new System.Drawing.Font("宋体", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.btnGetVCodePicture.ForeColor = System.Drawing.Color.Black;
            this.btnGetVCodePicture.Location = new System.Drawing.Point(452, 558);
            this.btnGetVCodePicture.Name = "btnGetVCodePicture";
            this.btnGetVCodePicture.Size = new System.Drawing.Size(91, 23);
            this.btnGetVCodePicture.TabIndex = 2;
            this.btnGetVCodePicture.Text = "GET";
            this.btnGetVCodePicture.UseVisualStyleBackColor = true;
            this.btnGetVCodePicture.Click += new System.EventHandler(this.btnGetVCodePicture_Click);
            // 
            // txtGetVCodeRequestHeader
            // 
            this.txtGetVCodeRequestHeader.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.txtGetVCodeRequestHeader.Location = new System.Drawing.Point(20, 121);
            this.txtGetVCodeRequestHeader.Multiline = true;
            this.txtGetVCodeRequestHeader.Name = "txtGetVCodeRequestHeader";
            this.txtGetVCodeRequestHeader.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtGetVCodeRequestHeader.Size = new System.Drawing.Size(887, 178);
            this.txtGetVCodeRequestHeader.TabIndex = 3;
            this.txtGetVCodeRequestHeader.Text = resources.GetString("txtGetVCodeRequestHeader.Text");
            // 
            // txtVcodeResponseHeader
            // 
            this.txtVcodeResponseHeader.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.txtVcodeResponseHeader.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.txtVcodeResponseHeader.Location = new System.Drawing.Point(20, 303);
            this.txtVcodeResponseHeader.Multiline = true;
            this.txtVcodeResponseHeader.Name = "txtVcodeResponseHeader";
            this.txtVcodeResponseHeader.ReadOnly = true;
            this.txtVcodeResponseHeader.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtVcodeResponseHeader.Size = new System.Drawing.Size(383, 150);
            this.txtVcodeResponseHeader.TabIndex = 3;
            // 
            // txtVcodeResponseContent
            // 
            this.txtVcodeResponseContent.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.txtVcodeResponseContent.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.txtVcodeResponseContent.Location = new System.Drawing.Point(409, 303);
            this.txtVcodeResponseContent.Multiline = true;
            this.txtVcodeResponseContent.Name = "txtVcodeResponseContent";
            this.txtVcodeResponseContent.ReadOnly = true;
            this.txtVcodeResponseContent.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtVcodeResponseContent.Size = new System.Drawing.Size(480, 150);
            this.txtVcodeResponseContent.TabIndex = 3;
            // 
            // txtPicVCodeRequestUrl
            // 
            this.txtPicVCodeRequestUrl.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.txtPicVCodeRequestUrl.Location = new System.Drawing.Point(644, 464);
            this.txtPicVCodeRequestUrl.Multiline = true;
            this.txtPicVCodeRequestUrl.Name = "txtPicVCodeRequestUrl";
            this.txtPicVCodeRequestUrl.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtPicVCodeRequestUrl.Size = new System.Drawing.Size(245, 114);
            this.txtPicVCodeRequestUrl.TabIndex = 3;
            this.txtPicVCodeRequestUrl.Text = "https://ssl.captcha.qq.com/getimage?aid=1003903&r={0}&uin={1}";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(8, 542);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(65, 12);
            this.label7.TabIndex = 0;
            this.label7.Text = "pass_md5_3";
            // 
            // txtPasswordMd5
            // 
            this.txtPasswordMd5.Location = new System.Drawing.Point(88, 539);
            this.txtPasswordMd5.Name = "txtPasswordMd5";
            this.txtPasswordMd5.Size = new System.Drawing.Size(266, 21);
            this.txtPasswordMd5.TabIndex = 4;
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(8, 566);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(65, 12);
            this.label8.TabIndex = 0;
            this.label8.Text = "pass_pic_v";
            // 
            // txtPasswordMd5_Pic
            // 
            this.txtPasswordMd5_Pic.Location = new System.Drawing.Point(88, 563);
            this.txtPasswordMd5_Pic.Name = "txtPasswordMd5_Pic";
            this.txtPasswordMd5_Pic.Size = new System.Drawing.Size(266, 21);
            this.txtPasswordMd5_Pic.TabIndex = 4;
            // 
            // txtPicVCodeInput
            // 
            this.txtPicVCodeInput.Location = new System.Drawing.Point(550, 558);
            this.txtPicVCodeInput.Name = "txtPicVCodeInput";
            this.txtPicVCodeInput.Size = new System.Drawing.Size(88, 21);
            this.txtPicVCodeInput.TabIndex = 6;
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(171, 17);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(53, 12);
            this.label9.TabIndex = 0;
            this.label9.Text = "password";
            // 
            // txtVCodePassword
            // 
            this.txtVCodePassword.Location = new System.Drawing.Point(216, 14);
            this.txtVCodePassword.Name = "txtVCodePassword";
            this.txtVCodePassword.Size = new System.Drawing.Size(187, 21);
            this.txtVCodePassword.TabIndex = 1;
            this.txtVCodePassword.Text = "AzraelSys_12388";
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1021, 613);
            this.Controls.Add(this.tabControl1);
            this.Name = "frmMain";
            this.Text = "Http Communicator";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel1.PerformLayout();
            this.splitContainer1.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).EndInit();
            this.splitContainer1.ResumeLayout(false);
            this.tabControl2.ResumeLayout(false);
            this.tabPage4.ResumeLayout(false);
            this.tabPage4.PerformLayout();
            this.tabPage5.ResumeLayout(false);
            this.tabPage5.PerformLayout();
            this.tabControl3.ResumeLayout(false);
            this.tabPage6.ResumeLayout(false);
            this.tabPage6.PerformLayout();
            this.tabPage7.ResumeLayout(false);
            this.tabPage7.PerformLayout();
            this.tabPage2.ResumeLayout(false);
            this.tabPage2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.TextBox txtRequestHeader;
        private System.Windows.Forms.TextBox txtUrl;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.ComboBox cmbRequestType;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.TabControl tabControl2;
        private System.Windows.Forms.TabPage tabPage4;
        private System.Windows.Forms.TabPage tabPage5;
        private System.Windows.Forms.TextBox txtRequestBody;
        private System.Windows.Forms.Button btnExecute;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.SplitContainer splitContainer1;
        private System.Windows.Forms.TabControl tabControl3;
        private System.Windows.Forms.TabPage tabPage6;
        private System.Windows.Forms.TextBox txtResponseHeader;
        private System.Windows.Forms.TabPage tabPage7;
        private System.Windows.Forms.TextBox txtResponseContent;
        private System.Windows.Forms.TextBox txtVcodeQQ;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtGetVCodeRequestUrl;
        private System.Windows.Forms.Button btnCheckUin;
        private System.Windows.Forms.TextBox txtRSeed;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button btnGenSeed;
        private System.Windows.Forms.TextBox txtVcodeDes;
        private System.Windows.Forms.TextBox txtVcode;
        private System.Windows.Forms.TextBox txtVcodeResult;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button btnGetVCodePicture;
        private System.Windows.Forms.TextBox txtGetVCodeRequestHeader;
        private System.Windows.Forms.TextBox txtVcodeResponseContent;
        private System.Windows.Forms.TextBox txtVcodeResponseHeader;
        private System.Windows.Forms.TextBox txtPicVCodeRequestUrl;
        private System.Windows.Forms.TextBox txtPasswordMd5;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox txtPasswordMd5_Pic;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox txtPicVCodeInput;
        private System.Windows.Forms.TextBox txtVCodePassword;
        private System.Windows.Forms.Label label9;
    }
}

