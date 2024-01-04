#include <iostream>
using namespace ::std;
int main(int argc, const char* argv[]) {
    int number;
    string UA_text, EN_text, DE_text;

    cout << "Ввести число в діапазоні від 5 до 9" << endl;
    cin >> number;

    switch (number) {
    case 5:
        UA_text = "пʼять";
        EN_text = "five";
        DE_text = "fünf";
        break;
    case 6:
        UA_text = "Шість";
        EN_text = "six";
        DE_text = "sechs";
        break;
    case 7:
        UA_text = "сім";
        EN_text = "seven";
        DE_text = "seben";
        break;
    case 8:
        UA_text = "вісім";
        EN_text = "eight";
        DE_text = "Acht";
        break;
    case 9:
        UA_text = "девʼять";
        EN_text = "nine";
        DE_text = "neun";
        break;

    default:
        throw new invalid_argument("number is not in [5, 9]");
        break;
    }
    cout << "Ви вели число: " << number << endl;
    cout << "українською: " << UA_text << endl;
    cout << "In English: " << EN_text << endl;
    cout << "In Deutch: " << DE_text << endl;
}

