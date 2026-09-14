// A test file named .hpp instead of .cpp, so it is never linked into the
// test binary and these tests never run. Vanishing is what it must not do:
// the makefile compiles every .hpp in its own right, so this one is seen
// even though it is not run.

#include "hiker.hpp"
#include <igloo/igloo.h>
#include <string>

using namespace igloo;

Context(AnswerSize)
{
    Spec(the_answer_is_two_digits_long)
    {
        Assert::That(std::to_string(answer()).length(), Equals(2u) ;
    }
};
