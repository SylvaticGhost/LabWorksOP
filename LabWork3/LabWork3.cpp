#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "UKR");
    int m;//сума останіх цифер числа n
    int n;//число
     
    cout << "Введiть число m" << endl;
    cin >> m;
    cout << "Введiть число n" << endl;
    cin >> n;
 
    string n_str = to_string(n);
    if (n_str.length() >= m)
    {
        int sum = 0;
        for(int i = n_str.length() - m; i <  n_str.length(); i++)
        {
            sum += n_str[i] - '0';
        }
        cout << "Сума останнiх цифр числа n:" << sum << endl;
    }
    else 
    {
        cout << "Неправильна умова" << endl;
    }
    return 0;
    
}

