#include "hiker.hpp"
#include <igloo/igloo.h>

using namespace igloo;

Context(Hiker)
{
    Spec(life_the_universe_and_everything)
    {
        Assert::That(ansewr(), Equals(42));
    }
};
