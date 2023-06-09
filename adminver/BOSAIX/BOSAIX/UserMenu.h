﻿#pragma once
#include <iostream>
namespace BOSAIX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class UserMenu : public System::Windows::Forms::Form
	{
	public:
		UserMenu(void)
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
		~UserMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ User_name;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ Balance;
	private: System::Windows::Forms::Label^ Time;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ PCoff;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;

	private: System::Windows::Forms::Button^ Exit;
	private: bool govno1 = 0;
	private: bool govno2 = 0;
	private: bool govno3 = 0;
	private: bool govno4 = 0;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserMenu::typeid));
			this->User_name = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Balance = (gcnew System::Windows::Forms::Label());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->PCoff = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// User_name
			// 
			this->User_name->AutoSize = true;
			this->User_name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->User_name->ForeColor = System::Drawing::SystemColors::Control;
			this->User_name->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"User_name.Image")));
			this->User_name->Location = System::Drawing::Point(56, 185);
			this->User_name->Name = L"User_name";
			this->User_name->Size = System::Drawing::Size(169, 29);
			this->User_name->TabIndex = 1;
			this->User_name->Text = L"Администратор\r\n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(320, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(641, 131);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UserMenu::pictureBox1_Click);
			// 
			// Balance
			// 
			this->Balance->AutoSize = true;
			this->Balance->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Balance->ForeColor = System::Drawing::SystemColors::Control;
			this->Balance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Balance.Image")));
			this->Balance->Location = System::Drawing::Point(12, 214);
			this->Balance->Name = L"Balance";
			this->Balance->Size = System::Drawing::Size(253, 29);
			this->Balance->TabIndex = 4;
			this->Balance->Text = L"кол-во компьютеров: 25\r\n";
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold));
			this->Time->ForeColor = System::Drawing::SystemColors::Control;
			this->Time->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Time.Image")));
			this->Time->Location = System::Drawing::Point(12, 243);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(253, 29);
			this->Time->TabIndex = 5;
			this->Time->Text = L"компьютеров занято: 10";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(189, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1091, 183);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// PCoff
			// 
			this->PCoff->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PCoff->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold));
			this->PCoff->ForeColor = System::Drawing::SystemColors::Control;
			this->PCoff->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PCoff.Image")));
			this->PCoff->Location = System::Drawing::Point(0, 644);
			this->PCoff->Name = L"PCoff";
			this->PCoff->Size = System::Drawing::Size(314, 76);
			this->PCoff->TabIndex = 9;
			this->PCoff->Text = L"Выключить пк";
			this->PCoff->UseVisualStyleBackColor = true;
			this->PCoff->Click += gcnew System::EventHandler(this, &UserMenu::PCoff_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(314, 720);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Red;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(369, 197);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(150, 150);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &UserMenu::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Red;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(595, 197);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(150, 150);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &UserMenu::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Red;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1058, 197);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(150, 150);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &UserMenu::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Red;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(829, 197);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(157, 150);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 13;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &UserMenu::pictureBox8_Click);
			// 
			// Exit
			// 
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10, System::Drawing::FontStyle::Bold));
			this->Exit->ForeColor = System::Drawing::SystemColors::Control;
			this->Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.Image")));
			this->Exit->Location = System::Drawing::Point(1255, 0);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(25, 25);
			this->Exit->TabIndex = 16;
			this->Exit->Text = L"X";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &UserMenu::Exit_Click);
			// 
			// UserMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->PCoff);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->Balance);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->User_name);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UserMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BOSAIX ver 0.1 beta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Перезагружаем пк при завершении сеанса
	private: System::Void PCoff_Click(System::Object^ sender, System::EventArgs^ e) {
		system("shutdown /r /t 0");
	}
	private: System::Void BuyTime_1_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
		return;//Ненужная функция :/
	}
		   //Текст кнопки продвинутый меняется на "250р - 4 часа" при наведении мыши
	private: System::Void BuyTime_1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	}
		   //Текст кнопки продвинутый меняется на "Продвинутый" если мышь не наведена
	private: System::Void BuyTime_1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	}
		   //Пасхалка BOSAIX_Button
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Пасхалка");
	}
		   //Start Chrome
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (govno4 == 0) {
			govno4 = 1;
			this->pictureBox7->BackColor = Color::Green;
		}
		else {
			govno4 = 0;
			this->pictureBox7->BackColor = Color::Red;
		}
	}
	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (govno3 == 0) {
			govno3 = 1;
			this->pictureBox8->BackColor = Color::Green;
		}
		else {
			govno3 = 0;
			this->pictureBox8->BackColor = Color::Red;
		}
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (govno1 == 0) {
			govno1 = 1;
			this->pictureBox5->BackColor = Color::Green;
		}
		else {
			govno1 = 0;
			this->pictureBox5->BackColor = Color::Red;
		}
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (govno2 == 0) {
		govno2 = 1;
		this->pictureBox6->BackColor = Color::Green;
	}
	else {
		govno2 = 0;
		this->pictureBox6->BackColor = Color::Red;
	}
}
};
}
