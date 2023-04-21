// Show Current Balance function
// ------------------
// 21.04.2023
// Created by m1nato64

#include "includes.h"

using namespace std;

int showBalance() {
    ifstream infile("show_currentBalance.txt");
    if (infile.is_open()) {
        string line;
        getline(infile, line); // ��������� ��� ������ �� �����
        int balance = stoi(line.substr(line.find("-") + 1)); // ������� �������� ������� � ������������ ��� � int
        infile.close();
        return balance;
    }
    else {
        return 0;
    }
    
}
