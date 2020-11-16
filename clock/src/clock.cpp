#include <iostream>
#include<iomanip>
using namespace std;


void TimeFiller(int val){
    
    cout << setw(2) <<  setfill('0') << val << ':';    
}
// Display Clock
void DisplayClock(int hrs=1, int mins=0, int secs=0){

    cout << "*********************" << endl;
    cout << "*   12-Hour Clock   *" << endl;
    cout << "*   ";
    TimeFiller(hrs);
    TimeFiller(mins);
    TimeFiller(secs);
    cout << " P M   *" << endl;
    cout << "*********************" << endl;
w
}

// Update Clock
int UpdateMenu(){
    
    int userSelection = 0;
    
    cout << "*************************" << endl;
    cout << "* 1 - Add One Hour      *" << endl;
    cout << "* 2 - Add One Minute    *" << endl;
    cout << "* 3 - Add One Second    *" << endl;
    cout << "* 4 - Exit Program      *" << endl;
    cout << "*************************" << endl;
    
    cin >> userSelection;
    while (userSelection < 1 || userSelection > 4){
        cout << "Not a valid entry. Please eneter a number from 1-4" << endl;
        cin >> userSelection;
    }
    return userSelection;
    
}

//Main
int main(){
    // DisplayClock(10, 10, 10);
    UpdateMenu();
}