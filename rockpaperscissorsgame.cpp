#include <iostream>
#include <ctime>

using namespace std;

//Initialisation of functions
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    //Declaration of variables
    char player;
    char computer;

    //Storing the getUserChoice() function in variable
    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    //Storing the getComputerChoice() function in variable
    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);
    
    //Choosing the winner (logic in function)
    chooseWinner(player, computer);
    return 0;
}

char getUserChoice() {
    char user;
    cout << "Rock Paper Scissors Game!";

    //Run the do while loop until the user enters any of the given input 
    do{
        cout << "Enter your choice:" << endl;
        cout << "'r' for rock" << endl;
        cout << "'p' for paper" << endl;
        cout << "'s' for scissors" << endl;
        cin >> user;

    }while(user != 'r' && user != 's' && user != 'p');

    return user;
}

char getComputerChoice(){
    //Random number generator
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    //Declaring numbers as choices
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    default:
        break;
    }
}

void showChoice(char choice){
    switch(choice)
    {
    //Declaring char as choice
    case 'r':
        cout << "Rock" << endl;
        break;
    case 'p':
        cout << "Paper" << endl;
        break;
    case 's':
        cout << "Scissors" << endl;
        break;
    }
}

void chooseWinner(char player, char computer){
    switch ((player)){
    //Logic of the game
    case 'r':
        if(computer == 'r'){
            cout << "It's a tie!" << endl;
        } else if(computer == 'p') {
            cout << "You Lose!" << endl;
        } else {
            cout << "You win!" << endl;
        }
        break;
    case 'p':
        if(computer == 'p'){
            cout << "It's a tie!" << endl;
        } else if(computer == 's') {
            cout << "You Lose!" << endl;
        } else {
            cout << "You win!" << endl;
        }
        break;
        case 's':
        if(computer == 's'){
            cout << "It's a tie!" << endl;
        } else if(computer == 'r') {
            cout << "You Lose!" << endl;
        } else {
            cout << "You win!" << endl;
        }
        break;
    }
}
