#include "hiker.hpp"
#include <igloo/igloo.h>

using namespace igloo;

Context(Hiker)
{
  Spec(global_function_example)
  {
    Assert::That(answer(), Equals(42));
  }
  Spec(instance_method_example)
  {
    Assert::That(hiker().answer(), Equals(42));
  }
};
