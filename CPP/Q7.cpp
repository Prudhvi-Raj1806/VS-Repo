#include <iostream>

int main() {
    int age = 20;
    if (age >= 18) {
        std::cout << "The person is eligible to vote." << std::endl;
    } else {
        std::cout << "The person is not eligible to vote." << std::endl;
    }
    return 0;
}