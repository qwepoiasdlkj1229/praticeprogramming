#include <iostream>

using namespace std;

int main()
{
    cout << " you have 3 chances" << endl;
    int secretNum = 4;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
        cout <<" Guess the number 1-10: ";
        cin >> guess;
        guessCount++;

        } else {
            outOfGuesses = true;
        }
    }

    if(outOfGuesses){

        cout << "You lose!";
    } else{
    cout << "you win!";
    }



    return 0;
}
