#include "tests_example.h"
#include <assert.h>

void run_all_tests() { assert(OK == test_echo()); }
Error test_echo() {
  int test_value = 10;
  if (test_value != echo(test_value)) {
    return ligma;
  }

  test_value = 0;
  if (test_value != echo(test_value)) {
    return ligma;
  }

  return OK;
}