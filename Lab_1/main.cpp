#include <iostream>
#include <iomanip>

using namespace std;

void initialize ( int& x, int& y, char& z );
void getHoursRate(double& hours, double& rate);
int payCheck ( double hours, double rate );
void printCheck( double hours, double rate, double amount );
void funcOne( int& x, int y );
void nextChar( char& i );



int main()
{
    int x, y;
    char z;
    double rate, hours;
    double amount;



    cout << endl << endl;
    cout << "Initialized x and y to 0 and z to null character";
    initialize(x,y,z);
    cout << endl << "Gets the hours worked and the rate";
    getHoursRate( hours, rate );
    cout << endl << "Calculating amount pay due...";
    amount = payCheck(hours,rate);
    cout << endl << "Printing amount pay due...";
    printCheck(hours, rate, amount);
    cout << endl << "funcOne test";
    funcOne(x,y);
    printf("x = %i", x);
    cout << endl <<"nextChar test";
    nextChar(z);
    return 0;




}


void initialize ( int& x, int& y, char& z ){
    x = 0;
    x = 0;
    z = '\0';
}

void getHoursRate(double& hours, double& rate){
    cout << endl << "Please enter the hours worked: ";
    cin >> hours;
    cout << endl << "Please enter the rate: ";
    cin >> rate;
}

int payCheck ( double hours, double rate ){

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

void printCheck( double hours, double rate, double amount ){
    cout << endl << endl ;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Hours Worked:  " << setw(10) << hours <<  endl;
    cout << "Rate        :  " << setw(10) << rate <<  endl;
    cout << "Amount      :  " << setw(10) << amount << endl;

}

void funcOne( int& x, int y ){
    int num;

    num = 0;

    x *= 2;
    x += y;

    cout << endl << "Please enter a number: ";
    cin >>  num;

    x -= num;
}

void nextChar( char& i ){
    if ( (i < 90 && i >= 65) || ( i < 122 && i >= 97 ) ){
        i++;
    }
    else if ( i == 122 || i == 90 ){
        i -= 25;
    }
}


