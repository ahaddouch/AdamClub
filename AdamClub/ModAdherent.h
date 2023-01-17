#pragma once

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
	private: System::Windows::Forms::ListView^ lv;



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
			this->lv = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// dtn
			// 
			this->dtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->dtn->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtn->Location = System::Drawing::Point(393, 266);
			this->dtn->Name = L"dtn";
			this->dtn->Size = System::Drawing::Size(264, 32);
			this->dtn->TabIndex = 40;
			// 
			// dta
			// 
			this->dta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->dta->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dta->Location = System::Drawing::Point(393, 336);
			this->dta->Name = L"dta";
			this->dta->Size = System::Drawing::Size(264, 32);
			this->dta->TabIndex = 41;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(535, 398);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 51);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModAdherent::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(330, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 51);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// txt_tel
			// 
			this->txt_tel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->txt_tel->Location = System::Drawing::Point(393, 202);
			this->txt_tel->Name = L"txt_tel";
			this->txt_tel->Size = System::Drawing::Size(264, 32);
			this->txt_tel->TabIndex = 35;
			// 
			// txt_nom
			// 
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->txt_nom->Location = System::Drawing::Point(393, 132);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(264, 32);
			this->txt_nom->TabIndex = 36;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(76, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 26);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Date d\'adherent";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(76, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 26);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Date de Naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(76, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 26);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Telephone";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(76, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 26);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Nom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(76, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 26);
			this->label1->TabIndex = 34;
			this->label1->Text = L"ID";
			// 
			// lb
			// 
			this->lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->lb->FormattingEnabled = true;
			this->lb->ItemHeight = 25;
			this->lb->Location = System::Drawing::Point(393, 62);
			this->lb->Name = L"lb";
			this->lb->Size = System::Drawing::Size(264, 29);
			this->lb->TabIndex = 42;
			// 
			// lv
			// 
			this->lv->HideSelection = false;
			this->lv->Location = System::Drawing::Point(220, 26);
			this->lv->Name = L"lv";
			this->lv->Size = System::Drawing::Size(152, 34);
			this->lv->TabIndex = 43;
			this->lv->UseCompatibleStateImageBehavior = false;
			// 
			// ModAdherent
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(766, 477);
			this->Controls->Add(this->lv);
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
		

		
		// Create a connection object
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {
			// Open the connection
			connection->Open();

			// Create a command object
			SqlCommand^ command = connection->CreateCommand();

			// Set the command text
			command->CommandText = "SELECT id, nom FROM adherent";

			// Execute the command
			SqlDataReader^ reader = command->ExecuteReader();

			// Clear the ListBox
			lb->Items->Clear();
			lv->Items->Clear();

			// Add items to the ListBox
			while (reader->Read()) {
				String^ item = reader->GetInt32(0) + " - " + reader->GetString(1);
				lb->Items->Add(item);
				lv->Items->Add(item);
			}

			// Close the reader
			reader->Close();

			// Close the connection
			connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de l'enregistrement d'un nouvel adhérent",
				"Échec de l'enregistrement", MessageBoxButtons::OK);
			//std::cout << "Error retrieving data: " << ex->Message << std::endl;
		}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
