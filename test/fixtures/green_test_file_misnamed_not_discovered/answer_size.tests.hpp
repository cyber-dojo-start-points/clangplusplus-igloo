// A test file named .hpp instead of .cpp. The makefile compiles every .hpp
// in its own right, so this file is checked for errors, but only .cpp files
// become objects and are linked into the test binary, so these tests never
// run. The assertion here is one that would fail, so a green says this file
// really did not run rather than that it ran and passed.

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
