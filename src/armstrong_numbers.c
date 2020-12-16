#include "armstrong_numbers.h"
#include <math.h>
#include <stdio.h>

int num_digits(int i) { return (int)floor(log10(i)) + 1; }

bool is_armstrong_number(int candidate) {
  int n = num_digits(candidate);
  int sum = 0;
  int local_candidate = candidate;
  while (local_candidate > 0) {
    sum += pow(local_candidate % 10, n);
    local_candidate /= 10;
  }
  return candidate == sum;
}


