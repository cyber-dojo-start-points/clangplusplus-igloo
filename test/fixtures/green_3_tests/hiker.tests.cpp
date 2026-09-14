#include "hiker.hpp"
#include <igloo/igloo.h>
#include <string>

using namespace igloo;

Context(Hiker)
{
    Spec(life_the_universe_and_everything)
    {
        Assert::That(answer(), Equals(42));
    }
    Spec(the_answer_is_two_digits_long)
    {
        Assert::That(std::to_string(answer()).length(), Equals(2u));
    }
    Spec(the_answer_is_not_the_question)
    {
        Assert::That(answer(), Is().Not().EqualTo(6 * 9));
    }
};
