// Operation Choose
// ------------------
// 20.04.2023
// Created by m1nato64

#include "includes.h"
using namespace std;

void chooseOperation()
{
    int choice;

    cout << "�������� ��������:\n";
    cout << "1. ��� ������\n";
    cout << "2. ������� �� ������ ����\n";
    cout << "3. ��� ����������\n";
    cout << "4. ������� ����\n";
    cout << "������� ����� ��������: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "��� ������: 1000 ������\n";
        break;
    case 2:
        cout << "������� �������� �������\n";
        break;
    case 3:
        cout << "������ ����������:\n";
        // add transactionsList
        break;
    case 4:
        cout << "������� ����: 1$ = 3.13 �����\n";
        break;
    default:
        cout << "�������� ����� ��������, ��������� ����� ��������\n";
        break;
    }

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}