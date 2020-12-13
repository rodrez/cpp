// Author: Fabian Rodriguez
// Date: 12/13/2020.

#include "InvestCalculator.h"

using namespace std;

int main()
{
//  Initializes the Investment Calculator class
    InvestCalculator newInvest = InvestCalculator();

//  Display the initial form
    newInvest.displayForm();
//  Calculates the interest
    newInvest.calculateInvestment();
    return 0;
}
