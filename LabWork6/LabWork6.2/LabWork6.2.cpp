#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
using namespace std;

int B[8];
int B_size = sizeof(B) / sizeof(B[0]);
void FillByRandom()
{
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < B_size; i++)
	{
		B[i] = rand()%50;
	}
}

void PrintNumbersArray() //copied from Ex.1
{
	for (int i = 0; i < sizeof(B) / sizeof(B[0]); i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
}

int DownwardCheck()
{
	int max_l = 1;
	int l = 1;
	for (int i = 0; i < B_size - 1; i++)
	{
		if (B[i] > B[i + 1]) l++;
		else
		{
			if (l > max_l) max_l = l;
			l = 1;
		}
	}
	if (l > max_l) max_l = l;
	return max_l;
}

int IncreasingCheck()
{
	int max_l = 1;
	int l = 1;
	for(int i = 0; i < B_size - 1; i++)
	{
		if (B[i] < B[i + 1]) l++;
		else
		{
			if (l > max_l) max_l = l;
			l = 1;
		}
	}
	if (l > max_l) max_l = l;
	return max_l;
}
int main()
{
	FillByRandom();
	setlocale(0, "UKR");
	cout << "отриманий масив:" << endl;
	PrintNumbersArray();
	int l_progression;

	if (DownwardCheck() >= IncreasingCheck()) l_progression = DownwardCheck();
	else l_progression = DownwardCheck();

	if (l_progression == B_size) cout << "Масив впорядкований" << endl;
	else
	{
		cout << "Масив не впорядкований" << endl;
		cout << "Довжина впорядкованої частини: " << l_progression << endl;
	}
}


 