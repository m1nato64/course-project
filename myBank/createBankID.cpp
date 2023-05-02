// createBankID function
// ------------------
// 30.04.2023
// Created by m1nato64
// .. �������� ���� cpp � ������� � ���������� � createBankID.h ����. 
// �������� ��� � ������� ����� ��������� BankID ��� ��������� � BankID � registrationForm.cpp

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
        cout << setw(40) << "������� ��� ������������: ";
        cin >> newbankID.username;
        cout << setw(40) << "������� ������: ";
        cin >> newbankID.password;
        cout << "������� ����� ����� (�� ����� 5 ��������): ";
        cin >> newbankID.cardNumber;
        while (newbankID.cardNumber.length() > 5) {
            cout << "����� ����� �� ����� ��������� ����� 5 ��������. ����������, ������� ����� ����� ������: ";
            cin >> newbankID.cardNumber;
        }
        cout << "������� ����� ����� (�� ����� 7 ��������): ";
        cin >> newbankID.accountNumber;
        while (newbankID.accountNumber.length() > 7) {
            cout << "����� ����� �� ����� ��������� ����� 7 ��������. ����������, ������� ����� ����� ������: ";
            cin >> newbankID.accountNumber;
        }

        cout << "����������� ������ �������!" << endl;
        cout << "������� Enter, ����� ����������...";
        cin.ignore();
        cin.get();
        operationChoose();
        return 0;
    }
