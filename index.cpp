#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string unit;
double height, times, i;

void CONVERT()
{
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

int main(int argc, char **argv)
{
    cout << "What thickness is your paper?: ";
    cin >> height;
    cout << "Please enter unit of measurement: ";
    cin >> unit;
    cout << "How many times do you want to fold it?: ";
    cin >> times;
    cout << endl;

    string time;
    if (times == 1)
    {
        time = "time";
    }
    else
    {
        time = "times";
    }

    for (i = 1; i <= times; i++)
    {
        height = height * 2;
        CONVERT();
        cout << "If folded " << i << " " << time << " the thickness of the paper is " << height << " " << unit << endl;
    }

    cout << endl;
    cout << "Your sheet of paper folded " << i << " " << time << " will be " << height << " " << unit << endl;
}