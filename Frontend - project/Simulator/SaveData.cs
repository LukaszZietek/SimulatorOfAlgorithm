using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulator
{
    public class SaveData
    {
        private List<string> InputTime;
        private List<string> ExecutableTime;

        public SaveData()
        {
            InputTime = new List<string>();
            ExecutableTime = new List<string>();
        }
        public void AddInputTime(string inp)
        {
            InputTime.Add(inp);
        }

        public void AddExecutableTime(string exec)
        {
            ExecutableTime.Add(exec);
        }

        public bool IfEmpty()
        {
            return InputTime.Count == 0 ? true : false;
        }

        public void Clear()
        {
            InputTime.Clear();
            ExecutableTime.Clear();
        }

        public void SaveDataToFile()
        {
            if (InputTime.Count != 0)
            {
                using (System.IO.StreamWriter Writer = new System.IO.StreamWriter(@".\Data\" + "InputData.bin"))
                {
                    Writer.Write(InputTime.Count.ToString());
                    Writer.Write(",");
                    for (int i = 0; i < InputTime.Count; i++)
                    {
                        Writer.Write(InputTime[i]);
                        Writer.Write(",");
                        Writer.Write(ExecutableTime[i]);
                        Writer.Write(",");
                    }
                }
            }
        }

        



    }

}

