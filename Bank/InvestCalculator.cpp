// Author: Fabian Rodriguez
// Date: 12/13/2020.


#include "InvestCalculator.h"
#include <iostream>
#include <iomanip>

using namespace std;

InvestCalculator::InvestCalculator() = default;

void InvestCalculator::displayForm() {
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: \n";
    cout << "Monthly Deposit: \n";
    cout << "Annual Interest: \n";
    cout << "Number of years: \n";

    //Pause the program and wait for user input
    system("PAUSE");
}

void InvestCalculator::calculateInvestment() {

    //Gets the initial data
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: $";
    cin >> initInvestment;
    cout << "Monthly Deposit: $";
    cin >> monthlyDeposit;
    cout << "Annual Interest: %";
    cin >> annualInterest;
    cout << "Number of years: ";
    cin >> years;
    months = years * 12;

    //Pause the program and wait for user input
    system("PAUSE");

    totalAmount = initInvestment;

    //Display year data without monthly deposits
    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";


    for (int i = 0; i < years; i++) {

        //Calculate yearly interest
        initAmount = (totalAmount) * ((annualInterest / 100));

        //Calculate year end total
        totalAmount = totalAmount + initAmount;

        //Print results to table showcasing only two decimal points
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << initAmount << "\n";

    }

    //Set total amount to initial investment to be updated
    totalAmount = initInvestment;

    //Display year data with monthly deposits
    cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < years; i++) {

        //Set yearly interest to zero at the start of the year
        yearTotInterest = 0;

        for (int j = 0; j < 12; j++) {

            //Calculate monthly interest
            initAmount = (totalAmount + monthlyDeposit) * ((annualInterest / 100) / 12);

            //Calculate month end interest
            yearTotInterest = yearTotInterest + initAmount;

            //Calculate month end total
            totalAmount = totalAmount + monthlyDeposit + initAmount;

        }

        //Print results to table showcasing only two decimal points
        cout << (i + 1) << "\t\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << yearTotInterest << "\n";


    }

//    return vector<double>();
}
