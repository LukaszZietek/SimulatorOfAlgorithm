namespace Simulator
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.Count = new System.Windows.Forms.Button();
            this.NewData = new System.Windows.Forms.Button();
            this.HRRN = new System.Windows.Forms.RichTextBox();
            this.HRRNLabel = new System.Windows.Forms.Label();
            this.FCFS = new System.Windows.Forms.RichTextBox();
            this.SJF = new System.Windows.Forms.RichTextBox();
            this.RR = new System.Windows.Forms.RichTextBox();
            this.FCFSLabel = new System.Windows.Forms.Label();
            this.SJFLabel = new System.Windows.Forms.Label();
            this.RRLabel = new System.Windows.Forms.Label();
            this.ShowDataButton = new System.Windows.Forms.Button();
            this.StaticData = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Count
            // 
            resources.ApplyResources(this.Count, "Count");
            this.Count.Name = "Count";
            this.Count.UseVisualStyleBackColor = true;
            this.Count.Click += new System.EventHandler(this.Count_Click);
            // 
            // NewData
            // 
            resources.ApplyResources(this.NewData, "NewData");
            this.NewData.Name = "NewData";
            this.NewData.UseVisualStyleBackColor = true;
            this.NewData.Click += new System.EventHandler(this.NewData_Click);
            // 
            // HRRN
            // 
            resources.ApplyResources(this.HRRN, "HRRN");
            this.HRRN.Name = "HRRN";
            this.HRRN.ReadOnly = true;
            // 
            // HRRNLabel
            // 
            resources.ApplyResources(this.HRRNLabel, "HRRNLabel");
            this.HRRNLabel.Name = "HRRNLabel";
            // 
            // FCFS
            // 
            resources.ApplyResources(this.FCFS, "FCFS");
            this.FCFS.Name = "FCFS";
            this.FCFS.ReadOnly = true;
            // 
            // SJF
            // 
            resources.ApplyResources(this.SJF, "SJF");
            this.SJF.Name = "SJF";
            this.SJF.ReadOnly = true;
            // 
            // RR
            // 
            resources.ApplyResources(this.RR, "RR");
            this.RR.Name = "RR";
            this.RR.ReadOnly = true;
            // 
            // FCFSLabel
            // 
            resources.ApplyResources(this.FCFSLabel, "FCFSLabel");
            this.FCFSLabel.Name = "FCFSLabel";
            // 
            // SJFLabel
            // 
            resources.ApplyResources(this.SJFLabel, "SJFLabel");
            this.SJFLabel.Name = "SJFLabel";
            // 
            // RRLabel
            // 
            resources.ApplyResources(this.RRLabel, "RRLabel");
            this.RRLabel.Name = "RRLabel";
            // 
            // ShowDataButton
            // 
            resources.ApplyResources(this.ShowDataButton, "ShowDataButton");
            this.ShowDataButton.Name = "ShowDataButton";
            this.ShowDataButton.UseVisualStyleBackColor = true;
            this.ShowDataButton.Click += new System.EventHandler(this.ShowDataButton_Click);
            // 
            // StaticData
            // 
            resources.ApplyResources(this.StaticData, "StaticData");
            this.StaticData.Name = "StaticData";
            this.StaticData.UseVisualStyleBackColor = true;
            this.StaticData.Click += new System.EventHandler(this.StaticData_Click);
            // 
            // Form1
            // 
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.Controls.Add(this.StaticData);
            this.Controls.Add(this.ShowDataButton);
            this.Controls.Add(this.RRLabel);
            this.Controls.Add(this.SJFLabel);
            this.Controls.Add(this.FCFSLabel);
            this.Controls.Add(this.RR);
            this.Controls.Add(this.SJF);
            this.Controls.Add(this.FCFS);
            this.Controls.Add(this.HRRNLabel);
            this.Controls.Add(this.HRRN);
            this.Controls.Add(this.NewData);
            this.Controls.Add(this.Count);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Form1";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Count;
        private System.Windows.Forms.Button NewData;
        private System.Windows.Forms.RichTextBox HRRN;
        private System.Windows.Forms.Label HRRNLabel;
        private System.Windows.Forms.RichTextBox FCFS;
        private System.Windows.Forms.RichTextBox SJF;
        private System.Windows.Forms.RichTextBox RR;
        private System.Windows.Forms.Label FCFSLabel;
        private System.Windows.Forms.Label SJFLabel;
        private System.Windows.Forms.Label RRLabel;
        private System.Windows.Forms.Button ShowDataButton;
        private System.Windows.Forms.Button StaticData;
    }
}

