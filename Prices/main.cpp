#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float price1 = 0.2f;
    float price2 = 0;
    float price3 = 0;
    float total = 0;

    cout << setiosflags(ios::fixed);
    cout << setprecision(2);

    cout << "enter a price " << endl;
    cin >> price1;

    cout << "enter a price " << endl;
    cin >> price2;

    cout << "enter a price " << endl;
    cin >> price3;

    cout << setw(13) << "Price 1 is " << setw(9) << price1 << endl;
    cout << setw(13) << "Price 2 is " << setw(9) << price2 << endl;
    cout << setw(13) << "Price 3 is " << setw(9) << price3 << endl;

    total = price1 + price2 + price3;

    cout << setw(13) << "Total Price: " << setw(9) << total;

    return 0;
}
