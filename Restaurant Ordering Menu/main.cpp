// header files
#include <bits/stdc++.h>
// defining prices
#define C65 120
#define PM 180
#define V65 100
#define MS 80

using namespace std;

int main(int argc, char *argv[])
{
    // variables
    int qty = 0, price = 0, total = 0;
    int c65Price = 0, pmPrice = 0, v65Price = 0, msPrice = 0;
    int c65Qty = 0, pmQty = 0, v65Qty = 0, msQty = 0;
    char op;
mainMenu:
    system("cls");
    cout << "\t   Welcome to ABC restaurant" << endl
         << "    -------------------------------------" << endl
         << "Items available are:" << endl
         << "---------------------" << endl
         << "1. Chicken 65 - " << C65 << "/-" << endl
         << "2. Paneer Manchurian - " << PM << "/-" << endl
         << "3. Veg 65 - " << V65 << "/-" << endl
         << "4. Milk Shake - " << MS << "/-" << endl
         << endl
         << "Select an option: ";
    cin >> op;
    cout << endl;

    // check for which food item to calculate total
    switch (op)
    {
    case '1':
        cout << "Enter quantity: ";
        cin >> qty;
        cout << endl;
        price = C65 * qty;
        c65Qty += qty;
        c65Price += price;
        break;
    case '2':
        cout << "Enter quantity: ";
        cin >> qty;
        cout << endl;
        price = PM * qty;
        pmQty += qty;
        pmPrice += price;
        break;
    case '3':
        cout << "Enter quantity: ";
        cin >> qty;
        cout << endl;
        price = V65 * qty;
        v65Qty += qty;
        v65Price += price;
        break;
    case '4':
        cout << "Enter quantity: ";
        cin >> qty;
        cout << endl;
        price = MS * qty;
        msQty += qty;
        msPrice += price;
        break;
    default:
        goto mainMenu;
        break;
    }
    // add current price to the total price
    total += price;
exitChoice:
    system("cls");
    cout << "Do you want another order?" << endl
         << "1. Yes" << endl
         << "2. No" << endl
         << endl
         << "Select an option: ";
    cin >> op;

    // check the exit condition
    switch (op)
    {
    case '1':
        goto mainMenu; // restarts the program with current values unchanged
        break;
    case '2':
        system("cls");
        cout << "                    Enjoy your food" << endl
             << "------------------------------------------------------" << endl
             << "    Item        Price        Quantity        Total" << endl
             << "------------------------------------------------------" << endl;
        if (c65Qty != 0)
            cout << "Chicken 65       " << C65 << "             " << c65Qty << "            " << c65Price << endl;
        if (pmQty != 0)
            cout << "Paneer M        " << PM << "             " << pmQty << "            " << pmPrice << endl;
        if (v65Qty != 0)
            cout << "Veg 65           " << V65 << "             " << v65Qty << "            " << v65Price << endl;
        if (msQty != 0)
            cout << "Milk Shake       " << MS << "              " << msQty << "            " << msPrice << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "Grand Total                                   " << total << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "            Thank you for dining with us" << endl;
        break;
    default:
        goto exitChoice;
        break;
    }

    return 0;
}