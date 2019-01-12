#pragma once
#include "connect.h"
#include "MyForm1.h"
#include <string>
#include "stdafx.h"
#include <msclr\marshal_cppstd.h>
namespace CppCLR_WinformsProjekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CppCLR_WinformsProjekt;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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

		void amountpay() {
			MYSQL mysql;
			MYSQL_RES *res;
			MYSQL_ROW row; std::vector<char*> mass;
			unsigned int i = 0;
			if (!mysql_init(&mysql)) abort();
			if (!(mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 3306, NULL, 0)))
				MessageBox::Show("ERROR");
			if (mysql_select_db(&mysql, "hotel"))
				MessageBox::Show("ERROR");
			if (mysql_query(&mysql, "SELECT amount FROM clients WHERE client_id=1;"))
				MessageBox::Show("ERROR");
			if (!(res = mysql_store_result(&mysql)))
				MessageBox::Show("ERROR");
			while ((row = mysql_fetch_row(res))) {
				label6->Text = and_CharToSysString(row[0]);
			}
			if (!mysql_eof(res))
				MessageBox::Show("ERROR");
			mysql_free_result(res);
			mysql_close(&mysql);

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label10;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(194, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добро пожаловать в информационную систему нашей гостиницы!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->UseCompatibleTextRendering = true;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(558, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 21);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Подбор";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(232, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(286, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Забронировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView
			// 
			this->dataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(39, 82);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(691, 277);
			this->dataGridView->TabIndex = 3;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView_CellContentClick);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(-2, 32);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(787, 447);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->dataGridView);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(779, 421);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Бронирование";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(129, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Количество человек";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(264, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(226, 21);
			this->comboBox1->TabIndex = 4;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(779, 421);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Обратная связь";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(238, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(290, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Вы можете оставить отзыв/пожелание о нашей работе";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(111, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Отзыв";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(111, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Имя";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(203, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(373, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(203, 145);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(373, 146);
			this->textBox1->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(220, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(340, 39);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Отправить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(779, 421);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ваши бронирования";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(514, 308);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(97, 20);
			this->textBox3->TabIndex = 3;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(660, 308);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Снять бронь";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(660, 234);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Просмотр";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(19, 18);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(740, 210);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->textBox5);
			this->tabPage4->Controls->Add(this->textBox4);
			this->tabPage4->Controls->Add(this->button8);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->comboBox2);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(779, 421);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Лицевой счет";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(423, 213);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Номер карты";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(423, 176);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Имя";
			// 
			// textBox5
			// 
			this->textBox5->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox5->Location = System::Drawing::Point(512, 173);
			this->textBox5->MaxLength = 50;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(200, 20);
			this->textBox5->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(512, 213);
			this->textBox4->MaxLength = 16;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 20);
			this->textBox4->TabIndex = 5;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(206, 161);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 23);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Обновить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 166);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Баланс:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(125, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(511, 284);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(201, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(567, 311);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(92, 26);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Пополнить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(606, 481);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 21);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Выйти";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(267, 44);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(231, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Вы можете пополнить баланс своего счёта!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(783, 507);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		amountpay();
		comboBox1->Text = "Выберите количество...";
		for (int i = 1; i <= 4; i++)
			comboBox1->Items->Add(i);
		comboBox2->Text = "Выберите сумму...";
		comboBox2->Items->Add(500);
		comboBox2->Items->Add(1000);
		comboBox2->Items->Add(2000);
		comboBox2->Items->Add(5000);
		
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MYSQL mysql;
		MYSQL_RES *res;
		MYSQL_ROW row; std::vector<char*> mass;
		const char* sql;
		std::string num = msclr::interop::marshal_as<std::string>(comboBox1->Text);
		if (num == "1") sql = "SELECT room_id, name, price, info FROM rooms JOIN category USING (category_id)";
		if (num == "2") sql = "SELECT room_id, name, price, info FROM rooms JOIN category USING (category_id) WHERE room_id>=15";
		if (num == "3") sql = "SELECT room_id, name, price, info FROM rooms JOIN category USING (category_id) WHERE room_id>=30";
		if (num == "4") sql = "SELECT room_id, name, price, info FROM rooms JOIN category USING (category_id) WHERE room_id>=35";
		bool flag;
		int k = 1;
		//dataGridView->DataSource = NULL;
		//dataGridView->Rows->Clear();
		//dataGridView->Columns->Clear();
		DataTable^ dt = gcnew DataTable();
		dt->Columns->Add(L"№");	
		dt->Columns->Add(L"Type");
		dt->Columns->Add(L"Price");
		dt->Columns->Add(L"Information");
			unsigned int i = 0;
			if (!mysql_init(&mysql)) abort();
			if (!(mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 3306, NULL, 0)))
				MessageBox::Show("ERROR");
			if (mysql_select_db(&mysql, "hotel"))
				MessageBox::Show("ERROR");
			if (mysql_query(&mysql, sql))
				MessageBox::Show("ERROR");
			if (!(res = mysql_store_result(&mysql)))
				MessageBox::Show("ERROR");
			while ((row = mysql_fetch_row(res))) {
				for (int i = 0; i < mysql_num_fields(res); i=i+4) {
					if (!_findID(to_string(k))){dt->Rows->Add(and_CharToSysString(row[i]), and_CharToSysString(row[i+1]), and_CharToSysString(row[i + 2]), and_CharToSysString(row[i + 3]));}
					k++;
				}
			}
			if (!mysql_eof(res))
				MessageBox::Show("ERROR");
			mysql_free_result(res);
			dataGridView->DataSource = dt;
			mysql_close(&mysql);
	}
	private: System::Void dataGridView_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//MyForm1^ f = gcnew MyForm1();
	//f->Show();
	//this->Hide();

	//InitializeComponent();
	MyForm1^ f = gcnew MyForm1();
	f->Owner = this;
	this->Hide();
	f->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		MYSQL mysql;
		MYSQL_ROW row;
		MYSQL_RES *result;
		string sql;
		std::string name = msclr::interop::marshal_as<std::string>(textBox2->Text);
		std::string text = msclr::interop::marshal_as<std::string>(textBox1->Text);
			sql = "INSERT INTO feedback VALUES (default,' "; //
			sql += name;
			sql += "','";
			sql += text;
			sql += "');";
			mysql_init(&mysql);

			if (!mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 0, NULL, 0))
			{
				fprintf(stderr, "Failed to connect to database: Error: %s\n",
					mysql_error(&mysql));
			}
			else {
				if (mysql_query(&mysql, sql.c_str()));
				//here goes the error message :o)
				MessageBox::Show("Отзыв отправлен!");
			}
		
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Form^ form = this->Owner;
	form->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
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
	if (mysql_query(&mysql, "SELECT work_id, room_id, clients.name, days, date FROM work JOIN clients WHERE work.client_id = clients.client_id AND work.client_id = 1 "))
		MessageBox::Show("ERROR");
	if (!(res = mysql_store_result(&mysql)))
		MessageBox::Show("ERROR");
	while ((row = mysql_fetch_row(res))) {
		for (i = 0; i < mysql_num_fields(res); i = i + 5) {
			//MessageBox::Show(and_CharToSysString(row[i]));
			dt->Rows->Add(and_CharToSysString(row[i]), and_CharToSysString(row[i + 1]), and_CharToSysString(row[i + 2]), and_CharToSysString(row[i + 3]), and_CharToSysString(row[i+4]));
		}
	}
	if (!mysql_eof(res))
		MessageBox::Show("ERROR");
	mysql_free_result(res);
	dataGridView1->DataSource = dt;
	mysql_close(&mysql);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string work = msclr::interop::marshal_as<std::string>(textBox3->Text);
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
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	amountpay();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (String::IsNullOrWhiteSpace(textBox5->Text) || String::IsNullOrWhiteSpace(textBox4->Text) || String::IsNullOrWhiteSpace(comboBox2->Text))
	{ 
		MessageBox::Show("Заполните поля!!");
	}
	else {
		MYSQL mysql;
		MYSQL_RES *res;
		MYSQL_ROW row; std::vector<char*> mass;
		const char* sql;
		std::string num = msclr::interop::marshal_as<std::string>(comboBox2->Text);
		if (num == "500") sql = "UPDATE clients SET amount=amount+500 WHERE client_id=1 ";
		if (num == "1000") sql = "UPDATE clients SET amount=amount+1000 WHERE client_id=1 ";
		if (num == "2000") sql = "UPDATE clients SET amount=amount+2000 WHERE client_id=1 ";
		if (num == "5000") sql = "UPDATE clients SET amount=amount+5000 WHERE client_id=1 ";
		mysql_init(&mysql);
		if (!mysql_real_connect(&mysql, "localhost", "admin", "123456", "hotel", 0, NULL, 0))
		{
			fprintf(stderr, "Failed to connect to database: Error: %s\n",
				mysql_error(&mysql));
		}
		else {
			if (mysql_query(&mysql, sql));
			//here goes the error message :o)
			MessageBox::Show("Счет пополнен!");
		}
	}
}
};
}
