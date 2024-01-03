#pragma once
#include <cmath>
#include <msclr/marshal_cppstd.h>

namespace WinFormsCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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


	private:

	private:

	public: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ сгенерироватьМатрицуToolStripMenuItem;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	public:









	public:
	private:

	public:


	public:
	private: System::ComponentModel::IContainer^ components;
	private:
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->сгенерироватьМатрицуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// toolTip1
			// 
			this->toolTip1->IsBalloon = true;
			this->toolTip1->OwnerDraw = true;
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Подсказка";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(13, 39);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1003, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(584, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(369, 29);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Случайное автозаполнение элементов";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(185, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Столбцы:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(40, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Строки:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(39, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Размеры матрицы:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(268, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 25);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->Validated += gcnew System::EventHandler(this, &MyForm::textBox2_Validated);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(113, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 25);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->Validated += gcnew System::EventHandler(this, &MyForm::textBox1_Validated);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(584, 52);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(237, 29);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"Ручной ввод элементов";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->сгенерироватьМатрицуToolStripMenuItem,
					this->очиститьToolStripMenuItem, this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1028, 29);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// сгенерироватьМатрицуToolStripMenuItem
			// 
			this->сгенерироватьМатрицуToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->сгенерироватьМатрицуToolStripMenuItem->Name = L"сгенерироватьМатрицуToolStripMenuItem";
			this->сгенерироватьМатрицуToolStripMenuItem->Size = System::Drawing::Size(196, 25);
			this->сгенерироватьМатрицуToolStripMenuItem->Text = L"Сгенерировать матрицу";
			this->сгенерироватьМатрицуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сгенерироватьМатрицуToolStripMenuItem_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(90, 25);
			this->очиститьToolStripMenuItem->Text = L"Очистить";
			this->очиститьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститьToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 25);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 25);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 194);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(350, 223);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellBeginEdit += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &MyForm::dataGridView1_CellBeginEdit);
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(918, 434);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Enabled = false;
			this->dataGridView2->Location = System::Drawing::Point(666, 194);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(350, 223);
			this->dataGridView2->TabIndex = 4;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Enabled = false;
			this->dataGridView3->Location = System::Drawing::Point(382, 194);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(120, 223);
			this->dataGridView3->TabIndex = 6;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->AllowUserToResizeColumns = false;
			this->dataGridView4->AllowUserToResizeRows = false;
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Enabled = false;
			this->dataGridView4->Location = System::Drawing::Point(527, 194);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(120, 223);
			this->dataGridView4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 21);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Исходная матрица:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(662, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(183, 21);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Матрица с результатом:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(380, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 21);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Min элемент:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(525, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 21);
			this->label7->TabIndex = 10;
			this->label7->Text = L"~ Ср. Арифм.:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 478);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Генератор матриц";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void formRandom(int rows, int cols, int** matrix) {
		Random^ rand = gcnew Random();
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {

				matrix[i][j] = rand->Next(1, 100);
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::White;
			}
		}
	}
private: void typing(int rows, int cols, int** matrix) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			try {
				matrix[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				//matrix[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value = nullptr);
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::White;
			}
			catch (FormatException^) {
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
			}
		}
	}
}

	private: void clear() {
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = nullptr;
				dataGridView2->Rows[i]->Cells[j]->Value = nullptr;
				dataGridView3->Rows[i]->Cells[0]->Value = nullptr;
				dataGridView4->Rows[i]->Cells[0]->Value = nullptr;
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::White;
				textBox1->BackColor = Color::White;
				textBox2->BackColor = Color::White;
				int number;
				if (!Int32::TryParse(textBox1->Text, number)) {
					 textBox1->Text = "1";
				}
				else if (!Int32::TryParse(textBox2->Text, number)) {
					textBox2->Text = "1";
				}
			}
		}
	}

	private: void show(int rows, int cols, int** matrix) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {

				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

				dataGridView1->Rows[i]->Cells[j]->Value = matrix[i][j];

				dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
				dataGridView2->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

				dataGridView3->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
				dataGridView3->Columns[0]->HeaderCell->Value = Convert::ToString(1);
				dataGridView4->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
				dataGridView4->Columns[0]->HeaderCell->Value = Convert::ToString(1);
			}
		}
	}

	private: void funcForChangingElements(int rows, int cols, int** matrix) {

		
		int* closestToMean = funcForClosestToMean(rows, cols, matrix);
		int* min = funcForMinMatrix(rows, cols, matrix);

		int** newMatrix = new int* [rows];
		for (int i = 0; i < rows; i++) {
			newMatrix[i] = new int[cols];
			for (int j = 0; j < cols; j++) {
				newMatrix[i][j] = matrix[i][j];
			}

			int* tempMatrix = new int[cols];
			for (int j = 0; j < cols; j++) {
				tempMatrix[j] = matrix[i][j];
			}

			for (int j = 0; j < cols; j++) {
				if (tempMatrix[j] == min[i]) {
					tempMatrix[j] = closestToMean[i];
				}
				else if (tempMatrix[j] == closestToMean[i]) {
					tempMatrix[j] = min[i];
				}
			}

			for (int j = 0; j < cols; j++) {
				newMatrix[i][j] = tempMatrix[j];
			}
		}


		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = newMatrix[i][j];
			}
		}
	}

	private: int* funcForClosestToMean(int rows, int cols, int** matrix);
		
	private: int* funcForMinMatrix(int rows, int cols, int** matrix);
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = Convert::ToInt32(textBox1->Text);
		int cols = Convert::ToInt32(textBox2->Text);

		int** matrix = new int* [rows];
		for (int i = 0; i < rows; i++) {
			matrix[i] = new int[cols];
		}

		dataGridView1->RowCount = rows;
		dataGridView1->ColumnCount = cols;

		dataGridView2->RowCount = rows;
		dataGridView2->ColumnCount = cols;

		dataGridView3->RowCount = rows;
		dataGridView3->ColumnCount = 1;

		dataGridView4->RowCount = rows;
		dataGridView4->ColumnCount = 1;

		dataGridView2->DefaultCellStyle->BackColor = Color::White;
		dataGridView3->DefaultCellStyle->BackColor = Color::White;
		dataGridView4->DefaultCellStyle->BackColor = Color::White;

		if (radioButton1->Checked) {
			typing(rows, cols, matrix);
		} else if (radioButton2->Checked) {
			formRandom(rows, cols, matrix);
		}

		show(rows, cols, matrix);

		funcForChangingElements(rows, cols, matrix);

		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
		dataGridView2->AutoResizeColumns();

		for (int i = 0; i < rows; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
	}

	private: System::Void сгенерироватьМатрицуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->PerformClick();
	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		clear();
	}
	private: System::Void очиститьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		clear();
	}
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Данная программа предназначена для создания матрицы вручную или со случайными значениями. А также для выполнения задания: \n\n Для каждой строки поменять местами min элемент этой строки \n и элемент, наиболее близкий к среднему арифметическому значению элементов строки.", "О программе");
	}
	private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int number;
		if (!Int32::TryParse(Convert::ToString(dataGridView1->CurrentCell->Value), number)) {

			MessageBox::Show("Пожалуйста, введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			dataGridView1->CurrentCell->Style->BackColor = Color::Red;

		}
		else {
			dataGridView1->CurrentCell->Style->BackColor = Color::White;
		}
	}
private: System::Void dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e) {
	dataGridView2->DefaultCellStyle->BackColor = Color::LightGray;
	dataGridView3->DefaultCellStyle->BackColor = Color::LightGray;
	dataGridView4->DefaultCellStyle->BackColor = Color::LightGray;
}

private: System::Void textBox2_Validated(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if (!Int32::TryParse(textBox2->Text, number)) {
		MessageBox::Show("Пожалуйста, введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox2->BackColor = Color::Red;
		textBox2->Focus();
	}
	else if (number <= 0) {
		MessageBox::Show("Пожалуйста, введите число больше нуля.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox2->BackColor = Color::Red;
	}
	else {
		textBox2->BackColor = Color::White;
	}
}
private: System::Void textBox1_Validated(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if (!Int32::TryParse(textBox1->Text, number)) {
		MessageBox::Show("Пожалуйста, введите число.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox1->BackColor = Color::Red;
		textBox1->Focus();
	}
	else if (number <= 0) {
		MessageBox::Show("Пожалуйста, введите число больше нуля.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox1->BackColor = Color::Red;
	}
	else {
		textBox1->BackColor = Color::White;
	}
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->RowCount; i++) {
		for (int j = 0; j < dataGridView1->ColumnCount; j++) {
			dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::LightGray;
			dataGridView2->DefaultCellStyle->BackColor = Color::LightGray;
			dataGridView3->DefaultCellStyle->BackColor = Color::LightGray;
			dataGridView4->DefaultCellStyle->BackColor = Color::LightGray;
		}
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->RowCount; i++) {
		for (int j = 0; j < dataGridView1->ColumnCount; j++) {
			dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::LightGray;
			dataGridView2->DefaultCellStyle->BackColor = Color::LightGray;
			dataGridView3->DefaultCellStyle->BackColor = Color::LightGray;
			dataGridView4->DefaultCellStyle->BackColor = Color::LightGray;
		}
	}
}
};
}
