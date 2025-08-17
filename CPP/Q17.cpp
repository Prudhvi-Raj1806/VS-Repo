#include <iostream>

int main() {
    char op = '+';
    int num1 = 10, num2 = 5;
    switch (op) {
        case '+': std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl; break;
        case '-': std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl; break;
        case '*': std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl; break;
        case '/': std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl; break;
        default: std::cout << "Invalid operator." << std::endl;
    }
    return 0;
}