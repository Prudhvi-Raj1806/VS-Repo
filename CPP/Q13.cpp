#include <iostream>

int main() {
    int num1 = 10, num2 = 5, num3 = 12;
    if (num1 <= num2 && num1 <= num3) {
        std::cout << "The smallest number is " << num1 << "." << std::endl;
    } else if (num2 <= num1 && num2 <= num3) {
        std::cout << "The smallest number is " << num2 << "." << std::endl;
    } else {
        std::cout << "The smallest number is " << num3 << "." << std::endl;
    }
    return 0;
}