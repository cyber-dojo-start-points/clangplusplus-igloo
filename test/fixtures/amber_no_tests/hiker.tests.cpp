// A test file a learner has started but has not yet put a Context into.
// Igloo's runner links and runs, finds nothing to run, and reports zero
// tests and zero failures. The rag-lambda reads the failure count, so a
// kata with no tests at all reaches green, and answer() returning 6 * 9
// is here to show that green says nothing about the code being right.

#include "hiker.hpp"
#include <igloo/igloo.h>

using namespace igloo;
