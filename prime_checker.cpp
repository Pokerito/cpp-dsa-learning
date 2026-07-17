// Include input/output stream library for console operations
#include <iostream>
// Include cmath library for the sqrt() function
#include <cmath>

// Function declaration: Checks if a given number is prime
// Returns true if the number is prime, false otherwise
bool isPrime(int n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) {
        return false;
    }
    
    // 2 is the only even prime number
    if (n == 2) {
        return true;
    }
    
    // Exclude all other even numbers
    if (n % 2 == 0) {
        return false;
    }
    
    // Check odd factors up to the square root of n
    // Optimization: If a number has a factor, it must be less than or equal to its square root.
    int limit = std::sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        // If n is divisible by i, it is not prime
        if (n % i == 0) {
            return false;
        }
    }
    
    // If no factors were found, the number is prime
    return true;
}

// Main function - entry point of the program
int main() {
    int number;

    std::cout << "=========================================\n";
    std::cout << "          PRIME NUMBER CHECKER           \n";
    std::cout << "=========================================\n";
    
    // Prompt the user for input
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Call the isPrime function and display the result
    if (isPrime(number)) {
        std::cout << number << " is a PRIME number.\n";
    } else {
        std::cout << number << " is NOT a prime number.\n";
    }

    // Return 0 to indicate successful program execution
    return 0;
}
