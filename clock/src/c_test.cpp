#include <iostream>
#include <thread>
#include <conio.h>

using namespace std;


void Looper(){
   int c_time; 
   while(c_time < 20){
      cout << "[Current Time]: " << c_time << endl;
      c_time++;
   }
}


void UserInput(){

   int lol;
   while (! _kbhit()){
    cout << "Press any key." << endl;
   }
   cout << "A key has been pressed" ;

   cin >> lol;
}

int main(){
   UserInput();
}