// createBankID function
// ------------------
// 30.04.2023
// Created by m1nato64
// .. Записать этот cpp в функцию и перекинуть в createBankID.h файл. 
// Добавить его в выборку между созданием BankID или коннектом к BankID в registrationForm.cpp

#include "includes.h"
#include "operationChoose.h"
using namespace std;


    struct BankID {
        string username;
        string password;
        string cardNumber;
        string accountNumber;
    };

    int createBankID() {

        BankID newbankID;
        cout << setw(40) << "Введите имя пользователя: ";
        cin >> newbankID.username;
        cout << setw(40) << "Введите пароль: ";
        cin >> newbankID.password;
        cout << "Введите номер карты (не более 5 символов): ";
        cin >> newbankID.cardNumber;
        while (newbankID.cardNumber.length() > 5) {
            cout << "Номер карты не может содержать более 5 символов. Пожалуйста, введите номер карты заново: ";
            cin >> newbankID.cardNumber;
        }
        cout << "Введите номер счета (не более 7 символов): ";
        cin >> newbankID.accountNumber;
        while (newbankID.accountNumber.length() > 7) {
            cout << "Номер счета не может содержать более 7 символов. Пожалуйста, введите номер счета заново: ";
            cin >> newbankID.accountNumber;
        }

        cout << "Регистрация прошла успешно!" << endl;
        cout << "Нажмите Enter, чтобы продолжить...";
        cin.ignore();
        cin.get();
        operationChoose();
        return 0;
    }
