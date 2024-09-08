#include <iostream>
int main() {
  int a = 1;
  int b = 2;
  int c = 0;
  int sum = 0;

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
