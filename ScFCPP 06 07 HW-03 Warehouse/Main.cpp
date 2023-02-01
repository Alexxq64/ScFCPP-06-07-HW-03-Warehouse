#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int getNumber(string prompt = "Введите число: ");
bool isInteger(string input);


int main() {
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        switch (getNumber("Введите число от 1 до 5 (любое другое число - выход из программы): ")) {
        case 1:
            cout << 1 << endl;
            break;
        case 2:
            cout << 2 << endl;
            break;
        case 3:
            cout << 3 << endl;
            break;
        case 4:
            cout << 4 << endl;
            break;
        case 5:
            cout << 5 << endl;
            break;

        default: 
            cout << "До свидания." << endl;
            return 0;
        }
    }
}

int getNumber(string prompt){
    string input;
    cout << prompt;
    while (true) {
        getline(cin, input);
        if ((input == "") ||
            (!isInteger(input)))
            cout << "Неправильный ввод. Попробуйте еще раз. \n";
        else {
            return stoi(input);
        }
    }
}


bool isInteger(string input) {
    bool firstChar = true;
    if (input == "") return false;
    for (char c : input) {
        if (firstChar) {
            firstChar = false;
            if (!((c == '-') || (c >= '0' && c <= '9'))) return false;
        }
        else
            if (!(c >= '0' && c <= '9')) return false;
    }
    return true;
}
