#include <iostream>


int main() {
  int fib0 = 0, fib1 = 1;
  int n = 4000000;
  int sum = 0;
  while (fib0 < n) {
    if (fib1 % 2 == 0){
      sum += fib1;
    }
    int temp = fib0 + fib1;
    fib0 = fib1;
    fib1 = temp;
  }
  std::cout << sum << std::endl;
  return 1;
}
