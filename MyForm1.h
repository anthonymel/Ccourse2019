#pragma once
//#include "Form1.h"
#include "stdafx.h"
//#include "MyForm.h"
#include "connect.h"
#include <msclr\marshal_cppstd.h>
//extern String^ login;
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(300, 78);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(83, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"<< Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(300, 119);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(173, 20);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Выберите номер комнаты:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Выберите количество дней проживания:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(145, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(217, 30);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Забронировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(380, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Внимание, с вашего счета спишется плата за первые сутки проживания!";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(511, 232);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		comboBox1->Text = "Номер";
		for (int i = 1; i<=40; i++)
		comboBox1->Items->Add(i);

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();               // Скрываем Форму2
		Form^ form = this->Owner;  // Получаем указатель на владельца 
		form->Show();  //  Показываем владельца
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//MessageBox::Show(comboBox1->Text);
	//MessageBox::Show(numericUpDown1->Text);
	MYSQL mysql;
	MYSQL_ROW row;
	MYSQL_RES *result, *res;
	string sql, am;
	extern string rlogin;
	std::string num = msclr::interop::marshal_as<std::string>(comboBox1->Text);
	std::string day = msclr::interop::marshal_as<std::string>(numericUpDown1->Text);
	if (_findID(num)) MessageBox::Show("Номер занят!");
	else {
		sql = "INSERT INTO work VALUES (default,"; // default, room_id, client_id, days, date.
		sql += num;
		sql += ",";
		sql += "1";
		sql += ",";
		sql += day;
		sql += ", default)";
		mysql_init(&mysql);

		if (!mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 0, NULL, 0))
		{
			fprintf(stderr, "Failed to connect to database: Error: %s\n",
				mysql_error(&mysql));
		}
		else {
			if (mysql_query(&mysql, sql.c_str()));
			//here goes the error message :o)
			MessageBox::Show("Бронь отправлена!");
			sql = "SELECT price FROM rooms JOIN category using(category_id) WHERE room_id = ";
			sql += num;
			if (!mysql_init(&mysql)) abort();
			if (!(mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 3306, NULL, 0)))
				MessageBox::Show("ERROR");
			if (mysql_select_db(&mysql, "hotel"))
				MessageBox::Show("ERROR");
			if (mysql_query(&mysql, sql.c_str()))
				MessageBox::Show("ERROR");
			if (!(res = mysql_store_result(&mysql)))
				MessageBox::Show("ERROR");
			while ((row = mysql_fetch_row(res))) {
				am = row[0];
			}
			//MessageBox::Show(am);
			sql = "UPDATE clients SET amount=amount-";
			sql += am;
			sql += " WHERE client_id = 1";
			mysql_query(&mysql, sql.c_str());
			this->Hide();
			Form^ form = this->Owner;
			form->Show();
		}
	}
	

}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
