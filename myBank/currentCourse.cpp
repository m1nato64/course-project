// Current Course function
// ------------------
// 20.04.2023
// Created by m1nato64

#include "includes.h"
using namespace std;

void currentCourse() {
    ifstream input("current_course.txt");
    SYSTEMTIME st;
    GetLocalTime(&st);
    if (input.is_open()) { 
        string line;
        cout << "Current course:" << endl;
        while (getline(input, line))
        {
            cout << line << endl;
        }
        cout << "Date: " <<
            st.wDay << "." << st.wMonth << "." << st.wYear << endl; // выводим курс на экран
       input.close();
    }
}