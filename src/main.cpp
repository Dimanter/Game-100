#include "main.h"

int Vvod()
{
    while (true) {
        int a;
        cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767, '\n');
        } else
            return a;
    }
}

int main()
{
    char p1[15], p2[15];
    int Spich = 100, n1 = 0, n2 = 0, k1 = 0, k2 = 0, flag = 0, t1 = 0, t2 = 0,
        h1 = 21, h2 = 22, x = 1;
    while (x) {
        x = menu();
        if (x == 2) {
            return 0;
        }
    }
    x = 1;
    while (x) {
        cout << "Enter player name 1" << endl;
        cin >> p1;
        x = ProverNik(p1);
    }
    x = 1;
    while (x) {
        cout << "Enter player name 2" << endl;
        cin >> p2;
        x = ProverNik(p2);
    }
    h1 = 66;
    h2 = 55;
    if (h1 > h2) {
        flag = 0;
    } else {
        flag = 1;
    }
    while (Spich > 0) {
        if (flag % 2 == 0) {
            x = 1;
            while (x) {
                Data(p1, t1, n1, Spich);
                cout << endl
                     << "Enter the number of matches you want to take " << endl;
                k1 = Vvod();
                x = Prover(k1, Spich);
            }
            t1 = k1;
            Spich = Player1(k1, n1, Spich, p1);
            flag++;
        } else {
            x = 1;
            while (x) {
                Data(p2, t2, n2, Spich);
                cout << endl
                     << "Enter the number of matches you want to take " << endl;
                cin >> k2;
                x = Prover(k2, Spich);
            }
            t2 = k2;
            Spich = Player2(k2, n2, Spich, p2);
            flag--;
        }
    }
    cout << endl << "Statistics for - " << p1 << endl;
    Stat(p1, k1, n1);
    cout << endl << "Statistics for - " << p2 << endl;
    Stat(p2, k2, n2);
}
