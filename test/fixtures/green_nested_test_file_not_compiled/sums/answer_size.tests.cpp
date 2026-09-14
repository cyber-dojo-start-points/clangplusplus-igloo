// A test file in a sub-directory. The makefile gathers its sources with
// $(wildcard *.cpp), which looks in this directory only, so this file is
// never compiled and never linked. The assertion here is one that would
// fail, so a green says this file really did not run rather than that it
// ran and passed.

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
