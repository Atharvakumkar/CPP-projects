#include <iostream>
#include <ctime>
using namespace std;

int main() {
    //Function to generate random cases
    srand(time(0));
    int randCar = rand() % 7 + 1;

    //Initialising variable
    char question;

    //Header text
    cout << "Random Lamborghini car generator!\n";

    //Taking input
    cout << "Are you ready to select a random Lamborghini car? (Y/N): ";
    cin >> question;

    //Reacting to the answers received
    if(question == 'y' || question == 'Y'){
        switch(randCar) {
            case 1: 
            cout << "Your car is Lamborghini Gallardo!";
            break;

            case 2:
            cout << "Your car is Lamborghini Murcielago!";
            break;

            case 3:
            cout << "Your car is Lamborghini Aventador!";
            break;

            case 4:
            cout << "Your car is Lamborghini Huracan!";
            break;

            case 5:
            cout << "Your car is Lamborghini Urus!";
            break;

            case 6:
            cout << "Your car is Lamborghini Revuelto!";
            break;

            case 7:
            cout << "Your car is Lamborghini Temerario!";
            break;
        }
    } else if(question == 'n' || question == 'N') {
        cout << "Seems like you prefer Ferraris :(";
    } else {
        cout << "Please enter Y/N only!";
    }


    return 0;
}
