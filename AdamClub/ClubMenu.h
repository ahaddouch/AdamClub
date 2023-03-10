#pragma once
#include "AtherentMain.h"
#include "EntraineurMain.h"
#include "EquipementMain.h"
#include "EquipeMain.h"
#include "mainSport.h"
#include "SeanceMain.h"
namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClubMenu
	/// </summary>
	public ref class ClubMenu : public System::Windows::Forms::Form
	{
	public:
		ClubMenu(void)
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
		~ClubMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ p1;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ p2;
	private: System::Windows::Forms::Button^ button6;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClubMenu::typeid));
			this->p1 = (gcnew System::Windows::Forms::Panel());
			this->p2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->p1->SuspendLayout();
			this->SuspendLayout();
			// 
			// p1
			// 
			this->p1->BackColor = System::Drawing::Color::Transparent;
			this->p1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1.BackgroundImage")));
			this->p1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->p1->Controls->Add(this->p2);
			this->p1->Controls->Add(this->button4);
			this->p1->Controls->Add(this->button6);
			this->p1->Controls->Add(this->button5);
			this->p1->Controls->Add(this->button3);
			this->p1->Controls->Add(this->button2);
			this->p1->Controls->Add(this->button1);
			this->p1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->p1->Location = System::Drawing::Point(0, 0);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(1289, 771);
			this->p1->TabIndex = 0;
			this->p1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ClubMenu::p1_Paint);
			// 
			// p2
			// 
			this->p2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->p2->Location = System::Drawing::Point(0, 0);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(1289, 771);
			this->p2->TabIndex = 1;
			this->p2->Click += gcnew System::EventHandler(this, &ClubMenu::p2_Click);
			this->p2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ClubMenu::p2_Paint);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->Font = (gcnew System::Drawing::Font(L"MV Boli", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button4->Location = System::Drawing::Point(853, 573);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(193, 158);
			this->button4->TabIndex = 0;
			this->button4->Text = L"S?ances";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ClubMenu::button4_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->Font = (gcnew System::Drawing::Font(L"MV Boli", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button6->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button6->Location = System::Drawing::Point(550, 596);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(198, 158);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Sport";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ClubMenu::button6_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->Font = (gcnew System::Drawing::Font(L"MV Boli", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button5->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button5->Location = System::Drawing::Point(550, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(198, 158);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Adh?rents";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ClubMenu::button3_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button3->Location = System::Drawing::Point(233, 573);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(193, 158);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Equipes";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ClubMenu::button3_Click_1);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 23, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(197, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 158);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Entraineurs";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ClubMenu::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button1->Location = System::Drawing::Point(899, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 158);
			this->button1->TabIndex = 0;
			this->button1->Text = L" ?quipements";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ClubMenu::button1_Click);
			// 
			// ClubMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1289, 771);
			this->Controls->Add(this->p1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ClubMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ClubMenu";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ClubMenu::ClubMenu_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ClubMenu::ClubMenu_Load);
			this->p1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			void AfficherFenetre(Form^ f)
			{
				p2->Show();
				if (p2->Controls->Count > 0)
				{
					Form^ oldForm = dynamic_cast<Form^>(p2->Controls[0]);
					if (oldForm)
						oldForm->Close();
				}

				p2->Controls->Clear();
				f->TopLevel = false;
				f->AutoScroll = true;

				f->ControlBox = false;
				f->MaximizeBox = false;
				f->MinimizeBox = false;
				this->p2->Controls->Add(f);
				f->Show();
			}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		AtherentMain^ f = gcnew AtherentMain();
		AfficherFenetre(f);
	}
private: System::Void ClubMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (p2->Controls->Count > 0)
	{
		Form^ oldForm = (Form^)p1->Controls[0];
		oldForm->Close();
	}
}
private: System::Void p1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	EntraineurMain^ f = gcnew EntraineurMain();
	AfficherFenetre(f);

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	EquipementMain^ f = gcnew EquipementMain();
	AfficherFenetre(f);

}
private: System::Void ClubMenu_Load(System::Object^ sender, System::EventArgs^ e) {

	p2->Hide();
}
private: System::Void p2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	if (p2->Controls->Count ==0)
	{
		p2->Hide();
	}
}
private: System::Void p2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p2->Controls->Count == 0)
	{
		p2->Hide();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	SeanceMain^ f = gcnew SeanceMain();
	AfficherFenetre(f);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	mainSport^ f = gcnew mainSport();
	AfficherFenetre(f);
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	EquipeMain^ f = gcnew EquipeMain();
	AfficherFenetre(f);
}
};
}
