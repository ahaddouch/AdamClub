#pragma once

using namespace System::Data;
using namespace System;
using namespace std;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;
ref class Personne
{
protected:
	int id;
	String^ nom;
	String^ tel;
	DateTime^ dn;
	
};

