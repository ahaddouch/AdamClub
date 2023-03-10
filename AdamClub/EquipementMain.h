#pragma once
#include "AddEquipement.h"
#include "ModEquipement.h"
#include "SuprEquipement.h"
#include "AfficherEquipement.h"

namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EquipementMain
	/// </summary>
	public ref class EquipementMain : public System::Windows::Forms::Form
	{
	public:
		EquipementMain(void)
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
		~EquipementMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ p1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::Button^ btn_supp;
	private: System::Windows::Forms::Button^ btn_mod;
	private: System::Windows::Forms::Button^ btn_add;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EquipementMain::typeid));
			this->p1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_supp = (gcnew System::Windows::Forms::Button());
			this->btn_mod = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->p1->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btn_search);
			this->panel1->Controls->Add(this->btn_supp);
			this->panel1->Controls->Add(this->btn_mod);
			this->panel1->Controls->Add(this->btn_add);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1300, 154);
			this->panel1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button2->Location = System::Drawing::Point(1089, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(211, 158);
			this->button2->TabIndex = 2;
			this->button2->Text = L" ?quipements";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(12, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 92);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EquipementMain::button1_Click);
			// 
			// btn_search
			// 
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(786, 26);
			this->btn_search->Margin = System::Windows::Forms::Padding(2);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(130, 102);
			this->btn_search->TabIndex = 0;
			this->btn_search->Text = L"Chercher";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &EquipementMain::btn_search_Click);
			// 
			// btn_supp
			// 
			this->btn_supp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_supp->Location = System::Drawing::Point(652, 26);
			this->btn_supp->Margin = System::Windows::Forms::Padding(2);
			this->btn_supp->Name = L"btn_supp";
			this->btn_supp->Size = System::Drawing::Size(130, 102);
			this->btn_supp->TabIndex = 0;
			this->btn_supp->Text = L"Supprimer";
			this->btn_supp->UseVisualStyleBackColor = true;
			this->btn_supp->Click += gcnew System::EventHandler(this, &EquipementMain::btn_supp_Click);
			// 
			// btn_mod
			// 
			this->btn_mod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mod->Location = System::Drawing::Point(518, 26);
			this->btn_mod->Margin = System::Windows::Forms::Padding(2);
			this->btn_mod->Name = L"btn_mod";
			this->btn_mod->Size = System::Drawing::Size(130, 102);
			this->btn_mod->TabIndex = 0;
			this->btn_mod->Text = L" Modifier";
			this->btn_mod->UseVisualStyleBackColor = true;
			this->btn_mod->Click += gcnew System::EventHandler(this, &EquipementMain::btn_mod_Click);
			// 
			// btn_add
			// 
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(384, 26);
			this->btn_add->Margin = System::Windows::Forms::Padding(2);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(130, 102);
			this->btn_add->TabIndex = 0;
			this->btn_add->Text = L"Ajouter";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &EquipementMain::btn_add_Click);
			// 
			// EquipementMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1300, 805);
			this->Controls->Add(this->p1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EquipementMain";
			this->Text = L"EquipementMain";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EquipementMain::EquipementMain_FormClosing);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
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


private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {

	AddEquipement^ f = gcnew AddEquipement();
	AfficherFenetre(f);
}
private: System::Void EquipementMain_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (p1->Controls->Count > 0)
	{
		Form^ oldForm = (Form^)p1->Controls[0];
		oldForm->Close();
	}
}
private: System::Void btn_mod_Click(System::Object^ sender, System::EventArgs^ e) {
	ModEquipement^ f = gcnew ModEquipement();
	AfficherFenetre(f);
}
private: System::Void btn_supp_Click(System::Object^ sender, System::EventArgs^ e) {
	SuppEquipement^ f = gcnew SuppEquipement();
	AfficherFenetre(f);
}
private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
	AfficherEquipement^ f = gcnew AfficherEquipement();
	AfficherFenetre(f);
}
};
}
