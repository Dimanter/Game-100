#include "ctest.h"

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

int Player(int k, int Spich)
{
    if (Spich - k == 0) {
        return 0;
    }
    Spich -= k;
    return Spich;
}

CTEST(Nick, Check_Nick)
{
    char p[15] = {'a'};
    int x = 0, y = 1;
    int t = ProverNik(p);
    ASSERT_EQUAL(t, x);
    p[6] = 'b';
    p[7] = 'c';
    t = ProverNik(p);
    ASSERT_EQUAL(t, x);
    p[1] = '_';
    p[7] = '_';
    t = ProverNik(p);
    ASSERT_EQUAL(t, y);
}
CTEST(Prover, Prover_Hod)
{
    int k = 10, Spich = 100;
    int x = 0, y = 1;
    int t = Prover(k, Spich);
    ASSERT_EQUAL(t, x);
    k = 0;
    t = Prover(k, Spich);
    ASSERT_EQUAL(t, y);
    k = 12;
    t = Prover(k, Spich);
    ASSERT_EQUAL(t, y);
    k = 9, Spich = 6;
    t = Prover(k, Spich);
    ASSERT_EQUAL(t, y);
    k = 7, Spich = 77;
    t = Prover(k, Spich);
    ASSERT_EQUAL(t, x);
}
CTEST(Hod, Check_Hod)
{
    int x = 0;
    int k = 7, Spich = 90;
    int t = Player(k, Spich);
    int z = Spich - k;
    ASSERT_EQUAL(t, z);
    k = 7, Spich = 7;
    t = Player(k, Spich);
    ASSERT_EQUAL(t, x);
}