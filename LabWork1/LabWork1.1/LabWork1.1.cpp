#include <iostream>

using namespace::std;


float f(float x, float y)
{
    float result;

    result = exp(-cos(sqrt(x / y)));

    return result;
}



int main()
{
    float input1, input2;
    cout << "������ �������� X=";
    cin >> input1;
    cout << "������ �������� Y=";
    cin >> input2;
    cout << f(input1, input2) << endl;
    return 0;
}
