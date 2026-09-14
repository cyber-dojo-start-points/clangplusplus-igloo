// A print inside a loop, which is how a learner looks at what their code is
// doing. Igloo writes to stdout and so does this, so the flood and the
// summary line share one stream. The runner keeps the first 50K of that
// stream and drops the rest, and igloo's counts are printed at the very end,
// so the spec passes and the run is still amber: there is no summary left
// for the rag-lambda to read.

#include "hiker.hpp"
#include <igloo/igloo.h>
#include <iostream>

using namespace igloo;

Context(Hiker)
{
    Spec(life_the_universe_and_everything)
    {
        int total = 0;
        for (int i = 0; i != 5000; i++)
        {
            std::cout << "debug: i is " << i << ", total is " << total << std::endl;
            total += i;
        }
        Assert::That(answer(), Equals(42));
    }
};
