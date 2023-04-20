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

int main() {
    registationUser user;       // Экземпляр для обращения.
    cout << "Enter a username: ";
    cin >> user.username;

    cout << "Enter password: ";
    cin >> user.password;

    cout << "Enter age: ";
    cin >> user.age;

        // Выводим введенные данные на экран
        cout << "Username: " << user.username << endl;
        cout << "Password: " << user.password << endl;
        cout << "Age: " << user.age << " years old" << endl;

    }