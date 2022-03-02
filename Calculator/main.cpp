#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
start:
    system("cls");
    cout << "\t   CALCULATOR" << endl
         << "      --------------------" << endl
         << "1. Addition" << endl
         << "2. Subtraction" << endl
         << "3. Multiplication" << endl
         << "4. Division" << endl
         << endl
         << "Select an option: ";
    cin >> op;

    system("cls");

    switch (op)
    {
    case '1':
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '2':
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '3':
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '4':
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;
        cout << num1 << " / " << num2 << endl
             << "Quotient = " << num1 / num2 << endl
             << "Remainder = " << num1 % num2;
        break;
    default:
        fflush(stdin);
        goto start;
        break;
    }

    return 0;
}