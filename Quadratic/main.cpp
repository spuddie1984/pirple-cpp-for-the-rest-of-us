#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Declare Variables
    float a = 0;
    float b = 0;
    float c = 0;
    float x1 = 0;
    float x2 = 0;

    // Prompt user for inputs a,b,c

    cout << "enter the value for a" << endl;
    cin >> a;

    cout << "enter the value for b" << endl;
    cin >> b;

    cout << "enter the value for c" << endl;
    cin >> c;

    // Do the calculations
    x1 = (-b - ( sqrt( pow(b,2) - (4*a*c) ) ) )/(2*a);
    x2 = (-b + ( sqrt( pow(b,2) - (4*a*c) ) ) )/(2*a);

    // Display the calculation to cout
    cout << "This quadratic has the following roots:" << endl;
    cout << "X1: " << x1 << endl;
    cout << "X2: " << x2 << endl;

    return 0;
}
