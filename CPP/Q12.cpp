#include <iostream>

int main() {
    int marks = 85;
    if (marks >= 90) {
        std::cout << "Grade A" << std::endl;
    } else if (marks >= 75) {
        std::cout << "Grade B" << std::endl;
    } else if (marks >= 50) {
        std::cout << "Grade C" << std::endl;
    } else {
        std::cout << "Grade Fail" << std::endl;
    }
    return 0;
}