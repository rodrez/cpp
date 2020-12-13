//
// Created by Fabian Rodriguez on 12/13/2020.
//

#ifndef BANK_INVESTCALCULATOR_H
#define BANK_INVESTCALCULATOR_H
#include <vector>

using namespace std;

class InvestCalculator {
public:
    InvestCalculator();

    void displayForm();
    void calculateInvestment();

private:
//    Declare variables to store input
//Declare variables to store input
    float initInvestment, monthlyDeposit, annualInterest, months, years;
    //Declare variables to store year end total amount, interest, and year end interest
    float totalAmount, initAmount, yearTotInterest;
};


#endif //BANK_INVESTCALCULATOR_H
