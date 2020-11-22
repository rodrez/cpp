#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

/* Define your function here */ 
double DrivingCost(double drivenMiles = 0, 
                   double milesPerGallon = 0, 
                   double dollarsPerGallon = 0){
   cout << fixed << setprecision(2);
   double costToDrive;

   costToDrive = drivenMiles / milesPerGallon * dollarsPerGallon; 

   return costToDrive;
}

int main() {
   /* Type your code here */
   double mpg;
   double dpg;

   cin >> mpg;
   cin >> dpg;


   cout << DrivingCost(10, mpg, dpg);
   cout << DrivingCost(40, mpg, dpg);
   cout << DrivingCost(400, mpg, dpg);

   return 0;
}
