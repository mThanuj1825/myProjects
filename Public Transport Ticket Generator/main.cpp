#include <iostream>
#include <ctime>

using namespace std;

time_t t = time(NULL);
tm *tPtr = localtime(&t);

string source1 = "A", source2 = "B", source3 = "C", source4 = "D";
string destination1 = "E", destination2 = "F", destination3 = "G", destination4 = "H";

void screenHeader()
{
    system("cls");
    cout << "\t  PUBLIC TRANSPORT" << endl
         << "   ------------------------------" << endl;
}

void sourceList()
{
    cout << "1. " << source1 << endl
         << "2. " << source2 << endl
         << "3. " << source3 << endl
         << "4. " << source4 << endl;
}

void destinationList()
{
    cout << "1. " << destination1 << endl
         << "2. " << destination2 << endl
         << "3. " << destination3 << endl
         << "4. " << destination4 << endl;
}

void bill(int qty, float price, float total, string from, string to)
{
    screenHeader();
    cout << "      " << tPtr->tm_mday << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << "       " << tPtr->tm_hour << ":" << tPtr->tm_min << ":" << tPtr->tm_sec << endl;
    cout << "               " << from << " to " << to << endl;
    cout << "   ------------------------------" << endl
         << endl;
    cout << "   Fare rs:          " << price << endl;
    cout << "   Passenger number: " << qty << endl
         << endl;
    cout << "   AMOUNT :       RS " << total << endl;
    cout << "   ------------------------------";
}

int main()
{
    int exit = 0, source, destination, qty;
    float total = 0, price = 0;
    string from, to;
    do
    {
        price = 0;
    source:
        screenHeader();
        cout << "Select source: " << endl;
        sourceList();

        cout << "Select an option: ";
        cin >> source;

        if (source > 4)
            goto source;

    destination:
        system("cls");
        screenHeader();
        cout << "Select destination: " << endl;
        destinationList();

        cout << "Select an option: ";
        cin >> destination;

        if (destination > 4)
            goto destination;

        if (source == 1)
        {
            from = source1;
            if (destination == 1)
            {
                price += 40;
                to = destination1;
            }
            else if (destination == 2)
            {
                price += 50;
                to = destination2;
            }
            else if (destination == 3)
            {
                price += 60;
                to = destination3;
            }
            else
            {
                price += 70;
                to = destination4;
            }
        }
        else if (source == 2)
        {
            from = source2;
            if (destination == 1)
            {
                price += 30;
                to = destination1;
            }
            else if (destination == 2)
            {
                price += 40;
                to = destination2;
            }
            else if (destination == 3)
            {
                price += 50;
                to = destination3;
            }
            else
            {
                price += 60;
                to = destination4;
            }
        }
        else if (source == 3)
        {
            from = source3;
            if (destination == 1)
            {
                price += 20;
                to = destination1;
            }
            else if (destination == 2)
            {
                price += 30;
                to = destination2;
            }
            else if (destination == 3)
            {
                price += 40;
                to = destination3;
            }
            else
            {
                price += 50;
                to = destination4;
            }
        }
        else
        {
            from = source4;
            if (destination == 1)
            {
                price += 10;
                to = destination1;
            }
            else if (destination == 2)
            {
                price += 20;
                to = destination2;
            }
            else if (destination == 3)
            {
                price += 30;
                to = destination3;
            }
            else
            {
                price += 40;
                to = destination4;
            }
        }

        cout << "Enter quantity: ";
        cin >> qty;

        total = price * qty;

        system("cls");
        screenHeader();
        bill(qty, price, total, from, to);

        cout << endl
             << "Do you want to exit?" << endl
             << endl;
        cout << "0. Yes" << endl
             << "1. NO" << endl
             << endl
             << "Select an option: ";
        cin >> exit;

    } while (exit != 0);

    return 0;
}