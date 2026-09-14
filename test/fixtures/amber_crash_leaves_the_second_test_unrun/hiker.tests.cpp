// Both specs call answer(), which dies, so the run stops inside the first
// one. Each spec announces itself on stderr before it asserts, because
// stderr is unbuffered and stdout is not: whatever igloo had written to
// stdout is still sitting in the buffer when the process dies, so these two
// lines are the only evidence of how far the run got. Exactly one of them
// is printed, which is what says the second spec never ran.

#include "hiker.hpp"
#include <igloo/igloo.h>
#include <iostream>
#include <string>

using namespace igloo;

Context(Hiker)
{
    Spec(life_the_universe_and_everything)
    {
        std::cerr << "entering the first spec" << std::endl;
        Assert::That(answer(), Equals(42));
    }
    Spec(the_answer_is_two_digits_long)
    {
        std::cerr << "entering the second spec" << std::endl;
        Assert::That(std::to_string(answer()).length(), Equals(2u));
    }
};
