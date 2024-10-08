#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
   
    std::srand(std::time(0));
   
    int number_to_guess = std::rand() % 100 + 1;
    int user_guess;
    bool guessed = false;
    
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    

    while (!guessed) {
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;
        
        if (user_guess < number_to_guess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (user_guess > number_to_guess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << number_to_guess << std::endl;
            guessed = true;
        }
    }
    
    return 0;
}
