// Include input/output stream library for console operations
#include <iostream>
// Include library for generating random numbers and program control
#include <cstdlib>
// Include time library to seed the random number generator
#include <ctime>

// Main function - entry point of the program
int main() {
    // Seed the random number generator with current time to ensure different numbers each run
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random secret number between 1 and 100
    // rand() % 100 generates a number from 0 to 99, adding 1 makes it 1 to 100
    int secretNumber = std::rand() % 100 + 1;
    
    // Variables to track user's guess and number of attempts
    int userGuess = 0;
    int attempts = 0;

    std::cout << "=========================================\n";
    std::cout << "       WELCOME TO THE GUESSING GAME      \n";
    std::cout << "=========================================\n";
    std::cout << "I have selected a secret number between 1 and 100.\n";
    std::cout << "Can you guess what it is?\n\n";

    // Loop until the user guesses the correct number
    do {
        // Prompt user to enter their guess
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        
        // Increment the number of attempts
        attempts++;

        // Give feedback based on the guess
        if (userGuess > secretNumber) {
            std::cout << "Too high! Try a lower number.\n\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try a higher number.\n\n";
        } else {
            // Correct guess! Print success message
            std::cout << "\nCongratulations! You guessed the correct number: " << secretNumber << "\n";
            std::cout << "It took you " << attempts << " attempts to win the game!\n";
        }

    } while (userGuess != secretNumber);

    // Return 0 to indicate successful program execution
    return 0;
}
