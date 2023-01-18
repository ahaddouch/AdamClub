#pragma once
#include"Entraineur.h"

namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddEntraineur
	/// </summary>
	public ref class AddEntraineur : public System::Windows::Forms::Form
	{
	public:
		AddEntraineur(void)
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
		~AddEntraineur()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtn;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_tel;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_id;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ rbp;
	private: System::Windows::Forms::RadioButton^ rbv;


	private: System::Windows::Forms::Label^ lbs;
	private: System::Windows::Forms::TextBox^ txt_salaire;

	private: System::Windows::Forms::Label^ lbde;

	private: System::Windows::Forms::DateTimePicker^ dte;


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
			this->dtn = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_tel = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rbp = (gcnew System::Windows::Forms::RadioButton());
			this->rbv = (gcnew System::Windows::Forms::RadioButton());
			this->lbs = (gcnew System::Windows::Forms::Label());
			this->txt_salaire = (gcnew System::Windows::Forms::TextBox());
			this->lbde = (gcnew System::Windows::Forms::Label());
			this->dte = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// dtn
			// 
			this->dtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->dtn->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtn->Location = System::Drawing::Point(652, 310);
			this->dtn->Margin = System::Windows::Forms::Padding(2);
			this->dtn->Name = L"dtn";
			this->dtn->Size = System::Drawing::Size(250, 38);
			this->dtn->TabIndex = 52;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(1041, 506);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 51);
			this->button2->TabIndex = 50;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddEntraineur::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(854, 506);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 51);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddEntraineur::button1_Click);
			// 
			// txt_tel
			// 
			this->txt_tel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_tel->Location = System::Drawing::Point(652, 252);
			this->txt_tel->Margin = System::Windows::Forms::Padding(2);
			this->txt_tel->Name = L"txt_tel";
			this->txt_tel->Size = System::Drawing::Size(250, 38);
			this->txt_tel->TabIndex = 47;
			// 
			// txt_nom
			// 
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_nom->Location = System::Drawing::Point(652, 190);
			this->txt_nom->Margin = System::Windows::Forms::Padding(2);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(250, 38);
			this->txt_nom->TabIndex = 48;
			// 
			// txt_id
			// 
			this->txt_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_id->Location = System::Drawing::Point(652, 127);
			this->txt_id->Margin = System::Windows::Forms::Padding(2);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(250, 38);
			this->txt_id->TabIndex = 49;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(362, 316);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 31);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Date de Naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(362, 255);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 31);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Telephone";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(362, 193);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 31);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Nom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(362, 130);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 31);
			this->label1->TabIndex = 46;
			this->label1->Text = L"ID";
			// 
			// rbp
			// 
			this->rbp->Appearance = System::Windows::Forms::Appearance::Button;
			this->rbp->AutoSize = true;
			this->rbp->Checked = true;
			this->rbp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbp->ForeColor = System::Drawing::Color::DarkGray;
			this->rbp->Location = System::Drawing::Point(583, 70);
			this->rbp->Name = L"rbp";
			this->rbp->Size = System::Drawing::Size(156, 41);
			this->rbp->TabIndex = 54;
			this->rbp->TabStop = true;
			this->rbp->Text = L"Permanent";
			this->rbp->UseVisualStyleBackColor = true;
			this->rbp->CheckedChanged += gcnew System::EventHandler(this, &AddEntraineur::rbp_CheckedChanged);
			// 
			// rbv
			// 
			this->rbv->Appearance = System::Windows::Forms::Appearance::Button;
			this->rbv->AutoSize = true;
			this->rbv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbv->ForeColor = System::Drawing::Color::DarkGray;
			this->rbv->Location = System::Drawing::Point(775, 70);
			this->rbv->Name = L"rbv";
			this->rbv->Size = System::Drawing::Size(153, 41);
			this->rbv->TabIndex = 54;
			this->rbv->Text = L"Vacataires";
			this->rbv->UseVisualStyleBackColor = true;
			this->rbv->CheckedChanged += gcnew System::EventHandler(this, &AddEntraineur::rbp_CheckedChanged);
			// 
			// lbs
			// 
			this->lbs->AutoSize = true;
			this->lbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lbs->ForeColor = System::Drawing::Color::White;
			this->lbs->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->lbs->Location = System::Drawing::Point(362, 377);
			this->lbs->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbs->Name = L"lbs";
			this->lbs->Size = System::Drawing::Size(98, 31);
			this->lbs->TabIndex = 44;
			this->lbs->Text = L"Salaire";
			// 
			// txt_salaire
			// 
			this->txt_salaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_salaire->Location = System::Drawing::Point(652, 374);
			this->txt_salaire->Margin = System::Windows::Forms::Padding(2);
			this->txt_salaire->Name = L"txt_salaire";
			this->txt_salaire->Size = System::Drawing::Size(250, 38);
			this->txt_salaire->TabIndex = 47;
			// 
			// lbde
			// 
			this->lbde->AutoSize = true;
			this->lbde->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lbde->ForeColor = System::Drawing::Color::White;
			this->lbde->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->lbde->Location = System::Drawing::Point(362, 439);
			this->lbde->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbde->Name = L"lbde";
			this->lbde->Size = System::Drawing::Size(233, 31);
			this->lbde->TabIndex = 42;
			this->lbde->Text = L"Date d’embauche ";
			// 
			// dte
			// 
			this->dte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->dte->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dte->Location = System::Drawing::Point(652, 433);
			this->dte->Margin = System::Windows::Forms::Padding(2);
			this->dte->Name = L"dte";
			this->dte->Size = System::Drawing::Size(250, 38);
			this->dte->TabIndex = 53;
			// 
			// AddEntraineur
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1284, 608);
			this->Controls->Add(this->rbv);
			this->Controls->Add(this->rbp);
			this->Controls->Add(this->dtn);
			this->Controls->Add(this->dte);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_salaire);
			this->Controls->Add(this->txt_tel);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->lbde);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->lbs);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddEntraineur";
			this->Text = L"AddEntraineur";
			this->Load += gcnew System::EventHandler(this, &AddEntraineur::AddEntraineur_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void change() {
			if (rbp->Checked) {
				lbs->Text = "Salaire";
				
				lbde->Text = "Date d’embauche ";
				dte->Show();
			}
			else
			{
				lbs->Text = "Praix par Heure";
				
				lbde->Text = "";
				dte->Hide();

			}
				
		}
	private: System::Void AddEntraineur_Load(System::Object^ sender, System::EventArgs^ e) {
		change();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void rbp_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	change();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int id = Convert::ToInt64(txt_id->Text);
	String^ nom = txt_nom->Text->ToString();
	String^ tel = txt_tel->Text->ToString();
	DateTime^ dn = dtn->Value;
	float salaire = Convert::ToDouble(txt_salaire->Text);
	DateTime^ de = dte->Value;
	
	if (rbp->Checked) {
		Entraineur en(id , nom, tel, dn, de,salaire);
		en.uploadE();
		
	}
	else
	{
		Entraineur en(id, nom, tel, dn, salaire);
		en.uploadE();

	}
	txt_id->Clear();
	txt_nom->Clear();
	txt_tel->Clear();
	txt_salaire->Clear();
	dtn->Value = DateTime::Now;
	dte->Value = DateTime::Now;
	
}
};
}
