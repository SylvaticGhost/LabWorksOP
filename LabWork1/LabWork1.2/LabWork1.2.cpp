#include <iostream>
#include <cmath>

using namespace ::std;
float a; // side a of triangle
float b; // side b of triangle
float angle; // the angle between sides of the triangle
float S; // Square of the triangle

int main()
{
    cout << "Обчислення площі трикутника." << endl;
    cout << "введіть (через пропуск) довжини двох сторін (см) трикутника" << endl;
    cin >> a; cin >> b;
    cout << "Введіть величину кута між сторонами трикутника" << endl;
    cin >> angle; //[angle] = rad
    angle = M_PI * angle / 180.0; // converting from rad to degree
    S = (a * b * sin(angle)) / 2;
    cout << "Площа трикутника: " << S << "кв.см" << endl;

}
