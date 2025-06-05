#include <iostream>
#include <iomanip>
using namespace std;

//Declaration of functions
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    //Declaration of variables
    double balance = 120; //Initial amount (assumption)
    int choice = 0;
    
    //do while loop logic
    do
    {   
        cout << "__________________________" << endl;
        cout << "Hello welcome to our bank!" << endl;
        cout << "Please select your choice -->" << endl;
        cout << "1.Show Balance " << endl;
        cout << "2.Deposit Money " << endl;
        cout << "3.Withdraw Money" << endl;
        cout << "4.Exit " << endl;
        cin >> choice;
        cout << "__________________________" << endl;
        
        //To clear the terminal if random characters or something else is entered by the user
        cin.clear();
        fflush(stdin);

        //Switch cases for different choices
        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thank you for banking with us!" << endl;
                break;
            default:
                cout << "Please select valid option." << endl;
                break;
        }
    } while (choice != 4);
    

    return 0;
}

//Show balance
void showBalance(double balance){
    cout << "Your balance is " << setprecision(2) << fixed << balance << endl; //setprecision used to display the decimals points
}

//Deposit funds
double deposit(){
    double amount;
    cout << "Enter amount to be deposited: ";
    cin >> amount;

    //logic to enter the funds to be deposited
    if(amount > 0) {
        return amount;
    } else {
        cout << "Please enter valid funds!" << endl;
        return 0;
    }
    
}

//Withdraw funds
double withdraw(double balance){
    double amount = 0;
    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    //logic to enter the funds to be withdrawn
    if (amount > balance) {
        cout << "Insufficient funds." << endl;
    } else if (amount < 0) {
        cout << "Please enter valid funds!" << endl;
    } else {
        return amount;
    }
}
