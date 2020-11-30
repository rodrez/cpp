// Author: Fabian Rodriguez 
// Class: Cs210 Programming Languages
// Project: Clock.cpp

#include <iostream>
#include <iomanip>
#include <thread>
#include <Windows.h>
#include <conio.h>


using namespace std;

// Global Variable 
static int _12hrs = 11;
static int _24hrs = 23;
static int minutes = 59;
static int seconds = 55;
static string period = " A M";
static bool is_Finished = false;

// Clear Screen 
void ClearScreen() {

    //Simple for loop that prints new line(functions as the most basic clear screen)
    for (int i = 0; i < 5; i++) {
        cout << "\n\n\n\n\n\n\n\n";
    }
}


// Keeps the hours, minutes and seconds to 2 digits
void TimeFiller(int value) {
    cout << setw(2) << setfill('0') << value;
}


// Display time in two formats
void DisplayTime() {

    // Use the previous timefiller in combination with simple printing

    cout << "*********************"; cout << "    " << "*********************" << endl;
    cout << "*   12-Hour Clock   *"; cout << "    " << "*   24-Hour Clock   *" << endl;
    cout << "*   "; TimeFiller(_12hrs); cout << ':'; TimeFiller(minutes); cout << ':'; TimeFiller(seconds); cout << period << "    *";
    cout << "    ";
    cout << "*     "; TimeFiller(_24hrs); cout << ':'; TimeFiller(minutes); cout << ':'; TimeFiller(seconds); cout <<"      *" << endl;
    cout << "*********************"; cout << "    " << "*********************" << endl;

}


// Updates the time in a 1 second interval.
// Changes the period from AM to PM when the 24 hours clock is past 11
// (Did not include less that 24 because the 24hrs clock should reset to 0)

void UpdateTime() {


    // The while loop will keep the clock running until is_Finished becomes true
    while (!is_Finished) {


        // Multiple nested if/else statements helps to increment the time in 1 second interval
        if (seconds == 59)
        {
            seconds = 1;

            if (minutes == 59)
            {
                minutes = 1;

                if (_12hrs == 12)
                {
                    _12hrs = 1;
                }
                else
                {
                    _12hrs +=1;
                }

                if (_24hrs == 23)
                {
                    _24hrs = 0;
                }
                else
                {
                    _24hrs += 1;
                }
            }
            else
            {
                minutes += 1;
            }
        }
        else
        {
            seconds += 1;
        }

        if (_24hrs > 11)
        {
            period = " P M";
        }
        else
        {
            period = " A M";
        }

        DisplayTime();
        Sleep(1000);
        ClearScreen();

    }

}

// Display Menu
void DisplayMenu() {

    int userSelection = 0;

    while (true) {

        cout << "***********************" << endl;
        cout << "* 1 - Add One Hour    *" << endl;
        cout << "* 2 - Add One Minute  *" << endl;
        cout << "* 3 - Add One Second  *" << endl;
        cout << "* 4 - Exit Program    *" << endl;
        cout << "***********************" << endl;

        cin >> userSelection;

        if (userSelection < 1 || userSelection > 4)
        {
            cout << "Not a valid entry. Select 1 - 4" << endl;
        }
        else if (userSelection == 1)
        {
            cout << userSelection << " was selected." << endl;
            _12hrs++;
            _24hrs++;
            break;
        }
        else if (userSelection == 2)
        {
            cout << userSelection << " was selected." << endl;
            minutes++;
            break;
        }
        else if (userSelection == 3)
        {
            cout << userSelection << " was selected." << endl;
            seconds++;
            break;
        }
        else if (userSelection == 4)
        {
            cout << userSelection << " was selected." << endl;
            break;
            is_Finished = true;
        }

    }
}

// if Button Pressed?
int main() {

//    bool running = false;

    UpdateTime();
    thread checker(DisplayMenu);

    checker.join();


    return 0;
}
