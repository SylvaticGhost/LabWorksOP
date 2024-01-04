#include <iostream>
#include <cmath>
using namespace std;

double fact(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

double cosinus(float x, int t) { //�-��� ������ �������� ��� �����
    double sum = 0;
    for (int n = 0; n < t; n++) {
        sum += (pow(-1, n) * pow(x, 2 * n)) / fact(2 * n);
    }

    return sum;
}

int main(int argc, const char* argv[]) {

    cout << "���������� �-��� �� ����� �������" << endl;
    int t;
    cout << "������ ������� ���������� ����";
    cin >> t;
    for (float x = -2; x <= 2; x += 0.5) {
        if (x >= -1 & x <= 0) cout << "��� �=" << x << ": " << cosinus(x / 2, t) / cosinus(pow(x, 2), t) << endl;
        else if (x > 0) cout << "��� �=" << x << ": " << pow(cosinus(x / 2, t), 2) * cosinus(x * 2, t) << endl;
    }

    return 0;
}

