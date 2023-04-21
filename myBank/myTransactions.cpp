// My Transactions function
// ------------------
// 20.04.2023
// Created by m1nato64

#include "includes.h"


namespace myTransactions {

	void addTransaction(double amount, string description) {
        ofstream file;
        file.open("transaction_data.txt", ios::app);
        if (file.is_open()) {
            file << amount << "," << description << endl;
            file.close();
            cout << "Транзакция успешно добавлена." << endl;
        }
        else {
            cout << "Ошибка вывода данных." << endl;
        }
	}
}

void displayTransactions() {

    ifstream file;
    file.open("transaction_data.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "Ошибка вывода данных." << endl;
    }
}