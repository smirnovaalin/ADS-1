// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value == 1) {
    return false;
  } else {
    for (uint64_t del = 2; del < value; del++) {
      if (value % del == 0) {
        return false;
      }
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t count = 0, num = 1;
  while (count != n) {
    if (checkPrime(num) == 1) {
      count++;
      num++;
    } else {
      num++;
    }
  }
  return num - 1;
}

uint64_t nextPrime(uint64_t value) {
  bool chek = false;
  uint64_t num = value + 1;
  while (!chek) {
    if (checkPrime(num) == 1) {
      chek = true;
    }
    num++;
  }
  return num - 1;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t summa = 0, num = 1;
  for (int i = 0; i < hbound; i++) {
    if (checkPrime(num) == 1) {
      summa += num;
      num++;
    } else {
      num++;
    }
  }
  return summa;
}
