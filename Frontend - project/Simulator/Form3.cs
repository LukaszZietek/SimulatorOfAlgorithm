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
    public partial class Form3 : Form
    {
        private ReadData DataFromBin;
        public Form3()
        {
            InitializeComponent();
            DataFromBin = new ReadData();
            DataFromBin.LoadData();
            if(DataFromBin.IfError == true)
            {
                DialogResult MsgBox = MessageBox.Show("Problem with loading data", "Error", MessageBoxButtons.OK);
                this.Close();
            }
            DataFromBin.AddToBox(DataRichBox);
            
        }

        

        private void DataRichBox_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void OkButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
