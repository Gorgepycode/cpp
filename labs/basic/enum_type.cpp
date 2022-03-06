#include <iostream>

using namespace std;

int main()

{
    // define MONTHS as have 12 possible values.
    enum MONTHS {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug,
    Sep, Oct, Nov, Dec
    };

    // define bestMonth as a variable type MONTHS
    MONTHS bestMonth;

    // assign bestMonth one of the values of MONTHS
    bestMonth = Jan;

    //now we can check the valuemof bestMonths just
    //like any other variable 
    if(bestMonth == Jan)
    {
        cout << "I'm not so sure January is best moth\n";
    }
    return 0; 
}
