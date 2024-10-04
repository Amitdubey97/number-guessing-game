#include <iostream>
#include <cstdlib>  // For std::rand() and std::srand()
#include <ctime>    // For std::time()

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));
    
    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    
    int userGuess = 0;
    bool correctGuess = false;

    std::cout << "Guess the number (between 1 and 100): ";

    while (!correctGuess) {
        // Get the user's guess
        std::cin >> userGuess;

        // Check if the user's guess is correct
        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again: ";
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the number!" << std::endl;
            correctGuess = true;
        }
    }

    return 0;
}