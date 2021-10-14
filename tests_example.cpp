#include "tests_example.h"
#include <assert.h>
#include <stdio.h>

void run_all_tests() { assert(OK == test_echo()); }
Error test_echo() {
  int test_value = 10;
  if (test_value != echo(test_value)) {
    printf("F*ck this th*t I'm out\n");
    return ligma;
  }

  test_value = 0;
  if (test_value != echo(test_value)) {
    printf("F*ck this th*t at this point I'm out\n");
    return ligma;
  }

  return OK;
}