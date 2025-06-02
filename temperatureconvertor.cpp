#include <iostream>
using namespace std;

int main() { 
    //Initialising variables
    double temp;
    double result_temp;
    char unit;
    
    //Header
    cout << "Temperature connversion program!" << "\n";

    //Taking input for unit
    cout << "What would you like to convert to?" << "\n";
    cout << "Select F for FAHRENHEIT or C for CELSIUS:";
    cin >> unit;
    
    //Logic
    if(unit == 'F' || unit == 'f'){

        //Input of temperature in degree Celsius
        cout << "Enter temperature in CELSIUS: ";
        cin >> temp;
        
        //Conversion formula C --> F
        result_temp = (temp * 1.8) + 32.0;

        //Output
        cout << "The temperature " << temp << " CELSIUS in FAHRENHEIT is " << result_temp;
    }
    else if(unit == 'C' || unit == 'c'){

        //Input of temperature in degree Fahrenheit
        cout << "Enter temperature in FAHRENHEIT: ";
        cin >> temp;

        //Conversion formula F --> C
        result_temp = (temp - 32) / 1.8;

        //Output
        cout << "The temperature " << temp << " FAHRENHEIT in CELSIUS is " << result_temp;
    }
    else {

        //Error handling
        cout << "Enter valid temperature unit!";
    }

    return 0;
}
