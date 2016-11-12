/*
Created by: Josue Guillen
Date: 11/12/2016
Assignment: Create an algorithm for a simple number guessing game
*/ 

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    
    int number;
    number = rand() % 10 + 1;
    int guess;
    do {
        cout << "Guess and enter a number!" << endl;
        cin >> guess;
        if (guess < number)
        cout << "Your guess is less than the generated number" << endl;
        else if (guess > number)
        cout << "Your guess is higher than the generated number" << endl;
        else 
        cout << "Your guessed the correct number. You are awared 10 points!" << endl;
    } while (guess !=number);
    system ("PAUSE");
    return 0;
}
    
