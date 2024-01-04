#include <iostream>
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
    float a, b, h;
    int t;
    cout << "������ �������� ������� �������";
    cin >> a;
    cout << "������ �������� ���� ������";
    cin >> b;
    cout << "������ ����:";
    cin >> h;
    cout << "������ ������� ���� �������:";
    cin >> t;
    cout << "x" << "   " << "��������" << endl;
    for (float x = a; x <= b; x += h) {
        cout << x << "   " << cosinus(x, t) << endl;
    }
    return 0;
}
