#include <iostream>

int main() {
    int num = 15;
    if (num % 3 == 0 && num % 5 == 0) {
        std::cout << num << " is divisible by both 3 and 5." << std::endl;
    } else {
        std::cout << num << " is not divisible by both 3 and 5." << std::endl;
    }
    return 0;
}