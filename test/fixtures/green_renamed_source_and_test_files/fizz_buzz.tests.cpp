#include "fizz_buzz.hpp"
#include <igloo/igloo.h>

using namespace igloo;

Context(FizzBuzz)
{
    Spec(life_the_universe_and_everything)
    {
        Assert::That(fizz_buzz(), Equals(42));
    }
};
