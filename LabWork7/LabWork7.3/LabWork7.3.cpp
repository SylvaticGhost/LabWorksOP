#include <iostream>
#include <locale>
using namespace std;
constexpr int m = 5;
constexpr int n = 5;
int matrix[m][n];

void FillMatrixByRandom()
{
	srand(static_cast<unsigned>(time(NULL)));

	for (int i = 0; i < size(matrix); i++)
	{
		for (int j = 0; j < size(matrix); j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
}

void PrintMatrix()
{
	for (auto& row : matrix)
	{
		for (int i : row)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
}

void ExchangeRows(int a, int b)
{
	int temp;
	a--;
	b--;
	for (int i = 0; i < n; i++)
	{
		temp = matrix[a][i];
		matrix[a][i] = matrix[b][i];
		matrix[b][i] = temp;
	}
}

int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	FillMatrixByRandom();
	cout << "Згенерована матриця:\n";
	PrintMatrix();
	ExchangeRows(1, n);
	cout << "матриця після перестановки першого і останього рядка:\n";
	PrintMatrix();
	int max_i = 0, min_i = 0, r = 0, n_positive = 0;
	for (auto& row : matrix)
	{
		for (int i = 0; i < n; i++)
		{
			if (row[i] > 0) n_positive++;
			if (row[i] > row[max_i]) max_i = i;
			else if (row[i] < row[min_i]) min_i = i;
		}
		row[max_i] = 1;
		row[min_i] = -1;


		cout << "к-сть додатніх елементів в рядку " << r << ": " << n_positive << "\n";
		cout << "Найбільшому елемнету рядку " << r << " з індексом " << max_i << "було присвоєно значення 1\n";
		cout << "Найменшому елемнту рядку з індексом " << r << " було присвоєно значення -1\n";
		max_i = 0, min_i = 0, n_positive = 0;
		r++;
	}

	cout << "зміненна матриця: \n";
	PrintMatrix();
	int n_negative = 0;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			if (matrix[i][j] < 0) n_negative++;
		}
		cout << "В стовпцю " << n_negative << " відʼємних елементів: " << n_negative << "\n";
		n_negative = 0;
	}
}
