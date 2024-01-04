#include <iostream>
using namespace std;
double fact(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

double cosinus(float x, int t) { //ф-ц≥€ приймаЇ значенн€ дл€ рад≥ан
    double sum = 0;
    for (int n = 0; n < t; n++) {
        sum += (pow(-1, n) * pow(x, 2 * n)) / fact(2 * n);
    }

    return sum;
}

int main(int argc, const char* argv[]) {
    float a, b, h;
    int t;
    cout << "¬вед≥ть значенн€ початку пром≥жку";
    cin >> a;
    cout << "¬вед≥ть значенн€ к≥нц€ в≥др≥зка";
    cin >> b;
    cout << "¬вед≥ть крок:";
    cin >> h;
    cout << "¬вед≥ть точн≥сть р€ду “ейлора:";
    cin >> t;
    cout << "x" << "   " << "значенн€" << endl;
    for (float x = a; x <= b; x += h) {
        cout << x << "   " << cosinus(x, t) << endl;
    }
    return 0;
}
