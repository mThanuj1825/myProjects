#include <iostream>
#include <unistd.h>

using namespace std;

#define SHIRT 150
#define PANT 200
#define TSHIRT 100
#define TROUSERS 150

void showOptions();
void billHeader();
void billBody(int shirtCost, int pantCost, int tShirtCost, int trousersCost);
void billFooter(int totalCost);

int main()
{
    int option, quantity, shirtCost = 0, pantCost = 0, tShirtCost = 0, trousersCost = 0, totalCost = 0;
    time_t timeForDisplay;
buy:
    system("clear");
    showOptions();
    do
    {
        cout << "Please select an option(1 / 2 / 3 / 4 or '0' to quit): ";
        cin >> option;
        if (option == 0)
        {
            break;
        }
        cout << "Select the quantity: ";
        cin >> quantity;
        switch (option)
        {
        case 1:
            shirtCost = SHIRT * quantity;
            totalCost += shirtCost;
            break;
        case 2:
            pantCost = PANT * quantity;
            totalCost += pantCost;
            break;
        case 3:
            tShirtCost = TSHIRT * quantity;
            totalCost += tShirtCost;
            break;
        case 4:
            trousersCost = TROUSERS * quantity;
            totalCost += trousersCost;
            break;
        default:
            cout << "Enter a valid option!!" << endl;
            break;
        }
    } while (option != 0);

    system("clear");

selectOption:

    cout << "Select an option: " << endl
         << "1. Keep Buying" << endl
         << "2. Get Bill" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        goto buy;
        break;
    case 2:
        system("clear");
        break;
    default:
        system("clear");
        goto selectOption;
    }
    cout << "Getting Bill" << endl;
    sleep(2);
    system("clear");
    billHeader();
    billBody(shirtCost, pantCost, tShirtCost, trousersCost);
    billFooter(totalCost);
}

void showOptions()
{
    cout << "The products available at our store" << endl
         << "  Product      "
         << "Price" << endl
         << "  -------      "
         << "-----" << endl
         << "1. Shirt\t" << SHIRT << endl
         << "2. Pant\t\t" << PANT << endl
         << "3. T-Shirt\t" << TSHIRT << endl
         << "4. Trousers\t" << TROUSERS << endl;
}
void billHeader()
{
    cout << "\t      Welcome to ABC clothing" << endl
         << "\t      -----------------------" << endl;
}
void billBody(int shirtCost, int pantCost, int tShirtCost, int trousersCost)
{
    cout << "\t  Item"
         << "\t\t Price"
         << "\t \t Total" << endl
         << "\t--------"
         << "\t-------"
         << "\t \t-------" << endl
         << "\tShirts"
         << "\t\t  150*" << SHIRT
         << "\t\t  " << shirtCost << endl
         << "\tPants"
         << "\t\t  200*" << PANT
         << "\t\t  " << pantCost << endl
         << "\ttShirts"
         << "\t\t  100*" << TSHIRT
         << "\t\t  " << tShirtCost << endl
         << "\tTrousers"
         << "\t  150*" << TROUSERS
         << "\t\t  " << trousersCost << endl;
}
void billFooter(int totalCost)
{
    cout << "*-----------------------------------------------------*" << endl
         << "\t\t   Grand Total:\t" << totalCost << endl
         << "*-----------------------------------------------------*" << endl
         << "\t   Thank you for visiting our store" << endl;
}