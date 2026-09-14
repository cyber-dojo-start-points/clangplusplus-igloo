// answer() dereferences a null pointer, so the test binary dies part way
// through the run. Igloo never reaches the line it prints its counts on, so
// the rag-lambda finds no summary to read and the run is amber rather than
// red.

#include "hiker.hpp"

int answer()
{
    int * const nowhere = nullptr;
    return *nowhere;
}
