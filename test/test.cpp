#define CATCH_CONFIG_MAIN
#include "Case.h"
#include "catch.hpp"

TEST_CASE("TEST", "NICKNAME")
{
    REQUIRE(Prover(9, 100) == 0);
}