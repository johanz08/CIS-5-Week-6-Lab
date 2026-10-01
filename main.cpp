#include <iostream>

// Lab 6 — Johan Zuniga
// CIS 5 Week 06 · Even and odd

int main() {
  int evenSum = 0;
  int oddSum = 0;

  for (int i = 0; i <= 100; i = i + 2) {
    evenSum = evenSum + i;
  }

  int i = 1;

  while (i <= 99) {
    oddSum = oddSum + i;
    i = i + 2;
  }

  std::cout << "Sum of even numbers from 0 to 100: "
            << evenSum << std::endl;

  std::cout << "Sum of odd numbers from 1 to 99: "
            << oddSum << std::endl;

  return 0;
}
