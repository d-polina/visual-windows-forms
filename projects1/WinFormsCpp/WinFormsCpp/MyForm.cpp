// дана матрица размера M x N
// для каждой строки поменять местами минимальный элемент этой строки
// и элемент, наиболее близкий к среднему арифметическому значению элементов строки

#include "MyForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	WinFormsCpp::MyForm form;
	Application::Run(% form);
}

int* WinFormsCpp::MyForm::funcForClosestToMean(int rows, int cols, int** matrix)
{
	int* arr = new int[rows];
	double mean_value = 0;

	for (int i = 0; i < rows; i++) {
		int sum = 0;
		for (int j = 0; j < cols; j++) {
			sum += matrix[i][j];
		}
		mean_value = sum / cols;
		arr[i] = matrix[i][0];
		double closestToMean = std::abs(matrix[i][0] - mean_value);
		for (int j = 1; j < cols; j++) {
			if (std::abs(matrix[i][j] - mean_value) < closestToMean) {
				closestToMean = std::abs(matrix[i][j] - mean_value);
				arr[i] = matrix[i][j];
			}
		}
	}

	for (int i = 0;i < rows;i++) {
		dataGridView4->Rows[i]->Cells[0]->Value = arr[i];

	}
	return arr;
}

int* WinFormsCpp::MyForm::funcForMinMatrix(int rows, int cols, int** matrix)
{
	int* arr = new int[rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = matrix[i][0];
		for (int j = 0;j < cols;j++) {
			if (arr[i] > matrix[i][j])
				arr[i] = matrix[i][j];
		}
	}
	for (int i = 0;i < rows;i++) {
		dataGridView3->Rows[i]->Cells[0]->Value = arr[i];

	}

	return arr;
}
