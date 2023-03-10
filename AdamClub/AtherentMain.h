#pragma once
#include "AddAdherent.h"
#include "Adherent.h"
#include <iostream>
#include "ModAdherent.h"
#include "AfficherAdherent.h"
#include "SuprAdherent.h"
#include "AtherentMain.h"
#include "AdherentToEquipe.h"

namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AtherentMain
	/// </summary>
	public ref class AtherentMain : public System::Windows::Forms::Form
	{
	public:
		AtherentMain(void)
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
		~AtherentMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_search;
	protected:

	private: System::Windows::Forms::Button^ btn_supp;

	private: System::Windows::Forms::Button^ btn_mod;

	private: System::Windows::Forms::Button^ btn_add;




	private: System::Windows::Forms::FlowLayoutPanel^ p1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AtherentMain::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_supp = (gcnew System::Windows::Forms::Button());
			this->btn_mod = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->p1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->btn_search);
			this->panel1->Controls->Add(this->btn_supp);
			this->panel1->Controls->Add(this->btn_mod);
			this->panel1->Controls->Add(this->btn_add);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1300, 154);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AtherentMain::panel1_Paint);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->Enabled = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"MV Boli", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button5->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button5->Location = System::Drawing::Point(1100, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(197, 151);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Adh?rents";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AtherentMain::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(24, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 92);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AtherentMain::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(855, 24);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 102);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Affecte \r\nun equipe\r\n";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AtherentMain::button2_Click);
			// 
			// btn_search
			// 
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(721, 24);
			this->btn_search->Margin = System::Windows::Forms::Padding(2);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(130, 102);
			this->btn_search->TabIndex = 0;
			this->btn_search->Text = L"Chercher";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &AtherentMain::btn_search_Click);
			// 
			// btn_supp
			// 
			this->btn_supp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_supp->Location = System::Drawing::Point(587, 24);
			this->btn_supp->Margin = System::Windows::Forms::Padding(2);
			this->btn_supp->Name = L"btn_supp";
			this->btn_supp->Size = System::Drawing::Size(130, 102);
			this->btn_supp->TabIndex = 0;
			this->btn_supp->Text = L"Supprimer";
			this->btn_supp->UseVisualStyleBackColor = true;
			this->btn_supp->Click += gcnew System::EventHandler(this, &AtherentMain::btn_supp_Click);
			// 
			// btn_mod
			// 
			this->btn_mod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mod->Location = System::Drawing::Point(453, 24);
			this->btn_mod->Margin = System::Windows::Forms::Padding(2);
			this->btn_mod->Name = L"btn_mod";
			this->btn_mod->Size = System::Drawing::Size(130, 102);
			this->btn_mod->TabIndex = 0;
			this->btn_mod->Text = L"Modifier";
			this->btn_mod->UseVisualStyleBackColor = true;
			this->btn_mod->Click += gcnew System::EventHandler(this, &AtherentMain::btn_mod_Click);
			// 
			// btn_add
			// 
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(319, 24);
			this->btn_add->Margin = System::Windows::Forms::Padding(2);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(130, 102);
			this->btn_add->TabIndex = 0;
			this->btn_add->Text = L"Ajouter";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &AtherentMain::btn_add_Click);
			// 
			// p1
			// 
			this->p1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1.BackgroundImage")));
			this->p1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->p1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->p1->Location = System::Drawing::Point(0, 158);
			this->p1->Margin = System::Windows::Forms::Padding(2);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(1300, 647);
			this->p1->TabIndex = 1;
			this->p1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AtherentMain::p1_Paint);
			// 
			// AtherentMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1300, 805);
			this->Controls->Add(this->p1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AtherentMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AtherentMain";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AtherentMain::AtherentMain_FormClosing);
			this->Load += gcnew System::EventHandler(this, &AtherentMain::AtherentMain_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AtherentMain_Load(System::Object^ sender, System::EventArgs^ e) {
	}
public:
	void AfficherFenetre(Form^ f)
	{
			   if (p1->Controls->Count > 0)
			   {
				   Form^ oldForm = dynamic_cast<Form^>(p1->Controls[0]);
				   if (oldForm)
					   oldForm->Close();
			   }

			   p1->Controls->Clear();
			   f->TopLevel = false;
			   f->AutoScroll = true;
			   
			   f->ControlBox = false;
			   f->MaximizeBox = false;
			   f->MinimizeBox = false;
			   this->p1->Controls->Add(f);
			   f->Show();
	}

private: System::Void AtherentMain_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	if (p1->Controls->Count > 0)
	{
		Form^ oldForm = (Form^)p1->Controls[0];
		oldForm->Close();
	}

}
private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	
	AddAdherent^ f = gcnew AddAdherent();
	AfficherFenetre(f);
}
private: System::Void btn_mod_Click(System::Object^ sender, System::EventArgs^ e) {
	ModAdherent^ f = gcnew ModAdherent();
	AfficherFenetre(f);
}
private: System::Void btn_supp_Click(System::Object^ sender, System::EventArgs^ e) {
	SuprAdherent^ f = gcnew SuprAdherent();
	AfficherFenetre(f);
}
private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
	AfficherAdherent^ f = gcnew AfficherAdherent();
	AfficherFenetre(f);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void p1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	AdherentToEquipe^ f = gcnew AdherentToEquipe();
	AfficherFenetre(f);

}
};
}
