// Operation Choose
// ------------------
// 20.04.2023
// Last update: 21.04.2023
// Created by m1nato64

#include "includes.h"
#include "currentCourse.h"
#include "showCurrentBalance.h"
// #include "myTransactions.h"
// #include "transferToAnotherAccount.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int userChoice;

    cout << "Choose operation:\n";
    cout << "1. My balance:" << "\n";

    cout << "2. Transfer to another account\n";
    cout << "3. My transactions\n";
    cout << "4. Current course\n";
    cout << "Write a number of operation: ";

    cin >> userChoice;

    switch (userChoice)
    {
    case 1:
        cout << "Your balance: " << showBalance() << "\n";
        break;
    case 2:
        cout << "Перевод выполнен успешно\n";
        break;
    case 3:
        cout << "Список транзакций:\n";
        break;
    case 4:
        currentCourse(); break;
    default:
        cout << "Неверный выбор операции, повторите выбор операции\n"; break;
    }

}