#include <iostream>

int main() {
  const int n = 10001;
  int primes[n];
  int i = 3;
  int nextIndex = 1;
  int j, isPrime;
  primes[0] = 2;
  while (nextIndex < n) {
      isPrime = 1;
      for (j = 0; j < nextIndex && primes[j] * primes[j] <= i; j++) {
        if (i % primes[j] == 0) {
          isPrime = 0;
          break;
        }
      }
    if (isPrime) primes[nextIndex++] = i;
    i++;
  }
  std::cout << primes[n - 1] << std::endl;
}
