#include <iostream>
#include <locale>
using namespace std;

int matrix[4][4];
void FillMatrixByRandom() {
    srand((unsigned)(time(NULL)));

    for (int i = 0; i < size(matrix); i++) {
        for (int j = 0; j < size(matrix); j++) {
            matrix[i][j] = rand() % 50;
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

int main() {
    setlocale(LC_ALL, "UKRAINIAN");
    int i = 0;//current row in matrix
    int sum_upper = 0;
    int sum_lower = 0;

    FillMatrixByRandom();
    cout << "Згенерована матриця:\n";
    PrintMatrix();

    while (i <= size(matrix)) {
        for (int j = i; j < size(matrix); j++) {
            sum_upper += matrix[i][j];
        }
        for (int j = i - 1; j >= 0; j--) {
            sum_lower += matrix[i][j];
        }
        i++;
    }

    cout << "Сума елементів головної діагоналі і вище: " << sum_upper << "\n";
    cout << "Сума елементів нище гловної діагоналі: " << sum_lower;

    return 0;
}
