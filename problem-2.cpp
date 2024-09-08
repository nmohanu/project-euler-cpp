#include <iostream>
int main() {
  int a = 1;
  int b = 2;
  int c = 0;

  // Sum starts at 2 because b is even prime.
  int sum = 2;

  while (b <= 4000000 && a <= 4000000) {
    c = a + b;
    a = b;
    b = c;

    if (c % 2 == 0) {
      sum += c;
    }
  }

  std::cout << sum + 2;
}
