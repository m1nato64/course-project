// Registration Form
// ------------------
// 17.04.2023
// Created by m1nato64

#include "includes.h"
#include "connectAsAdmin.h"
#include "connectAsUser.h"
#include "createBankID.h"
#include <clocale>


using namespace std;

class registationUser {
    public:
        string username;
        string password;
        int age;
};

int main() {
    setlocale(LC_ALL, "Russian");
    cout << setw(9) << "    " << setfill('$') << setw(56) << "$" << endl;
    cout << setw(10) << setfill (' ') << "$" << setw(55) << setfill(' ') << "$" << endl;
    cout << setw(10) << "$" << setw(43) << setfill(' ') << "Добро пожаловать в банк 'Serekoff'" << setw(12) << "$" << endl;
    cout << setw(10) << "$" << setw(55) << setfill(' ') << "$" << endl;
    cout << setw(10) << "$" << setw(22) << setfill(' ') << "             Хотите создать BankID или" << setw(17) << "$" << endl;

    int choiceOnBankID;
    int countForBankID = 0; // счетчик попыток

    while (countForBankID < 3) {
        cout  << setw(10) << setfill(' ') << "$" << setw(40) << setfill(' ') << "подключиться к существующему?" << setw(15) << "$" << endl;
        cout << setw(10) << "$" << setw(55) << setfill(' ') << "$" << endl;
        cout << setw(10) << "$" << setw(37) << setfill(' ') << "Выберите действие: " << setw(18) << "$" << endl;
        cout << setw(10) << "$" << setw(25) << setfill(' ') << "1 - создать BankID;" << setw(30) << "$" << endl;
        cout << setw(10) << "$" << setw(25) << setfill(' ') << "      2 - подключиться к BankID: " << setw(22) << "$" << endl;
        cin >> choiceOnBankID;
        
        cout << setfill('$') << setw(56) << "$" << endl;

        /*if (choiceOnBankID == 1) {
           cout << ;

            break;
        }
        else if (choiceOnBankID == 2) {
            cout << connectToBankID(); // cout для вызова функции коннекта к банкID

            break;
        }
        else {
            cout << "Внимание! Вы ввели неправильный выбор. Попробуйте еще раз.\n"
                << "(При вводе 3 раза - вас выкинет из программы банка!)\n";
            countForBankID++; // увеличение счетчика попыток

            if (countForBankID == 3) { // если пользователь сделал неправильный выбор три раза, программа завершается
                cout << "Вы делали неправильный выбор три раза подряд. Программа завершается.\n";
                exit(0); // завершение программы
            }
        }
    }*/
        registationUser user;       // Экземпляр для обращения.
        cout << "Enter a username: ";
        cin >> user.username;

        cout << "Enter password: ";
        cin >> user.password;

        cout << "Enter age: ";
        cin >> user.age;
        return 0;
    }

}