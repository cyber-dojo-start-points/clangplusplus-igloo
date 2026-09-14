// One spec asserts and is wrong, the other throws before it asserts at all.
// Igloo catches the exception and counts that spec as failed alongside the
// one that merely got the wrong answer, so both land in the failure count
// and the run is red rather than stopping part way through.

#include "hiker.hpp"
#include <igloo/igloo.h>
#include <stdexcept>

using namespace igloo;

Context(Hiker)
{
    Spec(life_the_universe_and_everything)
    {
        Assert::That(answer(), Equals(42));
    }
    Spec(the_answer_is_two_digits_long)
    {
        throw std::runtime_error("not worked out yet");
    }
};
