#include "hiker.hpp"
#include <igloo/igloo.h>
#include <string>

using namespace igloo;

Context(AnswerSize)
{
    Spec(the_answer_is_three_digits_long)
    {
        Assert::That(std::to_string(answer()).length(), Equals(3u));
    }
};
