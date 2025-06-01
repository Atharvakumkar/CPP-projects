#include <iostream>
using namespace std;

namespace first{
    int a = 1;
}

namespace second {
    int a = 2;
}

int main() {
    string name = "Atharva";
    int age = 18;
    char grade = 'O';

    int a = 3;
    cout << second::a << endl;




    return 0;
}
