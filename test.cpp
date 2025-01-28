#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.h"

TEST_CASE("AddN is correct!", "[AddN]") {
    std::vector<int> v = {1, 2, 3};
    std::vector<int> result = AddN(v, 2);
    REQUIRE(result == std::vector<int>{3, 4, 5});
}

TEST_CASE("VectorTimesN is correct!", "[VectorTimesN]") {
    std::vector<double> v = {1, 2, 3};
    std::vector<double> result = VectorTimesN(v, 2);
    REQUIRE(result == std::vector<double>{2, 4, 6});
}

TEST_CASE("Sum is correct!", "[Sum]") {
    std::vector<double> v = {1, 2, 3};
    double result = Sum(v);
    REQUIRE(result == 6);
}

TEST_CASE("Sign is correct!", "[Sign]"){
    double result1 = Sign(2);
    double result2 = Sign(-2);
    double result3 = Sign(0);
    REQUIRE(result1 == 1);
    REQUIRE(result2 == -1);
    REQUIRE(result3 == 1);
}