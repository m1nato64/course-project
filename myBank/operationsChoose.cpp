// Operation Choose
// ------------------
// 20.04.2023
// Created by m1nato64

#include "includes.h"
using namespace std;

void chooseOperation()
{
    int choice;

    cout << "Выберите операцию:\n";
    cout << "1. Мой баланс\n";
    cout << "2. Перевод на другой счет\n";
    cout << "3. Мои транзакции\n";
    cout << "4. Текущий курс\n";
    cout << "Введите номер операции: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Ваш баланс: 1000 рублей\n";
        break;
    case 2:
        cout << "Перевод выполнен успешно\n";
        break;
    case 3:
        cout << "Список транзакций:\n";
        // add transactionsList
        break;
    case 4:
        cout << "Текущий курс: 1$ = 3.13 рубля\n";
        break;
    default:
        cout << "Неверный выбор операции, повторите выбор операции\n";
        break;
    }

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}