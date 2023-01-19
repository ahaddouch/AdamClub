#pragma once
#include "Adherent.h"
namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModAdherent
	/// </summary>
	public ref class ModAdherent : public System::Windows::Forms::Form
	{
	public:
		ModAdherent(void)
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
		~ModAdherent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtn;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dta;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_tel;
	private: System::Windows::Forms::TextBox^ txt_nom;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lb;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModAdherent::typeid));
			this->dtn = (gcnew System::Windows::Forms::DateTimePicker());
			this->dta = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_tel = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// dtn
			// 
			this->dtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->dtn->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtn->Location = System::Drawing::Point(666, 321);
			this->dtn->Name = L"dtn";
			this->dtn->Size = System::Drawing::Size(250, 38);
			this->dtn->TabIndex = 40;
			// 
			// dta
			// 
			this->dta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->dta->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dta->Location = System::Drawing::Point(666, 391);
			this->dta->Name = L"dta";
			this->dta->Size = System::Drawing::Size(250, 38);
			this->dta->TabIndex = 41;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(1055, 526);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 51);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModAdherent::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(868, 526);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 51);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Modifier";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModAdherent::button1_Click);
			// 
			// txt_tel
			// 
			this->txt_tel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_tel->Location = System::Drawing::Point(666, 257);
			this->txt_tel->Name = L"txt_tel";
			this->txt_tel->Size = System::Drawing::Size(250, 38);
			this->txt_tel->TabIndex = 35;
			// 
			// txt_nom
			// 
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_nom->Location = System::Drawing::Point(666, 187);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(250, 38);
			this->txt_nom->TabIndex = 36;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(352, 397);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(206, 31);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Date d\'adherent";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(352, 327);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 31);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Date de Naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(352, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 31);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Telephone";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(352, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 31);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Nom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(352, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 31);
			this->label1->TabIndex = 34;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &ModAdherent::label1_Click);
			// 
			// lb
			// 
			this->lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lb->FormattingEnabled = true;
			this->lb->ItemHeight = 31;
			this->lb->Location = System::Drawing::Point(666, 97);
			this->lb->Name = L"lb";
			this->lb->Size = System::Drawing::Size(250, 66);
			this->lb->TabIndex = 42;
			this->lb->SelectedIndexChanged += gcnew System::EventHandler(this, &ModAdherent::lb_SelectedIndexChanged);
			// 
			// ModAdherent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1284, 608);
			this->Controls->Add(this->lb);
			this->Controls->Add(this->dtn);
			this->Controls->Add(this->dta);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_tel);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ModAdherent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModAdherent";
			this->Load += gcnew System::EventHandler(this, &ModAdherent::ModAdherent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
			String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";

	private: System::Void ModAdherent_Load(System::Object^ sender, System::EventArgs^ e) {
		

		
		
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {
			
			connection->Open();

			
			SqlCommand^ command = connection->CreateCommand();

			command->CommandText = "SELECT id FROM adherent";

			SqlDataReader^ reader = command->ExecuteReader();

			lb->Items->Clear();

			while (reader->Read()) {
				lb->Items->Add(reader->GetInt32(0));
			}

			reader->Close();

			connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de connection",
				"erroooor", MessageBoxButtons::OK);
		}
		

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt64(lb->Text);
	String^ nom = txt_nom->Text->ToString();
	String^ tel = txt_tel->Text->ToString();
	DateTime^ dn = dtn->Value;
	DateTime^ da = dta->Value;
	int x=5;
	Adherent ad(id, nom, tel, dn, da);
	ad.Update();
}
private: System::Void lb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	
	////////////////////////////////////////////////////////////////////////////
	txt_nom->Clear();
	txt_tel->Clear();

	
	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();
		int id =Convert::ToInt64(lb->Text) ;
		command->CommandText = "SELECT  nom,tele,dn,da  FROM adherent WHERE Id = @id";
		command->Parameters->AddWithValue("@id", id);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			txt_nom->Text = reader->GetString(0);
			txt_tel->Text = reader->GetString(1);
			dtn->Value = reader->GetDateTime(2);
			dta->Value = reader->GetDateTime(3);
		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"erroooor", MessageBoxButtons::OK);
	}
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
