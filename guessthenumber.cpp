#include <iostream>
#include <ctime>

using namespace std;

int main() {
    //Initialising variables
    int num;
    int guess;
    int tries;

    //Random number generator
    srand(time(NULL));
    num = (rand() % 100)+1;

    //do while loop
    do {
        cout << "Guess the number between 1-100: ";
        cin >> guess;
        tries++;
        
        if(guess > num){
            cout << "Too High!" << endl;
        } else if (guess < num) {
            cout << "Too Low!" << endl;
        } else {
            cout << "Correct!" << endl;
            cout << "Your number of tries: " << tries << endl;
        }

    } while(guess!=num);

    return 0;
}
