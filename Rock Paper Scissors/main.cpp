#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int playerPts = 0, cpuPts = 0, rounds;
    cout << "Enter total rounds: ";
    cin >> rounds;

    int roundNum = 1;
    do
    {
    start:
        system("cls");
        int cpuChoice;
        string cpu, player;
        char op;
        srand(time(0));
        cpuChoice = (rand() % 3) + 1;

        cpu = (cpuChoice == 1) ? "Rock" : (cpuChoice == 2) ? "Paper"
                                                           : "Scissors";

        cout << "ROUND : " << roundNum << endl
             << endl;

        ++roundNum;

        cout << "Choose one:" << endl
             << "1. Rock" << endl
             << "2. Paper" << endl
             << "3. Scissors" << endl
             << endl
             << "Select an option: ";
        cin >> op;

        player = (op == '1') ? "Rock" : (op == '2') ? "Paper"
                                                    : "Scissors";

        cout << endl
             << endl
             << "Cpu choice: " << cpu << endl
             << "Your choice: " << player << endl;

        switch (op)
        {
        case '1':
            if (cpuChoice == 1)
                cout << "Game Draw";
            else if (cpuChoice == 2)
                cout << "Player Win";
            else
                cout << "Cpu Win";
            cout << endl
                 << endl
                 << "Click any key to continue...";
            getch();
            break;
        case '2':
            if (cpuChoice == 1)
                cout << "Player Win";
            else if (cpuChoice == 2)
                cout << "Game Draw";
            else
                cout << "Cpu Win";
            cout << endl
                 << endl
                 << "Click any key to continue...";
            getch();
            break;
        case '3':
            if (cpuChoice == 1)
                cout << "Player Win";
            else if (cpuChoice == 2)
                cout << "Cpu Win";
            else
                cout << "Game Draw";
            cout << endl
                 << endl
                 << "Click any key to continue...";
            getch();
            break;
        default:
            fflush(stdin);
            --roundNum;
            goto start;
            break;
        }
        --rounds;
    } while (rounds);

    return 0;
}