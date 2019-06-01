#include "main.h"

void Data(char p[15], int k, int n, int Spich)
{
    cout << "Move - " << p << endl;
    cout << "The number of matches taken last time - " << k << endl;
    cout << "The number of all matches taken - " << n << endl;
    cout << "The number of matches remaining on the table - " << Spich << endl;
}

void Stat(char p[15], int k, int n)
{
    cout << "The number of matches taken last time - " << k << endl;
    cout << "The number of all matches taken - " << n << endl;
}

int menu()
{
    int r;

    cout << "\tStart game" << endl << endl;
    cout << "\tRules" << endl << endl;
    cout << "\tExit" << endl << endl;
    cin >> r;
    switch (r) {
    case 1: {
        return 0;
    }
    case 2: {
        cout << "From the heap, initially containing 100 matches, two playing "
                "in turn take several matches: at least one and "
             << endl;
        cout << "not more than ten. Wins the one who took the last match. ";
        cout << "A player's nickname consists of at least 1 maximum" << endl;
        cout << "of 15 Latin alphabet characters from A to z. There should be "
                "no gaps when entering a nickname."
             << endl;
        cout << "To continue press any key ..." << endl;
        return 1;
    }
    case 3: {
        cout << "Good bay :) " << endl;
        getchar();
        getchar();
        return 2;
    }
    }
    return 0;
}
