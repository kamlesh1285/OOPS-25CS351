//Q1:- WAP to imolement the concept of Inline function using two functions to convert the temprature from celcius to Feranhite and vice - versa.


#include <iostream>
using namespace std;

// Inline function to convert Celsius to Fahrenheit
inline float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Inline function to convert Fahrenheit to Celsius
inline float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    float temp, result;

    cout << "Temperature Conversion Menu\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            result = celsiusToFahrenheit(temp);
            cout << temp << " Celsius = " << result << " Fahrenheit" << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            result = fahrenheitToCelsius(temp);
            cout << temp << " Fahrenheit = " << result << " Celsius" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

// Algorithm 

//START

//Step 1: Define inline function celsiusToFahrenheit(c)
        //Return (c * 9/5) + 32

//Step 2: Define inline function fahrenheitToCelsius(f)
        //Return (f - 32) * 5/9

//Step 3: Display menu:
       // 1. Celsius to Fahrenheit
        //2. Fahrenheit to Celsius

//Step 4: Read user's choice

//Step 5: If choice = 1:
           // 5.1: Read temperature value in Celsius (temp)
            //5.2: Call celsiusToFahrenheit(temp) and store in result
            //5.3: Display result as Fahrenheit

        //Else if choice = 2:
            // 5.4: Read temperature value in Fahrenheit (temp)
            //5.5: Call fahrenheitToCelsius(temp) and store in result
            //5.6: Display result as Celsius

        //Else:
            //5.7: Display "Invalid choice"

//Step 6: STOP//