//加入以下 Namespace
using System;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;
using System.Windows.Forms;
using System.Windows;
using System.Linq;
using System.Diagnostics;
using Microsoft.Win32;
using System.Net;
using System.Threading;
using System.Reflection;
namespace keyloggerattack
{
    public class run_result
    {

        public static void Read()
        {
            string logPath = "C:\\stringresult.txt";
            StreamWriter sw = new StreamWriter(logPath);
            string s1;
            int txtLength = 0, s2int = 0, keyint= 0, Dwelltimeint = 0, Intervalint = 0,stringlength = 0;
            int j = 0,outputint = 0;
            string[] s2 = new string[10000];
            string[] key = new string[10000];
            int[] Dwelltime = new int[10000];
            int[] Interval = new int[10000];
            //var handle = GetConsoleWindow();
            //ShowWindow(handle,1);
            if (File.Exists(@"C:\log.txt"))
            {
                //讀取txt code
                StreamReader sr = new StreamReader(@"C:\log.txt");
                string line = string.Empty;
                
                while (!sr.EndOfStream)
                {
                    txtLength++;
                    s2[s2int] = sr.ReadLine();
                    s2int++;
                }

                 while(j<txtLength)
                 {
                     if (s2[j].Substring(0,1) == "K")
                     {
                         stringlength = s2[j].Length-1;
                         key[keyint] = s2[j].Substring(1, stringlength);
                         keyint++;
                         stringlength = 0;
                        j++;
                    }
                     else if(s2[j].Substring(0, 1) == "D")
                     {
                         stringlength = s2[j].Length-1;
                         Dwelltime[Dwelltimeint] = Int32.Parse(s2[j].Substring(1,stringlength));
                         Dwelltimeint++;
                         stringlength = 0;
                        j++;
                    }
                     else if(s2[j].Substring(0, 1) == "I")
                     {
                         stringlength = s2[j].Length-1;
                         Interval[Intervalint] = Int32.Parse(s2[j].Substring(1,stringlength));
                         Intervalint++;
                         stringlength = 0;
                        j++;
                    }
                 }

                 j = 0;

                 while(j<txtLength)
                 {
                     if (key[j]=="W" && key[j+1]=="D9" && key[j + 2]=="D6" && key[j + 3] == "D1" && key[j + 4] == "O" && key[j + 5] == "D3")
                     {
                         while (outputint < 5)
                         {
                             sw.WriteLine("+1 1:1 2:" + Interval[j + outputint] + " 3:" + Dwelltime[j + outputint] + " 4:" + (Dwelltime[j + outputint] + Interval[j + outputint] + Dwelltime[j + outputint + 1]) + " 5:" + (Dwelltime[j + outputint] + Interval[j + outputint]) + " 6:" + (Interval[j + outputint] + Dwelltime[j + outputint + 1]));
                             outputint++;
                         }
                     }
                    j++;
                 }
                sw.Close();
                    sr.Close();
            }
        }
      //  [DllImport("kernel32.dll")]
       // static extern IntPtr GetConsoleWindow();
       // [DllImport("user32.dll")]
       // static extern bool ShowWindow(IntPtr hWnd, int nCmdShow);
    }
}
