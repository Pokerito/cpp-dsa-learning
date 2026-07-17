// Include input/output stream library for console operations
#include <iostream>

// Main function - entry point of the program
int main() {
    // Declare variables:
    // op - stores the operation (+, -, *, /)
    // num1, num2 - stores the two numbers to operate on
    char op;
    double num1, num2;
    
    // Prompt user to enter two numbers
    std::cout << "Enter two numbers: ";
    // Read the two numbers from user input
    std::cin >> num1 >> num2;
    
    // Prompt user to enter an operator
    std::cout << "Enter an operator (+, -, *, /): ";
    // Read the operator from user input
    std::cin >> op;

    // Switch statement to check which operation to perform
    switch(op) {
        // Addition case
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        // Subtraction case
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        // Multiplication case
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        // Division case with zero-division check
        case '/':
            if(num2 != 0)
                std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                std::cout << "Error! Division by zero.";
            break;
        // Default case for invalid operators
        default:
            std::cout << "Error! Operator is not correct";
            break;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
