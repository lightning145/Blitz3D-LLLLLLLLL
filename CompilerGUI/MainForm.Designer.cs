namespace CompilerGUI
{
    partial class MainForm
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            this.bbFile = new System.Windows.Forms.TextBox();
            this.browseButton = new System.Windows.Forms.Button();
            this.quietMode = new System.Windows.Forms.CheckBox();
            this.vQuietMode = new System.Windows.Forms.CheckBox();
            this.compileOnly = new System.Windows.Forms.CheckBox();
            this.debugCompile = new System.Windows.Forms.CheckBox();
            this.dKeywords = new System.Windows.Forms.CheckBox();
            this.dKeywordsSyntax = new System.Windows.Forms.CheckBox();
            this.genExe = new System.Windows.Forms.CheckBox();
            this.exeName = new System.Windows.Forms.TextBox();
            this.compileButton = new System.Windows.Forms.Button();
            this.flagsGroup = new System.Windows.Forms.GroupBox();
            this.fileGroup = new System.Windows.Forms.GroupBox();
            this.nlaaCheck = new System.Windows.Forms.CheckBox();
            this.flagsGroup.SuspendLayout();
            this.fileGroup.SuspendLayout();
            this.SuspendLayout();
            // 
            // bbFile
            // 
            this.bbFile.Location = new System.Drawing.Point(8, 18);
            this.bbFile.Name = "bbFile";
            this.bbFile.Size = new System.Drawing.Size(340, 21);
            this.bbFile.TabIndex = 1;
            // 
            // browseButton
            // 
            this.browseButton.Location = new System.Drawing.Point(354, 19);
            this.browseButton.Name = "browseButton";
            this.browseButton.Size = new System.Drawing.Size(75, 18);
            this.browseButton.TabIndex = 2;
            this.browseButton.Text = "Browse";
            this.browseButton.UseVisualStyleBackColor = true;
            this.browseButton.Click += new System.EventHandler(this.browseButton_Click);
            // 
            // quietMode
            // 
            this.quietMode.AutoSize = true;
            this.quietMode.Location = new System.Drawing.Point(12, 17);
            this.quietMode.Name = "quietMode";
            this.quietMode.Size = new System.Drawing.Size(84, 16);
            this.quietMode.TabIndex = 4;
            this.quietMode.Text = "Quiet mode";
            this.quietMode.UseVisualStyleBackColor = true;
            this.quietMode.CheckedChanged += new System.EventHandler(this.quietMode_CheckedChanged);
            // 
            // vQuietMode
            // 
            this.vQuietMode.AutoSize = true;
            this.vQuietMode.Location = new System.Drawing.Point(115, 17);
            this.vQuietMode.Name = "vQuietMode";
            this.vQuietMode.Size = new System.Drawing.Size(114, 16);
            this.vQuietMode.TabIndex = 5;
            this.vQuietMode.Text = "Very quiet mode";
            this.vQuietMode.UseVisualStyleBackColor = true;
            this.vQuietMode.CheckedChanged += new System.EventHandler(this.vQuietMode_CheckedChanged);
            // 
            // compileOnly
            // 
            this.compileOnly.AutoSize = true;
            this.compileOnly.Location = new System.Drawing.Point(223, 17);
            this.compileOnly.Name = "compileOnly";
            this.compileOnly.Size = new System.Drawing.Size(96, 16);
            this.compileOnly.TabIndex = 6;
            this.compileOnly.Text = "Compile only";
            this.compileOnly.UseVisualStyleBackColor = true;
            this.compileOnly.CheckedChanged += new System.EventHandler(this.compileOnly_CheckedChanged);
            // 
            // debugCompile
            // 
            this.debugCompile.AutoSize = true;
            this.debugCompile.Location = new System.Drawing.Point(12, 38);
            this.debugCompile.Name = "debugCompile";
            this.debugCompile.Size = new System.Drawing.Size(102, 16);
            this.debugCompile.TabIndex = 7;
            this.debugCompile.Text = "Debug compile";
            this.debugCompile.UseVisualStyleBackColor = true;
            this.debugCompile.CheckedChanged += new System.EventHandler(this.debugCompile_CheckedChanged);
            // 
            // dKeywords
            // 
            this.dKeywords.AutoSize = true;
            this.dKeywords.Location = new System.Drawing.Point(115, 38);
            this.dKeywords.Name = "dKeywords";
            this.dKeywords.Size = new System.Drawing.Size(102, 16);
            this.dKeywords.TabIndex = 8;
            this.dKeywords.Text = "Dump keywords";
            this.dKeywords.UseVisualStyleBackColor = true;
            this.dKeywords.CheckedChanged += new System.EventHandler(this.dKeywords_CheckedChanged);
            // 
            // dKeywordsSyntax
            // 
            this.dKeywordsSyntax.AutoSize = true;
            this.dKeywordsSyntax.Location = new System.Drawing.Point(223, 38);
            this.dKeywordsSyntax.Name = "dKeywordsSyntax";
            this.dKeywordsSyntax.Size = new System.Drawing.Size(156, 16);
            this.dKeywordsSyntax.TabIndex = 9;
            this.dKeywordsSyntax.Text = "Dump keywords + syntax";
            this.dKeywordsSyntax.UseVisualStyleBackColor = true;
            this.dKeywordsSyntax.CheckedChanged += new System.EventHandler(this.dKeywordsSyntax_CheckedChanged);
            // 
            // genExe
            // 
            this.genExe.AutoSize = true;
            this.genExe.Location = new System.Drawing.Point(12, 59);
            this.genExe.Name = "genExe";
            this.genExe.Size = new System.Drawing.Size(108, 16);
            this.genExe.TabIndex = 10;
            this.genExe.Text = "Generate .exe:";
            this.genExe.UseVisualStyleBackColor = true;
            // 
            // exeName
            // 
            this.exeName.Location = new System.Drawing.Point(119, 56);
            this.exeName.Name = "exeName";
            this.exeName.Size = new System.Drawing.Size(255, 21);
            this.exeName.TabIndex = 11;
            // 
            // compileButton
            // 
            this.compileButton.Location = new System.Drawing.Point(12, 175);
            this.compileButton.Name = "compileButton";
            this.compileButton.Size = new System.Drawing.Size(98, 21);
            this.compileButton.TabIndex = 12;
            this.compileButton.Text = "Compile";
            this.compileButton.UseVisualStyleBackColor = true;
            this.compileButton.Click += new System.EventHandler(this.compileButton_Click);
            // 
            // flagsGroup
            // 
            this.flagsGroup.Controls.Add(this.nlaaCheck);
            this.flagsGroup.Controls.Add(this.exeName);
            this.flagsGroup.Controls.Add(this.genExe);
            this.flagsGroup.Controls.Add(this.dKeywordsSyntax);
            this.flagsGroup.Controls.Add(this.dKeywords);
            this.flagsGroup.Controls.Add(this.debugCompile);
            this.flagsGroup.Controls.Add(this.compileOnly);
            this.flagsGroup.Controls.Add(this.vQuietMode);
            this.flagsGroup.Controls.Add(this.quietMode);
            this.flagsGroup.Location = new System.Drawing.Point(12, 67);
            this.flagsGroup.Name = "flagsGroup";
            this.flagsGroup.Size = new System.Drawing.Size(435, 103);
            this.flagsGroup.TabIndex = 14;
            this.flagsGroup.TabStop = false;
            this.flagsGroup.Text = "Flags";
            // 
            // fileGroup
            // 
            this.fileGroup.Controls.Add(this.browseButton);
            this.fileGroup.Controls.Add(this.bbFile);
            this.fileGroup.Location = new System.Drawing.Point(12, 10);
            this.fileGroup.Name = "fileGroup";
            this.fileGroup.Size = new System.Drawing.Size(435, 52);
            this.fileGroup.TabIndex = 15;
            this.fileGroup.TabStop = false;
            this.fileGroup.Text = "File";
            // 
            // nlaaCheck
            // 
            this.nlaaCheck.AutoSize = true;
            this.nlaaCheck.Location = new System.Drawing.Point(12, 80);
            this.nlaaCheck.Name = "nlaaCheck";
            this.nlaaCheck.Size = new System.Drawing.Size(162, 16);
            this.nlaaCheck.TabIndex = 12;
            this.nlaaCheck.Text = "Not Large Address Aware";
            this.nlaaCheck.UseVisualStyleBackColor = true;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(459, 204);
            this.Controls.Add(this.fileGroup);
            this.Controls.Add(this.flagsGroup);
            this.Controls.Add(this.compileButton);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.Name = "MainForm";
            this.Text = "BlitzCC GUI";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.flagsGroup.ResumeLayout(false);
            this.flagsGroup.PerformLayout();
            this.fileGroup.ResumeLayout(false);
            this.fileGroup.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.TextBox bbFile;
        private System.Windows.Forms.Button browseButton;
        private System.Windows.Forms.CheckBox quietMode;
        private System.Windows.Forms.CheckBox vQuietMode;
        private System.Windows.Forms.CheckBox compileOnly;
        private System.Windows.Forms.CheckBox debugCompile;
        private System.Windows.Forms.CheckBox dKeywords;
        private System.Windows.Forms.CheckBox dKeywordsSyntax;
        private System.Windows.Forms.CheckBox genExe;
        private System.Windows.Forms.TextBox exeName;
        private System.Windows.Forms.Button compileButton;
        private System.Windows.Forms.GroupBox flagsGroup;
        private System.Windows.Forms.GroupBox fileGroup;
        private System.Windows.Forms.CheckBox nlaaCheck;
    }
}

