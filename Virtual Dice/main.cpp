#include <iostream>
#include <cstdlib>
using namespace std;

void one()
{
    system("cls");
    cout << "|---------|" << endl
         << "|   /|    |" << endl
         << "|  / |    |" << endl
         << "|    |    |" << endl
         << "|    |    |" << endl
         << "|  __|__  |" << endl
         << "|---------|" << endl;
}
void two()
{
    system("cls");
    cout << "|---------|" << endl
         << "|  _____  |" << endl
         << "|       | |" << endl
         << "|  _____| |" << endl
         << "| |       |" << endl
         << "| |_____  |" << endl
         << "|---------|" << endl;
}
void three()
{
    system("cls");
    cout << "|---------|" << endl
         << "| ______  |" << endl
         << "|       | |" << endl
         << "| ______| |" << endl
         << "|       | |" << endl
         << "| ______| |" << endl
         << "|---------|" << endl;
}
void four()
{
    system("cls");
    cout << "|---------|" << endl
         << "| |       |" << endl
         << "| |       |" << endl
         << "| |__|___ |" << endl
         << "|    |    |" << endl
         << "|    |    |" << endl
         << "|---------|" << endl;
}
void five()
{
    system("cls");
    cout << "|---------|" << endl
         << "|  ____   |" << endl
         << "| |       |" << endl
         << "| |____   |" << endl
         << "|      |  |" << endl
         << "|  ____|  |" << endl
         << "|---------|" << endl;
}
void six()
{
    system("cls");
    cout << "|---------|" << endl
         << "|  |      |" << endl
         << "|  |      |" << endl
         << "|  |____  |" << endl
         << "|  |    | |" << endl
         << "|  |____| |" << endl
         << "|---------|" << endl;
}

int main()
{
start:
    srand((unsigned)time(0));

    int i = 0;
    while (i < 7)
    {
        one();
        two();
        three();
        four();
        five();
        six();
        i++;
    }
    int x = 1 + (rand() % 6);

    switch (x)
    {
    case 1:
        one();
        break;
    case 2:
        two();
        break;
    case 3:
        three();
        break;
    case 4:
        four();
        break;
    case 5:
        five();
        break;
    case 6:
        six();
        break;
    }

exit:
    char op;

    cout << "Run it again?" << endl
         << endl
         << "1. Yes" << endl
         << "2. No" << endl;
    cin >> op;

    if (op == '1')
        goto start;
    else if (op == '2')
        return 0;
    else
        goto exit;

    return 0;
}