#pragma once
#include "connect.h"
//#include "Form1.h"
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		System::String^ and_CharToSysString(char* ch)
		{
			char * chr = ch;
			System::String^ str;
			for (int i = 0; chr[i] != '\0'; i++)
			{
				str += wchar_t(ch[i]);
			}
			return str;
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  STAFF;

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->STAFF = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->STAFF->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(31, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(695, 134);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(31, 64);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(684, 134);
			this->dataGridView2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(304, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"RESERVE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(291, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"STAFF";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(658, 206);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 29);
			this->button3->TabIndex = 4;
			this->button3->Text = L"SACK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(618, 204);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 30);
			this->button4->TabIndex = 5;
			this->button4->Text = L"FINISH";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(398, 204);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(436, 211);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(193, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TextChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->STAFF);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(21, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(755, 272);
			this->tabControl1->TabIndex = 8;
			// 
			// STAFF
			// 
			this->STAFF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->STAFF->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->STAFF->Controls->Add(this->button2);
			this->STAFF->Controls->Add(this->textBox2);
			this->STAFF->Controls->Add(this->dataGridView1);
			this->STAFF->Controls->Add(this->button3);
			this->STAFF->ForeColor = System::Drawing::Color::Black;
			this->STAFF->Location = System::Drawing::Point(4, 22);
			this->STAFF->Name = L"STAFF";
			this->STAFF->Padding = System::Windows::Forms::Padding(3);
			this->STAFF->Size = System::Drawing::Size(747, 246);
			this->STAFF->TabIndex = 0;
			this->STAFF->Text = L"STAFF";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(747, 246);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"RESERVE";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(589, 289);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 25);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Выйти";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(801, 319);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->STAFF->ResumeLayout(false);
			this->STAFF->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MYSQL mysql;
	MYSQL_RES *res;
	MYSQL_ROW row; std::vector<char*> mass;
	DataTable^ dt = gcnew DataTable();
	dt->Columns->Add(L"ID");
	dt->Columns->Add(L"NAME");
	dt->Columns->Add(L"DUTY");
	unsigned int i = 0;
	if (!mysql_init(&mysql)) abort();
	if (!(mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 3306, NULL, 0)))
		MessageBox::Show("ERROR");
	if (mysql_select_db(&mysql, "hotel"))
		MessageBox::Show("ERROR");
	if (mysql_query(&mysql, "SELECT staff_id, name, duty FROM staff;"))
		MessageBox::Show("ERROR");
	if (!(res = mysql_store_result(&mysql)))
		MessageBox::Show("ERROR");
	while ((row = mysql_fetch_row(res))) {
		for (i = 0; i < mysql_num_fields(res); i = i + 4) {
			//MessageBox::Show(and_CharToSysString(row[i]));
			dt->Rows->Add(and_CharToSysString(row[i]), and_CharToSysString(row[i + 1]), and_CharToSysString(row[i + 2]));
		}
	}
	if (!mysql_eof(res))
		MessageBox::Show("ERROR");
	mysql_free_result(res);
	dataGridView1->DataSource = dt;
	mysql_close(&mysql);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MYSQL mysql;
	MYSQL_RES *res;
	MYSQL_ROW row; std::vector<char*> mass;
	DataTable^ dt = gcnew DataTable();
	dt->Columns->Add(L"DEL ID");
	dt->Columns->Add(L"Room`s number");
	dt->Columns->Add(L"CLient`s name");
	dt->Columns->Add(L"Duration");
	dt->Columns->Add(L"Date of reserv.");
	unsigned int i = 0;
	if (!mysql_init(&mysql)) abort();
	if (!(mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 3306, NULL, 0)))
		MessageBox::Show("ERROR");
	if (mysql_select_db(&mysql, "hotel"))
		MessageBox::Show("ERROR");
	if (mysql_query(&mysql, "SELECT work_id, room_id, clients.name, days, date FROM work JOIN clients WHERE work.client_id = clients.client_id "))
		MessageBox::Show("ERROR");
	if (!(res = mysql_store_result(&mysql)))
		MessageBox::Show("ERROR");
	while ((row = mysql_fetch_row(res))) {
		for (i = 0; i < mysql_num_fields(res); i = i + 5) {
			//MessageBox::Show(and_CharToSysString(row[i]));
			dt->Rows->Add(and_CharToSysString(row[i]), and_CharToSysString(row[i + 1]), and_CharToSysString(row[i + 2]), and_CharToSysString(row[i + 3]),and_CharToSysString(row[i+4]));
		}
	}
	if (!mysql_eof(res))
		MessageBox::Show("ERROR");
	mysql_free_result(res);
	dataGridView2->DataSource = dt;
	mysql_close(&mysql);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string staff = msclr::interop::marshal_as<std::string>(textBox2->Text);
	MYSQL mysql;
	MYSQL_ROW row;
	MYSQL_RES *result;
	string sql;
	sql = "DELETE FROM staff WHERE staff_id ="; // default, room_id, client_id, days, date.
	sql += staff;
	sql += ";";
	mysql_init(&mysql);

	if (!mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 0, NULL, 0))
	{
		fprintf(stderr, "Failed to connect to database: Error: %s\n",
			mysql_error(&mysql));
	}
	else {
		if (mysql_query(&mysql, sql.c_str()));
		MessageBox::Show("УВОЛЕН!!11!!!11");
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string work = msclr::interop::marshal_as<std::string>(textBox1->Text);
	MYSQL mysql;
	MYSQL_ROW row;
	MYSQL_RES *result;
	string sql;
	sql = "DELETE FROM work WHERE work_id ="; // default, room_id, client_id, days, date.
	sql += work;
	sql += ";";
	mysql_init(&mysql);

	if (!mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 0, NULL, 0))
	{
		fprintf(stderr, "Failed to connect to database: Error: %s\n",
			mysql_error(&mysql));
	}
	else {
		if (mysql_query(&mysql, sql.c_str()));
		//here goes the error message :o)
		MessageBox::Show("SUCCES!");
	}
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Form^ form = this->Owner;
	form->Show();
}
};
}
