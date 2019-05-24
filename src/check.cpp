#include "main.h"

int ProverNik(char p[15])
{
    int i = 0, t = 0;
    while (i < 15) {
        if (p[i] == 0) {
            break;
        }
        if (p[i] == 'a' || p[i] == 'b' || p[i] == 'c' || p[i] == 'd'
            || p[i] == 'e' || p[i] == 'f' || p[i] == 'g' || p[i] == 'h'
            || p[i] == 'j' || p[i] == 'k' || p[i] == 'l' || p[i] == 'm'
            || p[i] == 'n' || p[i] == 'o') {
        } else {
            if (p[i] == 'p' || p[i] == 'r' || p[i] == 's' || p[i] == 't'
                || p[i] == 'u' || p[i] == 'v' || p[i] == 'w' || p[i] == 'u'
                || p[i] == 'y' || p[i] == 'z' || p[i] == 'x' || p[i] == 'q'
                || p[i] == 'i') {
            } else {
                if (p[i] == 'A' || p[i] == 'B' || p[i] == 'C' || p[i] == 'D'
                    || p[i] == 'E' || p[i] == 'F' || p[i] == 'G' || p[i] == 'H'
                    || p[i] == 'J' || p[i] == 'K' || p[i] == 'L' || p[i] == 'M'
                    || p[i] == 'N' || p[i] == 'O') {
                } else {
                    if (p[i] == 'I' || p[i] == 'P' || p[i] == 'R' || p[i] == 'S'
                        || p[i] == 'T' || p[i] == 'U' || p[i] == 'V'
                        || p[i] == 'W' || p[i] == 'U' || p[i] == 'Y'
                        || p[i] == 'Z' || p[i] == 'X' || p[i] == 'Q') {
                    } else {
                        t++;
                    }
                }
            }
        }
        i++;
    }
    if (t == 0) {
        return 0;
    } else {
        return 1;
    }
}

int Prover(int k, int Spich)
{
    if (k < 11 && k > 0) {
        if (k > Spich) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 1;
    }
}

int Player1(int k1, int& n1, int Spich, char p[15])
{
    n1 += k1;
    if (Spich - k1 == 0) {
        // system("clear");
        cout << "Win - " << p << " !!! " << endl;
    }
    Spich -= k1;
    return Spich;
}

int Player2(int k2, int& n2, int Spich, char p[15])
{
    n2 += k2;
    if (Spich - k2 == 0) {
        // system("clear");
        cout << "Win - " << p << " !!! " << endl;
    }
    Spich -= k2;
    return Spich;
}