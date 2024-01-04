#include <iostream>
#include <fstream>
#include <utility>
#include <stack>
#include <string>
using namespace std;


string WritingText() {
    string line, text;

    cout << "Запис тексту, для закінчення відправте пустий рядок\n";

    do {
        line = "";
        getline(cin, line);
        text.append(line + "\n");
    } while (!line.empty());

    cout << "Запис збережено\n";
    return text;
}

void WriteInFile(string path, string text) {
    fstream file;
    file.open(path, ios::out);

    if (file.is_open()) {
        file << text;
    }

    file.close();
}

void CreateFile(string path)
{
    string text = WritingText();
    WriteInFile(std::move(path), text);
}

void CreateEmptyFile(string path) {
    fstream file;
    file.open(path, ios::out);
    file.close();
}

string ReadFile(const string& path) {
    fstream file;
    string text;
    file.open(path, ios::in);

    string line = "";
    do {
        getline(file, line);
        text.append(line + "\n");
    } while (!line.empty());

    file.close();
    return text;
}

void RewriteWithInvertingAndExcluding(string path, string text, const char to_exclude) {

    text.erase(std::remove(text.begin(), text.end(), to_exclude), text.end());

    string result;

    stack<string> lines;
    string line = "";

    for (char c : text) {
        if (c == '\0' || c == '\n') {

            lines.emplace(line);
            line.clear();
        }
        else {
            line.push_back(c);
        }
    }
    lines.pop();
    while (!lines.empty()) {
        string l = lines.top();
        lines.pop();
        result.append(l + "\n");
    }
    WriteInFile(std::move(path), result);
}

int main() {
    const char char_to_exclude = 'a';

    CreateFile("/Users/Kostia/Desktop/code/My LabWorks/LabWork9/F.txt");
    CreateEmptyFile("/Users/Kostia/Desktop/code/My LabWorks/LabWork9/G.txt");

    RewriteWithInvertingAndExcluding("/Users/Kostia/Desktop/code/My LabWorks/LabWork9/G.txt",
        ReadFile("/Users/Kostia/Desktop/code/My LabWorks/LabWork9/F.txt"),
        char_to_exclude);
}

