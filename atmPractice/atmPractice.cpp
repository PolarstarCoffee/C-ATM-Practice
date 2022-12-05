// atmPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Basic ATM C++ program for practice 

void showMenu() 
{
    cout << "*****MENU*****" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "**************" << endl;
}

int main()
{

    int option;
    double Balance = 500; //inital balance
    do {
        showMenu();
        cout << "Option: " << endl;
        cin >> option;
        system("cls");
        switch (option) {
        case 1:cout << "Balance is " << Balance << "$" << endl; break;
        case 2:cout << "Deposit amount:";
            double depositAmount;
            cin >> depositAmount;
            Balance += depositAmount; break;
        case 3: cout << "Withdraw amount:";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= Balance)
                Balance -= withdrawAmount;
            else
                cout << "Insufficent Funds" << endl;
            break;
        }
    } while (option != 4);
    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
