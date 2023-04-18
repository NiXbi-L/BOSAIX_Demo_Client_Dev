#pragma once
#include "UserMenu.h"
namespace BOSAIX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Enter;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ logbox;
	private: System::Windows::Forms::TextBox^ pasbox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Chek;

	private: bool Chk = 0;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->logbox = (gcnew System::Windows::Forms::TextBox());
			this->pasbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Chek = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Enter
			// 
			this->Enter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Enter.BackgroundImage")));
			this->Enter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Enter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Enter->ForeColor = System::Drawing::SystemColors::Control;
			this->Enter->Location = System::Drawing::Point(12, 233);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(176, 55);
			this->Enter->TabIndex = 0;
			this->Enter->Text = L"Войти";
			this->Enter->UseVisualStyleBackColor = true;
			this->Enter->Click += gcnew System::EventHandler(this, &Login::button1_Click);
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
			// pasbox
			// 
			this->pasbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->pasbox->ForeColor = System::Drawing::SystemColors::Control;
			this->pasbox->Location = System::Drawing::Point(12, 154);
			this->pasbox->Name = L"pasbox";
			this->pasbox->PasswordChar = 'X';
			this->pasbox->Size = System::Drawing::Size(176, 20);
			this->pasbox->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Login:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(12, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Pasword:";
			// 
			// Chek
			// 
			this->Chek->AutoSize = true;
			this->Chek->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Chek->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Chek->ForeColor = System::Drawing::SystemColors::Control;
			this->Chek->Location = System::Drawing::Point(12, 177);
			this->Chek->Name = L"Chek";
			this->Chek->Size = System::Drawing::Size(57, 15);
			this->Chek->TabIndex = 6;
			this->Chek->Text = L"У меня чек";
			this->Chek->Click += gcnew System::EventHandler(this, &Login::Chek_Click);
			this->Chek->MouseEnter += gcnew System::EventHandler(this, &Login::Chek_MouseEnter);
			this->Chek->MouseLeave += gcnew System::EventHandler(this, &Login::Chek_MouseLeave);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->ClientSize = System::Drawing::Size(200, 300);
			this->Controls->Add(this->Chek);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pasbox);
			this->Controls->Add(this->logbox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Enter);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		UserMenu^ usermenu = gcnew UserMenu();
		usermenu->Show();
	}
private: System::Void Chek_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->Chek->ForeColor = Color::Blue;
}
private: System::Void Chek_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->Chek->ForeColor = Color::White;
}
private: System::Void Chek_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Chk) {
		Chk = 1;
		this->logbox->Text = "";
		this->pasbox->Visible = false;
		this->label2->Visible = false;
		this->Chek->Location = System::Drawing::Point(12,131);
		this->label1->Text = "Номер чека:";
		this->Chek->Text = "У меня уже есть аккаунт";
	}
	else {
		Chk = 0;
		this->logbox->Text = "";
		this->pasbox->Visible = true;
		this->label2->Visible = true;
		this->Chek->Location = System::Drawing::Point(12, 177);
		this->label1->Text = "Login:";
		this->Chek->Text = "У меня чек";
	}
}
};
}
