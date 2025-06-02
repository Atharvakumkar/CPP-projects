#include<iostream>
#include<cmath>

using namespace std;

int main() {
    //declaration of variables
    double a;
    double b;
    double c;

    //Taking inputs
    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    //Logic
    a = pow(a, 2);
    b = pow(b, 2);
    
    c = sqrt(a+b);

    //Final answer
    cout << "Side C = " << c;

    return 0;
}
