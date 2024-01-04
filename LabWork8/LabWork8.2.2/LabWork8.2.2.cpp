#include <iostream>
#include <string>

using namespace std;

string text1, text2;

int main() {

    cout << "Введіть рядок ";
    getline(cin, text1);
    cout << "Введений перший рядок:" << text1 << "\n";

    cout << "Введіть другий рядок рядок ";
    getline(cin, text2);
    cout << "Введений другий рядок:" << text2 << "\n";

    cout << "довжина першого рядка " << text1.length() << "\n"; //.length()

    cout << "порівняння двох рядків" << text1.compare(text2) << "\n"; //compare()

    cout << "Додавання '!' до першого рядка\n";
    text1.push_back('!');                               //push_back()
    cout << "результат:" << text1 << "\n";

    cout << "Видалення першого символу\n";
    text1.erase(1, 1);

    cout << "результат:" << text1 << "\n"; //erase()

    cout << "Злиття рядків\n";

    text1.append(text2);

    cout << "результат:" << text1 << "\n";


    return 0;
}

