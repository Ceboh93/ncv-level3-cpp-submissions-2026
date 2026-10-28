#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int random(int maximum);

int random(int maximum) {
    return 1 + rand() % maximum;
}
int main() {
    //srand(static_cast<unsigned>(time(nullptr)));
    // The Guessing Game
    int secret = random(10);
    //cout << secret << endl;
    int myGuess = 0;

    cout << "What is your Guess" << endl;
    cin >> myGuess;

    while (myGuess != secret)

    if (myGuess == secret)
    {
        cout << "you are correct" << endl;
    }
    else
    {
        cout << "Not this time" << endl;
    }


   /*int guess = 0;
    int tries = 0;
    cout << "I am thinking of a number from 1 to 20." << endl;
    do {
        cout << "Guess a number from 1 to 20:" << endl;
        cin >> guess;
        tries += 1;
        if (guess == secret) {
            cout << "Correct!" << endl;
        } else if (fabs(guess - secret) <= 3) {
            cout << "Hot!" << endl;
        } else {
            cout << "Cold." << endl;
        }
    } while (guess != secret);
    cout << "Number of tries: " << tries << endl;*/
    return 0;
}
