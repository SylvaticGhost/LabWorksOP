#include <iostream>
#include <string>
using namespace std;

string text;

bool CheckIfCharIsPunctuation(char c) {
    if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 92 && c <= 96) || (c >= 123 && c <= 126))
        //ranges of UTF-8 punctations code
        return true;
    else return false;
}

int LenghtOfString(string s) {
    int i = 0;
    for (char c : s) {
        i++;
    }
    return i;
}

void DeleteCharacter()
{
    for (int i = 1; i < LenghtOfString(text); i++) {
        if ((text[i] == ' ' && text[i - 1] == ' ') || (
            CheckIfCharIsPunctuation(text[i - 1]) && CheckIfCharIsPunctuation(text[i])))
        {
            text[i] = 127; // 127 UTF-8 code to delete
            i--;
        }
    }
}

string FindLongestWord(string s) {
    string max = "";
    string current = "";
    for (char c : s) {
        if (c == ' ' || c == 127 || CheckIfCharIsPunctuation(c)) {
            if (max.length() < current.length())
                max = current;
            current = "";
        }
        else
            current += c;
    }
    if (max.length() < current.length()) {
        max = current;
        current = "";
    }
    return max;
}

int main() {
    std::cout << "Введіть текстовий рядок" << std::endl;
    getline(cin, text);

    DeleteCharacter();

    cout << "Відкорегований рядок: " << text << "\n";
    cout << "Найдовше слово: " << FindLongestWord(text) << "\n";

    return 0;
}
//Жовтий,, синій заєць бігали по лісу і волали:: "Е!!"..
