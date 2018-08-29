#include "cs_02_rev.h"
#include <iostream>
#include <iomanip>

/***********************************************************
* FUNCTION initialize
*_________________________________________________________
* This function initializes x and y to 0, and z to '\0'.
*   -returns  nothing -> This initializes our variables.
*_________________________________________________________
* PRE-CONDITIONS
*   The following need to have been declared:
*       x: int for calculations
*       y: int for calculations
*       z: char for shifting
* POST-CONDITIONS
*     x: set to 0
*     y: set to 0
*     z: set to '/0'
***********************************************************/

void initialize ( int& x, int& y, char& z )
{
    x = 0;
    y = 0;
    z = '\0';
}



/***********************************************************
* FUNCTION getHoursRate
*_________________________________________________________
* This function prompts the user to enter a values for hours
*    worked and rate payed.
*   -returns  nothing -> This simply sets our variables.
*_________________________________________________________
* PRE-CONDITIONS
*   The following need to have been declared:
*       hours: hours worked
*       rate: normal pay rate
* POST-CONDITIONS
*     hours: entered by user
*     rate: entered by user
***********************************************************/

void getHoursRate(double& hours, double& rate)
{
    /**********INPUT**********/
    cout << endl << "Please enter the hours worked: ";
    cin >> hours;
    cout << endl << "Please enter the rate: ";
    cin >> rate;
}




/***********************************************************
* FUNCTION payCheck
*_________________________________________________________
* This function calculates total wages given ours worked
*    and rate payed.
*   -returns  int amount.
*_________________________________________________________
* PRE-CONDITIONS
*   The following need to be previously defined values:
*       hours: hours worked
*       rate: normal pay rate
* POST-CONDITIONS
*     amount: total wages earned
***********************************************************/

int payCheck ( double hours, double rate )
{

    const double OVERTIME_RATE = 40 * 1.5;  // INPUT -- Overtime for calc

    double amount;                          // OUTPUT -- Total wages earned

    if ( hours <= 40 ){                    // For all non-overtime hours
        amount = hours*rate;                // Calculate wage
    }

    else {                                  // If overtime
        hours -= 40;                        // Calc overtime hours
        amount = 40 * rate;                 // Calc reg hours
        amount += hours * OVERTIME_RATE;    // Calc total

    }
    return amount;
}




/***********************************************************
* FUNCTION printCheck
*_________________________________________________________
*  Prints the hours work, rate, and total wages.
*   -returns  nothing -> This initializes our variables.
*_________________________________________________________
* PRE-CONDITIONS
*   The following need to be previously defined values:
*       hours: hours worked
*       rate: normal pay rate
*       amount: total wages earned
* POST-CONDITIONS
*    This functions outputs the hours, rate, and amount.
***********************************************************/

void printCheck( double hours, double rate, double amount )
{
    cout << endl << endl ;

    cout.setf(ios::fixed);          // Format to show decimal
    cout.setf(ios::showpoint);
    cout.precision(2);              // Set decimal precision

    /*Show hours worked, normal rate, and total amount*/
    cout << "Hours Worked:  " << setw(10) << hours <<  endl;
    cout << "Rate        :  " << setw(10) << rate <<  endl;
    cout << "Amount      :  " << setw(10) << amount << endl;

}




/***********************************************************
* FUNCTION funcOne
*_________________________________________________________
* Multiplies x by two, adds the value of y, and subtracts a user-given
*    value.
*   -returns  nothing -> This function simply changes to value of x.
*_________________________________________________________
* PRE-CONDITIONS
*   The following need to be previously defined values:
*       x: int for calculations
*       y: int for calculations
* POST-CONDITIONS
*    x: the result of calculations on x
***********************************************************/

void funcOne( int& x, int y )
{
    int num;                                   // Input -- Subtract from x

    num = 0;

    x *= 2;                                    // Multiply x by 2
    x += y;                                    // Add y to x

    cout << endl << "Please enter a number: "; // Prompt for input
    cin >>  num;                               // Take input

    x -= num;                                  // Subtract num from x
}




/***********************************************************
* FUNCTION nextChar
*_________________________________________________________
* Find the next letter in the alphabet, provided any uppercase
*    or lowercase letter.
*   -returns  nothing -> Simply "increments" the character passed
*_________________________________________________________
* PRE-CONDITIONS
*   The following need to be previously defined values:
*       i: "letter" to be shifted
* POST-CONDITIONS
*    i: the result of shifting i
***********************************************************/

void nextChar( char& i )
{
    if ( (i < 90 && i >= 65)
         || ( i < 122 && i >= 97 ) ){ // Uppercase or lowercase (ASCII)
        i++;                          // Move to next letter
    }
    else if ( i == 122 || i == 90 ){  // For any case of 'z'
        i -= 25;                      // Loop back to 'a'
    }
}




/***********************************************************
* FUNCTION printHeader
*_________________________________________________________
* This function receives receivesan assignment name, type
*   and number then outputs the appropriate header
*   -returns  nothing -> This will output the class heading.
*_________________________________________________________
* PRE-CONDITIONS
*   The following need to be previously defined values:
*       asName: Name of assignment
*       asType: Type of assignment
*       asNum: Assignment number
* POST-CONDITIONS
*   This function outputs the class header.
***********************************************************/

void PrintHeader( string asName, char asType, int asNum ){

    string type;                            // OUTPUT -- Type of assignment

    type = "Lab";
    if ( asType != 'L') type = "Assignment";

    cout<<"********************************************************\n"
        <<"   Programmed by: Justin Kuhn, Matthew Endo\n"
        <<"   Student ID   : 10231221, 10260087\n"
        <<"   CS3A         : MW: 1:00p - 2:25p, TR: 1:00p - 3:05p\n"
        <<"   "<<type<<" #"<<asNum<<"       : " << asName << "\n"
        <<"********************************************************\n";

}


