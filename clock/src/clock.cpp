#include <iostream>
#include <iomanip>
#include <thread>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>
using namespace std;



// Clear Screen 
void ClearScreen(){
    for (int i = 0; i < 10; i++){
        cout << "\n\n\n\n\n\n\n\n";
    }
}

void TimeFiller(int value){
    cout << setw(2)  << setfill('0') << value;
}

// Display time in two formats
void DisplayTime(int hrs, int min, int secs, string period){

    cout << "*****************************" << endl;
    cout << "*       12-Hour Clock       *" << endl;
    cout << "*       " ;
    TimeFiller(hrs);
    cout << ':';
    TimeFiller(min);
    cout << ':' ;
    TimeFiller(secs);
    cout <<  period << "        *" << endl;
    cout << "*****************************" << endl;

}
void UpdateTime(bool running){
    int hrs = 11;
    int min = 59;
    int secs = 55;
    string period = " P M";
    

    running = true;

    while (running){

        DisplayTime(hrs, min, secs, period);
        Sleep(1);
        if (secs == 59){
            secs = 0;
            if (min == 59){
                min = 0;
                
                if (hrs == 11){
                    hrs++;
                    if (period == " A M"){
                        period = " P M";
                    }
                    else {
                        period = " A M";
                    }
                }
                else if (hrs == 12){
                    hrs = 1;
                }
                }
            else{
                min++;
            }
        }
        else{
            secs++;
        }
        
}

}

// Display Menu
int DisplayMenu(){
    cout << "***********************" << endl;
    cout << "* 1 - Add One Hour    *" << endl;
    cout << "* 2 - Add One Minute  *" << endl;
    cout << "* 3 - Add One Second  *" << endl;
    cout << "* 4 - Exit Program    *" << endl;
    cout << "***********************" << endl;

    int userSelection;
    cin >> userSelection;
    while (userSelection < 1 || userSelection > 4){
        cin >> userSelection;
        cout << "Not a valid entry. Select 1 - 4" << endl;
    }
    return userSelection;
}


// if Button Pressed?
int main (){
    bool running = true;
    thread t1 = thread(UpdateTime, running);
    // thread t1(UpdateTime, );
    

    ClearScreen();
    // cin.get();
    
    int userInput = DisplayMenu();
    if (userInput == 4){
        running = false;
    }
    // Display menu
    // Read user input
    // If user input == exit
        // End program
    // Else
        // Add Hours || Minute || Seconds
        
// else
    // add second
    // Wait second 
    // loop back to  beggining
    return 0;
}

