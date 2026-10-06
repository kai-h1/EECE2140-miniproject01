#include <iostream>
using namespace std;

int main()
{
    double temp;
    char unit;

    cout << "Enter a temperature to convert in celsius or fahrenheit: ";
    cin >> temp >> unit;

    if (!(unit == 'C' || unit == 'c' || unit == 'F' || unit == 'f'))
    {
        cout << "Invalid unit. Please enter 'C' for Celsius or 'F' for Fahrenheit." << endl;
        return 1;
    }

    if (unit == 'C' || unit == 'c')
    {
        if (temp < -273.15)
          {
            cout << "Temperature cannot be below absolute zero (-273.15 C)." << endl;
            return 1;
          }

        double fahrenheit = (temp * 9 / 5) + 32;
        cout << temp << " C = " << fahrenheit << " F." << endl;
    }

    else if (unit == 'F' || unit == 'f')
    {
        if (temp < -459.67)
        {
            cout << "Temperature cannot be below absolute zero (-459.67 F)." << endl;
            return 1;
        }

        double celsius = (temp - 32) * 5 / 9;
        cout << temp << " F = " << celsius << " C." << endl;
    }



    return 0;
}