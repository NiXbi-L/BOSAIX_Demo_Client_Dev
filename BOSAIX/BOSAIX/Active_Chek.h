#pragma once

namespace BOSAIX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Active_Chek
	/// </summary>
	public ref class Active_Chek : public System::Windows::Forms::Form
	{
	public:
		Active_Chek(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Active_Chek()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Enter;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ logbox;

	private: System::Windows::Forms::Label^ label1;



	private: bool Chk = 0;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Active_Chek::typeid));
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->logbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Enter
			// 
			this->Enter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Enter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Enter->ForeColor = System::Drawing::SystemColors::Control;
			this->Enter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Enter.Image")));
			this->Enter->Location = System::Drawing::Point(12, 233);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(176, 55);
			this->Enter->TabIndex = 0;
			this->Enter->Text = L"Активировать";
			this->Enter->UseVisualStyleBackColor = true;
			this->Enter->Click += gcnew System::EventHandler(this, &Active_Chek::Enter_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(176, 58);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// logbox
			// 
			this->logbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->logbox->ForeColor = System::Drawing::SystemColors::Control;
			this->logbox->Location = System::Drawing::Point(12, 109);
			this->logbox->Name = L"logbox";
			this->logbox->Size = System::Drawing::Size(176, 20);
			this->logbox->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Номер чека:";
			// 
			// Active_Chek
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->ClientSize = System::Drawing::Size(200, 300);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->logbox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Enter);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Active_Chek";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ввод чека";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->logbox->Text == "1234")this->Hide();
	else MessageBox::Show("Такого чека нет");
	}
};
}
