// Registration Form
// ------------------
// 17.04.2023
// Created by m1nato64

#include "includes.h"
#include <limits>

using namespace std;

class registationUser {
    public:
        string username;
        string password;
        int age;
};

int lol() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << setw(40) << setfill(' ') << "Добро пожаловать в банковскую систему 'Serekoff'.\n";
    cout << setw(40) << setfill(' ') << "Хотите создать BankID или подключится к имеещемуся?\n";
    registationUser user;       // Экземпляр для обращения.
    cout << "Enter a username: ";
    cin >> user.username;

    cout << "Enter password: ";
    cin >> user.password;

    cout << "Enter age: ";
    cin >> user.age;
    return 0;
 }