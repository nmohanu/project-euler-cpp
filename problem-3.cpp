#include <iostream>

bool isPrime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  long number = 600851475143;
  long remainder = number;
  int smallestPrime = 2;

  for (int i = 2; i < number; i++) {
    if (isPrime(i)) {
      if (remainder % i == 0) {
        remainder /= i;
        smallestPrime = i;
      }
    }

    if (remainder == 1) {
      break;
    }
  }

  std::cout << smallestPrime;
  return 0;
}
