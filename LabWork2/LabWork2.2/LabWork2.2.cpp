#include <iostream>
#include <cmath>
using namespace ::std;

int main(int argc, const char* argv[]) {
    char type_of_work;
    double tax, price_of_work, profit; // 'A'; A/B/C
    double x; //IDK what is x, I suggest, that it's time of doing a type work
    cout << "������ ��� �������� ������(A, B, C)" << endl;
    cin >> type_of_work;
    cout << "������ ��� ��������� ������" << endl;
    cin >> x;
    switch (type_of_work) {
    case 'A':
        price_of_work = 100 * abs(abs(cos(x) / 2.7) * 4 - 9.1 * sin(1.2 * x + 1));
        tax = price_of_work * 0.1;
        break;
    case 'B':
        price_of_work = 150 * abs(abs(sin(x) / 3.124 - cos(pow(x, 2)) - 8.3 * sin(3 * x)));
        tax = price_of_work * 0.15;
        break;
    case 'C':
        price_of_work = 100 * abs(cos(2 * x) / 1.12 - cos(3 * x - 2) + 6.15);
        tax = price_of_work * 0.2;
        break;
    default:
        throw new invalid_argument("������� ���� ������ �� ����");
        break;
    }
    profit = price_of_work - tax;
    cout << "�������� �� ������ " << price_of_work << endl;
    cout << "������� " << tax << endl;
    cout << "��������" << profit << endl;
}

//if(type_of_work == 'A')
//{
//    price_of_work = 100 * abs(abs(cos(x)/2.7)*4-9.1* sin(1.2*x + 1));
//   tax = price_of_work*0.1;
//}
//else if(type_of_work == 'B' {
//  price_of_work = 150* abs(abs(sin(x)/3.124 - cos(pow(x, 2)) - 8.3*sin(3*x)));
//  tax = price_of_work*0.15; }
//else if(type_of_work == 'C') {
//  price_of_work = 100 * abs(cos(2*x)/1.12 - cos(3*x - 2) + 6.15);
//  tax = price_of_work*0.2; }
//else { throw new invalid_argument("������� ���� ������ �� ����"); }
