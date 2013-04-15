using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HttpCommunicator
{
    public static class QQPasswordEncrypt
    {
        public static string encrypt(string password, string verifyCode)
        {
            return (md5(md5_3(password).ToUpper() + verifyCode.ToUpper())).ToUpper();
        }

        private static string md5_3(string s)
        {
            System.Security.Cryptography.MD5 md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(s);

            bytes = md5.ComputeHash(bytes);
            bytes = md5.ComputeHash(bytes);
            bytes = md5.ComputeHash(bytes);

            md5.Clear();

            string ret = "";
            for (int i = 0; i < bytes.Length; i++)
            {
                ret += Convert.ToString(bytes[i], 16).PadLeft(2, '0');
            }

            return ret.PadLeft(32, '0');
        }

        private static string md5(string s)
        {
            System.Security.Cryptography.MD5 md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(s);

            bytes = md5.ComputeHash(bytes);

            md5.Clear();

            string ret = "";
            for (int i = 0; i < bytes.Length; i++)
            {
                ret += Convert.ToString(bytes[i], 16).PadLeft(2, '0');
            }

            return ret.PadLeft(32, '0');
        }
    }

}
