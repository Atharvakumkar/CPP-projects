#include<iostream>
using namespace std;

void people(string name, int age, char gender){
    if(age < 18 && (gender == 'F' || gender == 'f')){
        cout << "Welcome " << name << " you are allocated to toy dolls section!";
    } else if (age >= 18 && (gender == 'F' || gender == 'f')){
        cout << "Welcome " << name << " you are allocated to makeup section";
    } else if (age < 18 && (gender == 'M' || gender == 'm')){
        cout << "Welcome " << name << " you are allocated to toy cars section";
    } else if (age >= 18 && (gender == 'M' || gender == 'm')){
        cout << "Welcome " << name << " you are allocated to gym section";
    } else {
        cout << "Please enter valid details!";
    }
}

int main() {
    string user_name;
    int user_age;
    char user_gender;

    cout << "Hello welcome to your store!" << endl;
    cout << "Please enter the following details and we will guide you further!" << endl;
    cout << "Name: ";
    cin >> user_name;
    cout << "Age: " ;
    cin >> user_age;

    cout << "Gender(M/F): ";
    cin >> user_gender;

    people(user_name, user_age, user_gender);
    return 0;
}
