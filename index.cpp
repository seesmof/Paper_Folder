// include necessary libraries
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// declare global variables
string unit;
double height, times, i;

// create measurement unit conversion function
void CONVERT()
{
    // for mm unit conversion
    if (unit == "mm")
    {
        if (height >= 10)
        {
            unit = "cm";
            height /= 10;
        }
        else if (height > 0 && height < 10)
        {
            unit = "mm";
        }
    }
    // for cm unit conversion
    if (unit == "cm")
    {
        if (height >= 100)
        {
            unit = "m";
            height /= 10;
        }
        else if (height > 0 && height < 100)
        {
            unit = "cm";
        }
    }
    // for m unit conversion
    if (unit == "m")
    {
        if (height >= 1000)
        {
            unit = "cm";
            height /= 10;
        }
        else if (height > 0 && height < 1000)
        {
            unit = "m";
        }
    }
}

// start main function
int main(int argc, char **argv)
{
    // output program intro
    cout << endl;
    cout << "************************************** Paper Folder *****************************************" << endl
         << endl;

    // ask user to input paper thickness, unit of measurement and times folded
    cout << "What thickness is your paper?: ";
    cin >> height;
    cout << "Please enter unit of measurement: ";
    cin >> unit;
    cout << "How many times do you want to fold it?: ";
    cin >> times;
    cout << endl;

    // create a simple times converter
    string time;
    if (times == 1)
    {
        time = "time";
    }
    else
    {
        time = "times";
    }

    // create a for loop for calculating the paper thickness
    for (i = 1; i <= times; i++)
    {
        height = height * 2;
        CONVERT();
        cout << "If folded " << i << " " << time << " the thickness of the paper is " << height << " " << unit << endl;
        // each time convert unit and output the result of iteration
    }

    // output the results
    cout << endl;
    cout << "Your sheet of paper folded " << i << " " << time << " will be " << height << " " << unit << endl;

    // output program outro
    cout << endl;
    cout << "*********************************************************************************************" << endl;

    // end main function
    system("pause");
}