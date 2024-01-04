#include <iostream>
#include <cmath>
using namespace ::std;
int main(int argc, const char* argv[])
{
    double x, y;
    float a = 0.7;
    cout << "¬вести значенн€ х " << endl;
    cin >> x;
    if (x > 1)
    {
        y = a * log10(x) + pow(abs(x), -1 / 3);
    }
    else if (x <= 1)
    {
        y = 2 * a * cos(x) + 3 * pow(x, 2);
    }
    cout << "у =" << y << endl;
}
