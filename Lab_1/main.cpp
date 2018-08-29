/**********************************************************
 * AUTHOR       : Justin Kuhn, Matthew Endo
 * LAB   #1     : CS 002 Review
 * CLASS        : CS3A
 * SECTION      : MW: 1:00p - 2:25p, TR: 1:00p - 3:05p
 * Due Date     : 8/29/18
*********************************************************/

#include <iostream>
#include <iomanip>
#include "cs_02_rev.h"

using namespace std;


/************************************************************
* CALCULATE PAY DUE AND DEMONSTRATE OTHER BASIC FUNCTIONS
*_________________________________________________________
* This program demonstrates multiple basic functions. First,
* the user enters two doubles; the hours worked and the pay rate.
* Salary due is calculated, along with overtime. Next, the user enters
* a number that is used to compute a new valuse for the a previously
* variable. Finally, we convert a lowercase ( or uppercase ) letter
* to the next letter in alphabet.
*_________________________________________________________
* INPUT:
*   x: First integer for computation -> initilized to 0
*   y: Second integer for computation -> initialized to 0
*   z: Character to be manipulated -> initalized to 'a'
*   rate: Pay rate -> inputted by user
*   hours: Hours worked -> inputted by user
* OUTPUT:
*   salary: The total pay earned
***********************************************************/




int main()
{
    /**********DECLARAIONS**********/
    int x;                  // INPUT & OUTPUT -- Integer for computations
    int y;                  // INPUT -- Integers for computatios
    char z;                 // INPUT & OUTPUT -- Character for letter shift
    double rate;            // INPUT -- Rate of pay
    double hours;           // INPUT -- Hours worked
    double salary;          // CALC & OUTPUT -- Wages earned


    cout << endl << endl;
    PrintHeader("CS 002 Review", 'L', 1 );  // Print class header
    cout << endl << endl;

    /**********INPUT**********/
    cout << endl << "Getting the hours worked and the rate...\n";
    getHoursRate( hours, rate );


    /**********PROCESSING & OUTPUT**********/
    cout << endl << "Initializing x and y to 0 and z to null character...";
    initialize(x, y, z);

    cout << endl << "Calculating salary due...";
    salary = payCheck(hours, rate);

    cout << endl << "Printing salary due...";
    printCheck(hours, rate, salary);

    cout << endl << "funcOne test";
    funcOne(x, y);
    cout << " x = "
         << x;

    z = 'a';
    cout << endl <<"nextChar test with z == " << z;
    nextChar(z);
    cout << endl << endl << " z == " << z \
         << endl << endl;
    return 0;
}


