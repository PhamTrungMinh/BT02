#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double vay;
    cin >> vay;
    for(int i=0; i<12; i++)
        vay += vay/50;
    cout << fixed << setprecision(0) << vay << " vnd";
}
