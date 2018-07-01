#include <iostream>

int main() {
    int i,sum = 0;
    for (i=1; i<1000; i++) {
        if (i%3==0 || i%5==0) {
            sum+=i;
        }
    }
    std::cout<<"Sum of multiples of 3 and 5 up to 1000 is: "<< sum<< std::endl;
    return 0;
}
