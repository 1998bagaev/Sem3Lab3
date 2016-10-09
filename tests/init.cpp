#include "../include/foo.h"
#include "catch.hpp"

SCENARIO("foo: test", "[testing]") {
	int a = 5;
	int b = 10;
	REQUIRE(foo(a,b) == 2);
	REQUIRE(foo(30,25) == 37);
}