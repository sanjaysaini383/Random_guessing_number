#include<bits/stdc++.h>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

   
    int random = rand() % 1000 + 1;
    int userGuess = 0;

    cout << "Guess the number (between 1 and 1000): ";

    while (userGuess != random) {
        cin >> userGuess;

        if (userGuess > random) {
            cout << "Too high! Try again: ";
        } else if (userGuess < random) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    }

    return 0;
}
