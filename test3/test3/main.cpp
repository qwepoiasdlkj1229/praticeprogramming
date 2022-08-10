#include <iostream>

using namespace std;

int main()
{
    cout << " you have 3 chances" << endl;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;


    for(int i = 4; i != guess && !outOfGuesses;){
        if (guessCount < guessLimit){
        cout <<" Guess the number 1 - 10: ";
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
