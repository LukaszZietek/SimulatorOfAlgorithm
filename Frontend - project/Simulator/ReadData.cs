using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulator
{
    public class ReadData
    {
        private List<string> InputTime;
        private List<string> ExecutableTime;
        public bool IfError { get; set; }
        public ReadData()
        {
            InputTime = new List<string>();
            ExecutableTime = new List<string>();
            IfError = false;
        }

        public void AddInputTime(string inp)
        {
            InputTime.Add(inp);

        }

        public void AddExecutableTime(string exec)
        {
            ExecutableTime.Add(exec);
        }

        public void LoadData()
        {
            try
            {
                for (int i = 1; i <= 6; i++)
                {
                    string FullText = "";
                    string Len = "";
                    int Length = 0;
                    int ActualPosition = 0;
                    string InpTime = "";
                    string ExecTime = "";
                    using (System.IO.StreamReader reader = new System.IO.StreamReader(@".\Data\" + $"Dane{i}.bin"))
                    {

                        FullText = reader.ReadToEnd();
                        while (FullText[ActualPosition] != ',')
                        {
                            Len += FullText[ActualPosition];
                            ActualPosition++;
                        }
                        Length = Int32.Parse(Len);
                        ActualPosition++;
                        for (int j = 0; j < Length; j++)
                        {
                            while (FullText[ActualPosition] != ',')
                            {
                                InpTime += FullText[ActualPosition];
                                ActualPosition++;
                            }
                            AddInputTime(InpTime);
                            InpTime = "";
                            ActualPosition++;
                            while (FullText[ActualPosition] != ',')
                            {
                                ExecTime += FullText[ActualPosition];
                                ActualPosition++;
                            }
                            AddExecutableTime(ExecTime);
                            ExecTime = "";
                            ActualPosition++;
                        }


                    }
                    AddInputTime("-------------");
                    AddExecutableTime("---------");

                }
            }
            catch
            {
                IfError = true;
            }
        }

        public void AddToBox(System.Windows.Forms.RichTextBox RichBox)
        {
            int j = 1;
            for(int i = 0; i<InputTime.Count; i++)
            {
                if (InputTime[i] != "-------------")
                {
                    RichBox.Text += $"Input Time: {InputTime[i]}, Executable Time: {ExecutableTime[i]}" + Environment.NewLine;
                }
                else
                {
                    RichBox.Text += $"This is {j} data.." + Environment.NewLine;
                    j++;
                    RichBox.Text += InputTime[i] + ExecutableTime[i] + Environment.NewLine;
                }

            }
        }



    }
}
