#ifndef CS_02_REV_H
#define CS_02_REV_H

#include <iostream>
using namespace std;

/********************PROTOTYPES********************/

/****************************************************************
* Initialize
*    This function initializes x and y to 0, and z to '\0'.
*   -returns  nothing -> This initializes our variables.
***************************************************************/
void initialize ( int& x, int& y, char& z );


/****************************************************************
* getHoursRate
*    This function prompts the user to enter a valuse for hours
*    worked and rate payed.
*   -returns  nothing -> This simply sets our variables.
***************************************************************/
void getHoursRate(double& hours, double& rate);


/****************************************************************
* payCheck
*    This function calculates total wages given ours worked
*    and rate payed.
*   -returns  int amount.
***************************************************************/
int payCheck ( double hours, double rate );


/****************************************************************
* printCheck
*    Prints the hours work, rate, and total wages.
*   -returns  nothing -> This initializes our variables.
***************************************************************/
void printCheck( double hours, double rate, double amount );


/****************************************************************
* funcOne
*    Multiplies x by two, adds the value of y, and subtracts a user-given
*    value.
*   -returns  nothing -> This function simply changes to value of x.
***************************************************************/
void funcOne( int& x, int y );


/****************************************************************
* nextChar
*    Find the next letter in the alphabet, provided any uppercase
*    or lowercase letter.
*   -returns  nothing -> Simply "increments" the character passed
***************************************************************/
void nextChar( char& i );

/*****************************************************************
* PrintHeader
*   This function receives receivesan assignment name, type
*   and number then outputs the appropriate header
*   -returns  nothing -> This will output the class heading.
***************************************************************/
void PrintHeader(string asName, // IN - assignment-name
                char asType,    // IN - assignment type
                int asNum);     // IN - assignment number


#endif // CS_02_REV_H
