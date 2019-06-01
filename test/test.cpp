#define CATCH_CONFIG_MAIN
#include "Case.h"
#include "catch.hpp"

TEST_CASE("TEST", "HOD")
{
    REQUIRE(Prover(9, 100) == 0);
    REQUIRE(Prover(11, 90) == 1);
    REQUIRE(Prover(9, 7) == 1);
}
TEST_CASE("Tot", "NICKNAME")
{
    char p[15] = {'a'};
    REQUIRE(ProverNik(p) == 0);
    p[1] = 1;
    p[2] = '2';
    p[4] = '/';
    p[13] = '_';
    p[14] = '+';
    REQUIRE(ProverNik(p) == 1);
}