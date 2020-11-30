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
static bool is_Stopped = false;
bool running = false;
bool onTime = false;
bool menuStopped = false;

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
    while (!onTime) {


        // Multiple nested if/else statements helps to increment the time in 1 second interval

        if (!is_Stopped){

        if (seconds == 59)
        {
            seconds = 0;

            if (minutes == 59)
            {
                minutes = 0;

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
        else
        {
            continue;
        }

    }

}

// Display Menu
void DisplayMenu() {

    int userSelection = 0;


    // Used _kbhit to detect user input
    // If user input is detected then the menu is shown otherwise, the loops does'nt do anything
    while (true) {
        if (_kbhit()){
            is_Stopped = true;
            Sleep(1000);


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
                // Used ternary operator due to the simplicity of the condition
                _12hrs = (_12hrs == 12) ? 1 : ++_12hrs;
                _24hrs++;
                is_Stopped = false;
                menuStopped = true;
            }
            else if (userSelection == 2)
            {
                minutes++;
                is_Stopped = false;
                menuStopped = true;
            }
            else if (userSelection == 3)
            {
                seconds++;
                is_Stopped = false;
                menuStopped = true;
            }
            else if (userSelection == 4)
            {
                cout << "Exiting..." << endl;
                is_Stopped = true;
                running = true;
                onTime = true;
                break;

            }
        }
        else
        {
            continue;
        }

    }
}


int main() {

    while(!running){

        thread checker(DisplayMenu);
        thread worker(UpdateTime);

        worker.join();
        checker.join();
    }

    return 0;
}
