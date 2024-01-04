#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "UKR");
    int k;
    cout << "Input k(k > 10):" << endl;
    cin >> k;
    float x;
    cout << "введіть дійсне значення х(x must be in range (-2, 2):" << endl;
    cin >> x;
    if(k > 10 & (x > -2 & x < 2)) 
    {
        int n = 1; // n != 0, because we divide on n
        float sum = 0;
         
        while(n <= k) 
        {
            sum += (pow(x, 2 * n) * sin(pow(x, n))) / pow(n, 2);
            n++;
        }
        cout << "Сума послідовності:" << sum << endl;
    }
    else {
        cout << "Введенi значення не задовольняє умову" << endl;
    }

    return 0;
}
//atoi
 
