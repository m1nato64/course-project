// createBankID function
// ------------------
// 02.05.2023
// Created by m1nato64

#include "operationChoose.h"
#include "includes.h"

using namespace std;

//int connectToBankID() {
  //  string username, cardNumber, accountNumber, password;
    //int count = 0; 

    /*while (count < 3) {
        cout << "Введите имя пользователя: ";
        cin >> username;
        cout << "Введите номер карты (не более 5 символов): ";
        cin >> cardNumber;
        cout << "Введите номер счета (не более 7 символов): ";
        cin >> accountNumber;
        cout << "Введите пароль: ";
        cin >> password;

        if (username == "Kirill" && cardNumber == "11111" && accountNumber == "17021977") {
            cout << "Вы успешно подключились к своему BankID!\n";
            // очистка консоли
            system("clear");

            // загрузка
            cout << "loading...\n";
            this_thread::sleep_for(chrono::seconds(3)); // пауза на 3 секунды

            operationChoose(); // вызов функции для работы с BankID
           
        }

        else if (username == "admin" && password == "adminpassword") {
            cout << "Вы подключены как администратор.\n";
            connectAsAdmin(); // вызов функции для работы с BankID в режиме администратора
        }
        else {
            cout << "Неправильное имя пользователя, пароль, номер карты или номер счета. Попробуйте еще раз.\n";
            connectToBankID(); // повторный вызов функции для подключения к BankID
        }
    
        else {
            cout << "Неправильное имя пользователя, номер карты или номер счета. Попробуйте еще раз.\n";
            count++; 

            if (count == 3) { // если пользователь ввел неправильные данные три раза, программа завершается
                cout << "Вы ввели неправильные данные три раза. Программа завершается.\n";
                exit(0);\
            }
        }
    }
}*/