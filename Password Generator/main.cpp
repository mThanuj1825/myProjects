#include <iostream>
#include <cstdlib>

using namespace std;

const char seed[] = "`1234567890-=/*-qwertyuiop[]+asdfghjkl;'zxcvbnm,.~!@#$%^&*()_+|}{:<>?:QWERTYUIOPLKJHGFDSAZXCVBNM";
int len = sizeof(seed) - 1;

int main()
{
    int n;
    cout << "Enter password length: ";
    cin >> n;

    srand(time(0));

    for(int i = 0; i < n; i++)
        cout << seed[rand() % len];

    return 0;
}