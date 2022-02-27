// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
 if (value % 2 == 0) return 0;
 uint64_t root = sqrt(value);
 for (uint64_t i = 3; i <= root; i += 2)
 {
if (value % i == 0) return 0;
}
return 1;
}

uint64_t nPrime(uint64_t n) {
uint64_t i = 0, num = 1;
while (i < n)
{
num++;
if (checkPrime(num)) i++;
}
return num;
}

uint64_t nextPrime(uint64_t value) {
uint64_t i = 0, num = 1;
while (i < n)
{
num++;
if (checkPrime(num)) i++;
}
return num;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t i = 0, num = 1;
while (i < n)
{
num++;
if (checkPrime(num)) i++;
}
return num;
}
