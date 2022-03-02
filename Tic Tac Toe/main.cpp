#include <iostream>
#include <conio.h>

using namespace std;

// global array for marking values and printing
char arr[9] = {'1', '2', '3',
               '4', '5', '6',
               '7', '8', '9'};

// function to draw a board on the screen with the
// values of the array in any given instant
void drawBoard()
{
    system("cls");
    cout << "\t        |     |     " << endl
         << "\t     " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << "  " << endl
         << "\t        |     |     " << endl
         << "\t   -----------------" << endl
         << "\t        |     |     " << endl
         << "\t     " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << "  " << endl
         << "\t        |     |     " << endl
         << "\t   -----------------" << endl
         << "\t        |     |     " << endl
         << "\t     " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << "  " << endl
         << "\t        |     |     " << endl;
}

// funtion to check the game status and return it to the program to
// continue or exit the loop
// 1 - board full with a winner
// 0 - board full without a winner
// 2 - board is not fully occupied (game running)
int checkGameStatus()
{
    if (arr[0] == arr[1] && arr[1] == arr[2]) // 1st row
        return 1;
    else if (arr[3] == arr[4] && arr[4] == arr[5]) // 2nd row
        return 1;
    else if (arr[6] == arr[7] && arr[7] == arr[8]) // 3rd row
        return 1;
    else if (arr[0] == arr[3] && arr[3] == arr[6]) // first column
        return 1;
    else if (arr[1] == arr[4] && arr[4] == arr[7]) // second column
        return 1;
    else if (arr[2] == arr[5] && arr[5] == arr[8]) // third column
        return 1;
    else if (arr[0] == arr[4] && arr[4] == arr[8]) // L2R diagonal
        return 1;
    else if (arr[2] == arr[4] && arr[4] == arr[6]) // R2L diagonal
        return 1;
    else if (arr[0] != '1' && arr[1] != '2' && arr[2] != '3' && arr[3] != '4' && arr[4] != '5' && arr[5] != '6' && arr[6] != '7' && arr[7] != '8' && arr[8] != '9') // check for draw
        return 0;
    else // game is still running
        return 2;
}

int main()
{
start:
    int player = 1, gameStatus;
    char option, xo;

    // reinitialize the array for replaying
    arr[0] = '1';
    arr[1] = '2';
    arr[2] = '3';
    arr[3] = '4';
    arr[4] = '5';
    arr[5] = '6';
    arr[6] = '7';
    arr[7] = '8';
    arr[8] = '9';

    do
    {
        drawBoard();
        // set player number
        if (player % 2 != 0) // if odd, it's player 1's turn
            player = 1;
        else
            player = 2; // else, it's player 2's turn

        // set the marker according to the player
        if (player == 1) // if player 1, then it will be X
            xo = 'X';
        else
            xo = 'O'; // else, it will be O

        // draws the board

        // takes input as to where the mark must be placed
        cout << "Player " << player << "'s turn: ";
        cin >> option;

        // check if the box is empty and then place the player's mark
        if (option == '1' && arr[0] == '1')
            arr[0] = xo;
        else if (option == '2' && arr[1] == '2')
            arr[1] = xo;
        else if (option == '3' && arr[2] == '3')
            arr[2] = xo;
        else if (option == '4' && arr[3] == '4')
            arr[3] = xo;
        else if (option == '5' && arr[4] == '5')
            arr[4] = xo;
        else if (option == '6' && arr[5] == '6')
            arr[5] = xo;
        else if (option == '7' && arr[6] == '7')
            arr[6] = xo;
        else if (option == '8' && arr[7] == '8')
            arr[7] = xo;
        else if (option == '9' && arr[8] == '9')
            arr[8] = xo;
        else // if the mark is not empty or the given input is not in the range, gives invalid message
        {
            player--; // reduces player's turn as it is incremented outside the if else
            cout << "Invalid spot" << endl
                 << "Click any key to continue..." << endl;
            getch();
        }
        drawBoard();
        gameStatus = checkGameStatus(); // change the condition of the do while loop according to the game thats happening

        player++; // increment to the next player

    } while (gameStatus == 2);

    drawBoard();

    player--;            // decrement to previous player because it went to the next player in the previous do while loop
    if (gameStatus == 1) // this results in a player's win
        cout << "Player " << player << " won!!" << endl;
    else // this is because checkGameStatus results 0 for draw
        cout << "It's a draw match" << endl;

    cout << endl
         << endl
         << "Click any key to continue..." << endl;
    getch();

restart: // choice to restart the match
    system("cls");

    cout << "Do you want to play again?" << endl
         << "1. Yes (Y / y)" << endl
         << "2. No (N / n)" << endl
         << endl
         << endl
         << "Select an option: ";
    cin >> option;

    if (option == '1' || option == 'y' || option == 'Y')
        goto start; // go to the start
    else if (option == '2' || option == 'n' || option == 'N')
    {
        cout << "\t   Thank you for playing";
        return 0; // exits the game
    }
    else
    {
        cout << "Invalid input" << endl
             << endl
             << "Click any key to continue..." << endl;
        getch();
        goto restart;
    }

    return 0;
}