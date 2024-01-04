#include <iostream>
#include <locale>
using namespace std;

const int n = 5;
int matrix[n][n];
//int matrix[n][n] = {
//            {1, 1, 1, 1, 1},
//            {1, 1, 0, 1, 0},
//            {1, 0, 1, 0, 0},
//            {1, 1, 1, 0, 0},
//            {1, 1, 1, 0, 0}, };

void FillMatrixByRandom() {
    srand((unsigned)(time(NULL)));
    for (int i = 0; i < size(matrix); i++) {
        for (int j = 0; j < size(matrix); j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}

void PrintMatrix() {
    for (auto& row : matrix) {
        for (int i : row) {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main()
{
    FillMatrixByRandom();
	setlocale(LC_ALL, "UKRAINIAN");
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += matrix[0][i];
        sum += matrix[i][0];
    }
     
    for(int i = 1; i < n - 1; i++)
    {
        sum += matrix[i][n - 1 - i];
    }
    for(int i = 1; i < n/2.0 + 1; i++)
    {
        sum += matrix[n - 1][i];
    }
    int m = round((n - 1) / 2);
    for(int i = 1; i < n/2; i++)
    {
        sum += matrix[i][i];
        sum += matrix[n - 1 - i][m];
    }
    cout << "sum = "<<sum;

    return 0;
}

/*1 1 1 1 1
 *1 1 0 1 0
 *1 0 1 0 0
 *1 1 1 0 0
 *1 1 1 0 0
 */