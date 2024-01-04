#include <iostream>
#include <cstdlib>
#include <locale>
 
using namespace std;

int Numbers[10];
int FindMinInRange(int start, int end, int = 1);
int FindMaxInRange(int start, int end, int = 1);

void FillByRandom()
{
	srand((unsigned)(time(NULL)));
	for(int i = 0; i < sizeof(Numbers)/sizeof(Numbers[0]); i++)
	{
		Numbers[i] = rand()%21;
	}
}

void PrintNumbersArray()
{
	for (int i = 0; i < sizeof(Numbers) / sizeof(Numbers[0]); i++)
	{
		cout << Numbers[i] << " ";
	}
	cout << endl;
}

int FindMinInRange(int start, int end, int step)
{
	int min = Numbers[start];
	for(int i = start + step; i < end; i += step)
	{
		if (Numbers[i] < min) min = Numbers[i];
	}
	return min;
}

int FindMaxInRange(int start, int end, int step)
{
	int max = Numbers[start];
	for (int i = start + step; i < end; i += step)
	{
		if (Numbers[i] > max) max = Numbers[i];
		
	}
	return max;
}


int main()
{
	setlocale(0, "UKR");
	FillByRandom();
	cout << "������������ �����" << endl;
	PrintNumbersArray();
	int NumbersSize = sizeof(Numbers) / sizeof(Numbers[0]);
	cout << "�i�i������ �������� ����� �������� �������i�: " << FindMinInRange(0, NumbersSize, 2) << ", ";
	cout << "����������� �������� ����� �������� �������i�:" << FindMaxInRange(0, NumbersSize, 2) << endl;
	cout << "�i�i������ �������� ����� ������ �������i�: " << FindMinInRange(1, NumbersSize, 2)<< ", ";
	cout << "����������� �������� ����� ������ �������i�:" << FindMaxInRange(1, NumbersSize, 2) << endl;
}

//#include <vector>
//vector<int> FindMaxMinInRange(int start, int end, int step)
//{
//	int max = Numbers[start];
//	int min = Numbers[start];
//	for (int i = start + step; i < end; i += step)
//	{
//		if (Numbers[i] > max) max = Numbers[i];
//		else if (Numbers[i] < min) min = Numbers[i];
//	}
//	return { max, min };
//}