#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    //Function to ensure numbers are generated randomly evertime
    srand(time(NULL));

    //Header text
    cout << "These are two random dice numbers!\n";

    //Generation of random numbers
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;

    //Printing the randomly generated numbers
    cout << num2 << endl;
    cout << num1;

    return 0;
}
