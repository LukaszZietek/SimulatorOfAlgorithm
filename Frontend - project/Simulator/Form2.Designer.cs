namespace Simulator
{
    partial class Form2
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form2));
            this.AddButton = new System.Windows.Forms.Button();
            this.InputTimeBox = new System.Windows.Forms.ComboBox();
            this.ExecutableTimeBox = new System.Windows.Forms.ComboBox();
            this.InputTimeLabel = new System.Windows.Forms.Label();
            this.ExecutableTimeLabel = new System.Windows.Forms.Label();
            this.AddedElementLabel = new System.Windows.Forms.Label();
            this.CountAddedElementLabel = new System.Windows.Forms.Label();
            this.ClearButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // AddButton
            // 
            this.AddButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.AddButton.Location = new System.Drawing.Point(186, 320);
            this.AddButton.Name = "AddButton";
            this.AddButton.Size = new System.Drawing.Size(333, 56);
            this.AddButton.TabIndex = 0;
            this.AddButton.Text = "Add";
            this.AddButton.UseVisualStyleBackColor = true;
            this.AddButton.Click += new System.EventHandler(this.AddButton_Click);
            // 
            // InputTimeBox
            // 
            this.InputTimeBox.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.InputTimeBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.InputTimeBox.FormattingEnabled = true;
            this.InputTimeBox.Location = new System.Drawing.Point(221, 82);
            this.InputTimeBox.Name = "InputTimeBox";
            this.InputTimeBox.Size = new System.Drawing.Size(249, 24);
            this.InputTimeBox.TabIndex = 1;
            // 
            // ExecutableTimeBox
            // 
            this.ExecutableTimeBox.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.ExecutableTimeBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.ExecutableTimeBox.FormattingEnabled = true;
            this.ExecutableTimeBox.Location = new System.Drawing.Point(221, 156);
            this.ExecutableTimeBox.Name = "ExecutableTimeBox";
            this.ExecutableTimeBox.Size = new System.Drawing.Size(249, 24);
            this.ExecutableTimeBox.TabIndex = 2;
            // 
            // InputTimeLabel
            // 
            this.InputTimeLabel.AutoSize = true;
            this.InputTimeLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.InputTimeLabel.Location = new System.Drawing.Point(100, 82);
            this.InputTimeLabel.Name = "InputTimeLabel";
            this.InputTimeLabel.Size = new System.Drawing.Size(92, 20);
            this.InputTimeLabel.TabIndex = 3;
            this.InputTimeLabel.Text = "Input Time:";
            this.InputTimeLabel.Click += new System.EventHandler(this.label1_Click);
            // 
            // ExecutableTimeLabel
            // 
            this.ExecutableTimeLabel.AutoSize = true;
            this.ExecutableTimeLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.ExecutableTimeLabel.Location = new System.Drawing.Point(54, 160);
            this.ExecutableTimeLabel.Name = "ExecutableTimeLabel";
            this.ExecutableTimeLabel.Size = new System.Drawing.Size(138, 20);
            this.ExecutableTimeLabel.TabIndex = 4;
            this.ExecutableTimeLabel.Text = "Executable Time:";
            // 
            // AddedElementLabel
            // 
            this.AddedElementLabel.AutoSize = true;
            this.AddedElementLabel.Location = new System.Drawing.Point(85, 261);
            this.AddedElementLabel.Name = "AddedElementLabel";
            this.AddedElementLabel.Size = new System.Drawing.Size(107, 17);
            this.AddedElementLabel.TabIndex = 5;
            this.AddedElementLabel.Text = "Added element:";
            // 
            // CountAddedElementLabel
            // 
            this.CountAddedElementLabel.AutoSize = true;
            this.CountAddedElementLabel.Location = new System.Drawing.Point(218, 261);
            this.CountAddedElementLabel.Name = "CountAddedElementLabel";
            this.CountAddedElementLabel.Size = new System.Drawing.Size(16, 17);
            this.CountAddedElementLabel.TabIndex = 6;
            this.CountAddedElementLabel.Text = "0";
            // 
            // ClearButton
            // 
            this.ClearButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.ClearButton.Location = new System.Drawing.Point(585, 320);
            this.ClearButton.Name = "ClearButton";
            this.ClearButton.Size = new System.Drawing.Size(132, 56);
            this.ClearButton.TabIndex = 7;
            this.ClearButton.Text = "Clear";
            this.ClearButton.UseVisualStyleBackColor = true;
            this.ClearButton.Click += new System.EventHandler(this.ClearButton_Click);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.ClearButton);
            this.Controls.Add(this.CountAddedElementLabel);
            this.Controls.Add(this.AddedElementLabel);
            this.Controls.Add(this.ExecutableTimeLabel);
            this.Controls.Add(this.InputTimeLabel);
            this.Controls.Add(this.ExecutableTimeBox);
            this.Controls.Add(this.InputTimeBox);
            this.Controls.Add(this.AddButton);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Form2";
            this.Text = "Add your own input data";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form2_FormClosing);
            this.Load += new System.EventHandler(this.Form2_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button AddButton;
        private System.Windows.Forms.ComboBox InputTimeBox;
        private System.Windows.Forms.ComboBox ExecutableTimeBox;
        private System.Windows.Forms.Label InputTimeLabel;
        private System.Windows.Forms.Label ExecutableTimeLabel;
        private System.Windows.Forms.Label AddedElementLabel;
        private System.Windows.Forms.Label CountAddedElementLabel;
        private System.Windows.Forms.Button ClearButton;
    }
}