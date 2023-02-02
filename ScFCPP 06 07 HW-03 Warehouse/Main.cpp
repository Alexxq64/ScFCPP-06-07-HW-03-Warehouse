#include <iostream>
#include <string>
#include <locale.h>
#include "HomeAppliances.h"
#include "Notebook.h"
#include "Computer.h"
#include "VacuumCleaner.h"
#include "RobotVacuunCleaner.h"

using namespace std;

int getNumber(string prompt = "Введите число: ");
bool isInteger(string input);
HomeAppliances* warehouse[6];

int main() {
    setlocale(LC_ALL, "Russian");
    warehouse[0] = new Notebook("Super", "Sony", 100000, 17);
    warehouse[1] = new Computer("Optima", "Sony", 20000, "Intel", 20);
    warehouse[2] = new VacuumCleaner("Home", "Hoover", 5000, 150);
    // this item gets fields _processor and _memory from its parent class by default by using one of parent constructors
    warehouse[3] = new RobotVacuumCleaner("Home", "Hoover", 30000, 100);
    warehouse[4] = new Notebook("Student", "Lenovo", 100000, 12);
    warehouse[5] = new Computer("Light", "Dell", 15000);
    int choise;
    while (true)
    {
        choise = getNumber("Введите число от 1 до 6 (любое другое число - выход из программы): ");
        if (choise >= 1 && choise <= 6) {
            warehouse[choise - 1]->showInformation();
            cout << endl;
        }
        else {
            cout << "До свидания." << endl;
            //delete warehouse[0];
            //if (warehouse)
            //    delete[] warehouse;
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
