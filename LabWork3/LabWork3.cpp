#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "UKR");
    int m;//���� ������ ����� ����� n
    int n;//�����
     
    cout << "����i�� ����� m" << endl;
    cin >> m;
    cout << "����i�� ����� n" << endl;
    cin >> n;
 
    string n_str = to_string(n);
    if (n_str.length() >= m)
    {
        int sum = 0;
        for(int i = n_str.length() - m; i <  n_str.length(); i++)
        {
            sum += n_str[i] - '0';
        }
        cout << "���� ������i� ���� ����� n:" << sum << endl;
    }
    else 
    {
        cout << "����������� �����" << endl;
    }
    return 0;
    
}

