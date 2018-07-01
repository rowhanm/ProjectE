#include <iostream>

int sumOfDivisibleBy(int n, int target) {
    target = target - 1; // Since not including target
    int p = target/n;
    return n*(p*(p+1)/2);
}

int main() {
    std::cout << sumOfDivisibleBy(3,1000) + sumOfDivisibleBy(5,1000) - sumOfDivisibleBy(15,1000) << std::endl;
    return 0;

}
