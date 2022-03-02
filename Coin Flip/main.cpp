#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

void heads()
{
    system("cls");
    cout << "         ****         " << endl
         << "      **      **      " << endl
         << "    **  |    |  **    " << endl
         << "   *    |    |    *   " << endl
         << "  *     |----|     *  " << endl
         << "   *    |    |    *   " << endl
         << "    **  |    |  **    " << endl
         << "      **      **      " << endl
         << "         ****         " << endl;
}
void h1()
{
    system("cls");
    cout << "                      " << endl
         << "      **********      " << endl
         << "    **  |    |  **    " << endl
         << "   *    |    |    *   " << endl
         << "  *     |----|     *  " << endl
         << "   *    |    |    *   " << endl
         << "    **  |    |  **    " << endl
         << "      **********      " << endl
         << "                      " << endl;
}
void h2()
{
    system("cls");
    cout << "                      " << endl
         << "                      " << endl
         << "    **************    " << endl
         << "   *    |    |    *   " << endl
         << "  *     |----|     *  " << endl
         << "   *    |    |    *   " << endl
         << "    **************    " << endl
         << "                      " << endl
         << "                      " << endl;
}
void h3()
{
    system("cls");
    cout << "                      " << endl
         << "                      " << endl
         << "                      " << endl
         << "   ****************   " << endl
         << "  *                *  " << endl
         << "   ****************   " << endl
         << "                      " << endl
         << "                      " << endl
         << "                      " << endl;
}
void h4()
{
    system("cls");
    cout << "                      " << endl
         << "                      " << endl
         << "                      " << endl
         << "                      " << endl
         << "  ******************  " << endl
         << "                      " << endl
         << "                      " << endl
         << "                      " << endl
         << "                      " << endl;
}
void tails()
{
    system("cls");
    cout << "         ****         " << endl
         << "      **      **      " << endl
         << "    ** ________ **    " << endl
         << "   *       |      *   " << endl
         << "  *        |       *  " << endl
         << "   *       |      *   " << endl
         << "    **     |    **    " << endl
         << "      **      **      " << endl
         << "         ****         " << endl;
}

void t1()
{
    system("cls");
    cout << "                      " << endl
         << "      **********      " << endl
         << "    **  _______ **    " << endl
         << "   *       |      *   " << endl
         << "  *        |       *  " << endl
         << "   *       |      *   " << endl
         << "    **     |    **    " << endl
         << "      **********      " << endl
         << "                      " << endl;
}
void t2()
{
    system("cls");
    cout << "                      " << endl
         << "                      " << endl
         << "    **************    " << endl
         << "   *    _______   *   " << endl
         << "  *        |       *  " << endl
         << "   *       |      *   " << endl
         << "    **************    " << endl
         << "                      " << endl
         << "                      " << endl;
}
void t3()
{
    system("cls");
    cout << "                      " << endl
         << "                      " << endl
         << "                      " << endl
         << "   ****************   " << endl
         << "  *     ______     *  " << endl
         << "   ****************   " << endl
         << "                      " << endl
         << "                      " << endl
         << "                      " << endl;
}
void t4()
{
    system("cls");
    cout << "                      " << endl
         << "                      " << endl
         << "                      " << endl
         << "                      " << endl
         << "  ******************  " << endl
         << "                      " << endl
         << "                      " << endl
         << "                      " << endl
         << "                      " << endl;
}

int main()
{
start:
    srand((unsigned)time(0));
    int i = 1;

    while (i <= 5)
    {
        heads();

        Sleep(30);
        h1();
        Sleep(30);
        h2();
        Sleep(30);
        h3();
        Sleep(30);
        h4();
        Sleep(30);

        tails();

        Sleep(30);
        t1();
        Sleep(30);
        t2();
        Sleep(30);
        t3();
        Sleep(30);
        t4();
        Sleep(30);
        i++;
    }

    int x = rand() % 2;

    if (x == 1)
        heads();
    else if (x == 0)
        tails();

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