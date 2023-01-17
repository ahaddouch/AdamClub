#pragma once
#include "Adherent.h"
//#include <vector>
#include <iostream>
#include <List>

namespace AdamClub {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddAdherent
	/// </summary>
	public ref class AddAdherent : public System::Windows::Forms::Form
	{
	public:
		AddAdherent(void)
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
		~AddAdherent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DateTimePicker^ dtn;
	private: System::Windows::Forms::DateTimePicker^ dta;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_tel;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddAdherent::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dtn = (gcnew System::Windows::Forms::DateTimePicker());
			this->dta = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_tel = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(978, 182);
			this->panel1->TabIndex = 18;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(791, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(187, 174);
			this->button6->TabIndex = 4;
			this->button6->Text = L"button3";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(606, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(187, 174);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button3";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(421, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(187, 174);
			this->button4->TabIndex = 4;
			this->button4->Text = L"button3";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(237, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(187, 174);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(3, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(228, 187);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dtn);
			this->panel2->Controls->Add(this->dta);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->txt_tel);
			this->panel2->Controls->Add(this->txt_nom);
			this->panel2->Controls->Add(this->txt_id);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 183);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(978, 561);
			this->panel2->TabIndex = 19;
			// 
			// dtn
			// 
			this->dtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->dtn->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtn->Location = System::Drawing::Point(437, 264);
			this->dtn->Name = L"dtn";
			this->dtn->Size = System::Drawing::Size(264, 32);
			this->dtn->TabIndex = 28;
			// 
			// dta
			// 
			this->dta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->dta->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dta->Location = System::Drawing::Point(437, 334);
			this->dta->Name = L"dta";
			this->dta->Size = System::Drawing::Size(264, 32);
			this->dta->TabIndex = 29;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(678, 440);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 67);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddAdherent::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(437, 440);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 67);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddAdherent::button1_Click);
			// 
			// txt_tel
			// 
			this->txt_tel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->txt_tel->Location = System::Drawing::Point(437, 200);
			this->txt_tel->Name = L"txt_tel";
			this->txt_tel->Size = System::Drawing::Size(264, 32);
			this->txt_tel->TabIndex = 23;
			// 
			// txt_nom
			// 
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->txt_nom->Location = System::Drawing::Point(437, 127);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(264, 32);
			this->txt_nom->TabIndex = 24;
			// 
			// txt_id
			// 
			this->txt_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->txt_id->Location = System::Drawing::Point(437, 53);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(264, 32);
			this->txt_id->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(120, 340);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 26);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Date d\'adherent";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(120, 270);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 26);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Date de Naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(120, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 26);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Telephone";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(120, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 26);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Nom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(120, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 26);
			this->label1->TabIndex = 22;
			this->label1->Text = L"ID";
			// 
			// AddAdherent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(978, 744);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"AddAdherent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddAdherent";
			this->Load += gcnew System::EventHandler(this, &AddAdherent::AddAdherent_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	public:
		

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int id=Convert::ToInt64(txt_id->Text);
	String^ nom=txt_nom->Text->ToString();
	String^ tel = txt_tel->Text->ToString();
	DateTime^ dn=dtn->Value;
	DateTime^ da = dta->Value;

	Adherent ad(id, nom, tel, dn, da);
	ad.upload();
	 //vector<Adherent> sj;
	 //sj.push_back(ad);
	//list<Adherent> listAdh;
	//listAdh.push_back(ad);
}
private: System::Void AddAdherent_Load(System::Object^ sender, System::EventArgs^ e) {
	
}

};
}
