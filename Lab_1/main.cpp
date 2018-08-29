/**********************************************************
 * AUTHOR       : Justin Kuhn, Matthew Endo
 * LAB   #1     : CS 002 Review
 * CLASS        : CS3A
 * SECTION      : MW: 1:00p - 2:25p, TR: 1:00p - 3:05p
 * Due Date     : 8/29/18
*********************************************************/

#include <iostream>
#include <iomanip>

using namespace std;


/************************************************************
* CALCULATE PAY DUE AND DEMONSTRATE OTHER BASIC FUNCTIONS
*_________________________________________________________
* This program demonstrates multiple basic functions. First,
* the user enters two doubles; the hours worked and the pay rate.
* Pay due is calculated, along with overtime. Next, the user enters
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
*   amount:     The total pay earned
***********************************************************/


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


int main()
{
    /**********DECLARAIONS**********/
    int x, y;
    char z;
    double rate, hours;
    double amount;


    cout << endl << endl;

    PrintHeader("CS 002 Review", 'L', 1 );

    cout << endl << endl;

    /**********PROCESSING & OUTPUT**********/
    cout << "Initializing x and y to 0 and z to null character...";
    initialize(x,y,z);

    cout << endl << "Getting the hours worked and the rate...";
    getHoursRate( hours, rate );

    cout << endl << "Calculating amount pay due...";
    amount = payCheck(hours,rate);

    cout << endl << "Printing amount pay due...";
    printCheck(hours, rate, amount);

    cout << endl << "funcOne test";
    funcOne(x,y);
    cout << " x = "
         << x;

    z = 'a';
    cout << endl <<"nextChar test with z == " << z;
    nextChar(z);
    cout << endl << " z == " << z << endl;
    return 0;

}


void initialize ( int& x, int& y, char& z )
{
    x = 0;
    y = 0;
    z = '\0';
}

void getHoursRate(double& hours, double& rate)
{
    /**********INPUT**********/
    cout << endl << "Please enter the hours worked: ";
    cin >> hours;
    cout << endl << "Please enter the rate: ";
    cin >> rate;
}

int payCheck ( double hours, double rate )
{

    const double OVERTIME_RATE = 40 * 1.5;

    double amount;

    if ( amount <= 40 ){
        amount = hours*rate;
    }

    else {
        hours -= 40;
        amount = 40 * rate;
        amount += hours * OVERTIME_RATE;

    }
    return amount;
}

void printCheck( double hours, double rate, double amount )
{
    cout << endl << endl ;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Hours Worked:  " << setw(10) << hours <<  endl;
    cout << "Rate        :  " << setw(10) << rate <<  endl;
    cout << "Amount      :  " << setw(10) << amount << endl;

}

void funcOne( int& x, int y )
{
    int num;

    num = 0;

    x *= 2;
    x += y;

    cout << endl << "Please enter a number: ";
    cin >>  num;

    x -= num;
}

void nextChar( char& i )
{
    if ( (i < 90 && i >= 65) || ( i < 122 && i >= 97 ) ){
        i++;
    }
    else if ( i == 122 || i == 90 ){
        i -= 25;
    }
}

void PrintHeader( string asName, char asType, int asNum ){

    string type;

    type = "Lab";
    if ( asType != 'L') type = "Assignment";

    cout<<"*****************************************\n"
        <<"   Programmed by: Justin Kuhn, Matthew Endo\n"
        <<"   Student ID   : 10231221, 10260087\n"
        <<"   CS3A         : MW: 1:00p - 2:25p, TR: 1:00p - 3:05p\n"
        <<"   "<<type<<" #"<<asNum<<"       : " << asName << "\n"
        <<"*****************************************\n";

}


