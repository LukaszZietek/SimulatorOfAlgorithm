using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Simulator
{
    public partial class Form2 : Form
    {
        public bool IfDataSave { get; set; }
        private SaveData DataClass;
       
        public Form2()
        {
            
            DataClass = new SaveData();
            InitializeComponent();
            for (int i = 0; i <= 100; i++)
            {
                string[] numbers = { i.ToString() };
                InputTimeBox.Items.AddRange(numbers);
                if(i>=1)
                ExecutableTimeBox.Items.AddRange(numbers);
            }
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            
        }

        private void Form2_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (DataClass.IfEmpty() == false)
            {
                DialogResult message = MessageBox.Show("Do you want to save data?", "Question", MessageBoxButtons.YesNo);
                if (message == DialogResult.Yes)
                {
                    IfDataSave = true;
                    DataClass.SaveDataToFile();
                }
            }
        }

        private void AddButton_Click(object sender, EventArgs e)
        {
            if (InputTimeBox.SelectedItem != null && ExecutableTimeBox.SelectedItem != null)
            {
                DataClass.AddInputTime(InputTimeBox.SelectedItem.ToString());
                DataClass.AddExecutableTime(ExecutableTimeBox.SelectedItem.ToString());
                int b = Int32.Parse(CountAddedElementLabel.Text);
                b += 1;
                CountAddedElementLabel.Text = b.ToString();
            }
        }

        

        private void label1_Click(object sender, EventArgs e)
        {

        }

        

        private void ClearButton_Click(object sender, EventArgs e)
        {
            DataClass.Clear();
            CountAddedElementLabel.Text = "0";
        }
    }
}
