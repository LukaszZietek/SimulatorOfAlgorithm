using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Simulator
{
    public partial class Form1 : Form
    {
        private bool IfExists;
        public Form1()
        {
            IfExists = false;
            InitializeComponent();
        }

        private void AddAverageWaitingTime(System.Windows.Forms.RichTextBox MagazineForData)
        {
            MagazineForData.Text = "";
            try
            {
                if (IfExists == false)
                {
                    for (int i = 1; i <= 6; i++)
                    {
                        using (System.IO.StreamReader read = new StreamReader(@".\Data\" +MagazineForData.Name + $"Result{i}.txt"))
                        {
                            MagazineForData.Text += $"Dla danych numer: {i}";
                            MagazineForData.Text += Environment.NewLine + "Średni czas oczekiwania: " + read.ReadLine();
                            MagazineForData.Text += Environment.NewLine + "------------" + Environment.NewLine;
                        }
                    }
                }
                else
                {
                    
                        using (System.IO.StreamReader read = new StreamReader(@".\Data\"+MagazineForData.Name + "InputDataResult.txt"))
                        {
                        MagazineForData.Text += "Dla wczytanych danych: ";
                        MagazineForData.Text += Environment.NewLine + "Średni czas oczekiwania: " + read.ReadLine();
                        MagazineForData.Text += Environment.NewLine + "------------" + Environment.NewLine;
                    }
                    
                }
            } catch
            {
                MessageBox.Show("Problem connection with backend", "Error", MessageBoxButtons.OK);
                Application.Exit();
            }
        }

        private void AddParticularWaitingTime(System.Windows.Forms.RichTextBox MagazineForData)
        {
            try
            {
                if (IfExists == false)
                {

                    for (int i = 1; i <= 6; i++)
                    {

                        using (System.IO.StreamReader read = new StreamReader(@".\Data\" +MagazineForData.Name + $"Waiting{i}.Txt"))
                        {
                            int Len = Int32.Parse(read.ReadLine());
                            MagazineForData.Text += " ";
                            for (int j = 0; j < Len; j++)
                            {
                                MagazineForData.AppendText(Environment.NewLine + $"P[{j}] : {read.ReadLine()} ");
                            }
                            MagazineForData.AppendText(Environment.NewLine + "-----------" + Environment.NewLine);
                        }
                    }
                } else
                {
                    using (System.IO.StreamReader read = new StreamReader(@".\Data\" + MagazineForData.Name + "InputDataWaiting.Txt"))
                    {
                        int Len = Int32.Parse(read.ReadLine());
                        MagazineForData.Text += " ";
                        for (int j = 0; j < Len; j++)
                        {
                            MagazineForData.AppendText(Environment.NewLine + $"P[{j}] : {read.ReadLine()} ");
                        }
                    }
                }
            }catch
            {

            }
        }

        private void NewData_Click(object sender, EventArgs e)
        {
            try
            {
                Form2 FormToAddData = new Form2();
                FormToAddData.ShowDialog(this);
                IfExists = FormToAddData.IfDataSave;
                
            }
            catch
            {
                DialogResult message = MessageBox.Show("Error with opening new form", "ERROR", MessageBoxButtons.OK);
                Application.Exit();
            }
           
            
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            try
            {
                for (int i = 1; i <= 6; i++)
                {
                    File.Delete(@".\Data\" + $"HRRNResult{i}.txt");
                    File.Delete(@".\Data\" + $"HRRNWaiting{i}.txt");
                    File.Delete(@".\Data\" + $"SJFWaiting{i}.txt");
                    File.Delete(@".\Data\" + $"SJFResult{i}.txt");
                    File.Delete(@".\Data\" + $"RRWaiting{i}.txt");
                    File.Delete(@".\Data\" + $"RRResult{i}.txt");
                    File.Delete(@".\Data\" + $"FCFSWaiting{i}.txt");
                    File.Delete(@".\Data\" + $"FCFSResult{i}.txt");
                }
                File.Delete(@".\Data\" + "InputData.bin");
                File.Delete(@".\Data\" + "HRRNInputDataWaiting.txt");
                File.Delete(@".\Data\" + "HRRNInputDataResult.txt");
                File.Delete(@".\Data\" + "FCFSInputDataWaiting.txt");
                File.Delete(@".\Data\" + "FCFSInputDataResult.txt");
                File.Delete(@".\Data\" + "RRInputDataResult.txt");
                File.Delete(@".\Data\" + "RRInputDataWaiting.txt");
                File.Delete(@".\Data\" + "SJFInputDataWaiting.txt");
                File.Delete(@".\Data\" + "SJFInputDataResult.txt");
            }
            catch
            {
                
            }
        }

        private void Count_Click(object sender, EventArgs e)
        {
            try
            {
                Process process = Process.Start(@".\Data\" + "Backend.exe");
                int id = process.Id;
                Process tempProc = Process.GetProcessById(id);
                this.Visible = false;
                tempProc.WaitForExit();
                this.Visible = true;
                AddAverageWaitingTime(HRRN);
                AddAverageWaitingTime(FCFS);
                AddAverageWaitingTime(SJF);
                AddAverageWaitingTime(RR);
                AddParticularWaitingTime(FCFS);
                AddParticularWaitingTime(HRRN);
                AddParticularWaitingTime(SJF);
                AddParticularWaitingTime(RR);
            } catch
            {
                MessageBox.Show("Problem with connection with backend .exe file", "Error", MessageBoxButtons.OK);
                Application.Exit();
            }
           
        }

        private void ShowDataButton_Click(object sender, EventArgs e)
        {
            try
            {
                Form3 ShowDataForm = new Form3();
                ShowDataForm.ShowDialog(this);
            }catch
            {
                DialogResult MsgBox = MessageBox.Show("I can't do this operation", "Error", MessageBoxButtons.OK);
            }
        }

        private void StaticData_Click(object sender, EventArgs e)
        {
            if (IfExists == true)
            {
                DialogResult MsgBox = MessageBox.Show("Are you sure? Input data will be deleted", "Asking", MessageBoxButtons.OKCancel);
                if (MsgBox == DialogResult.OK)
                {
                    IfExists = false;
                    File.Delete(@".\Data\" + "InputData.bin");
                    File.Delete(@".\Data\" + "HRRNInputDataWaiting.txt");
                    File.Delete(@".\Data\" + "HRRNInputDataResult.txt");
                    File.Delete(@".\Data\" + "FCFSInputDataWaiting.txt");
                    File.Delete(@".\Data\" + "FCFSInputDataResult.txt");
                    File.Delete(@".\Data\" + "RRInputDataResult.txt");
                    File.Delete(@".\Data\" + "RRInputDataWaiting.txt");
                    File.Delete(@".\Data\" + "SJFInputDataWaiting.txt");
                    File.Delete(@".\Data\" + "SJFInputDataResult.txt");
                }
            } 
        }
    }
}
