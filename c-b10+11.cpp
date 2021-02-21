#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for(double f=0; f<=300; f+=20)
    {
        double c = (f-32)*5/9;
        double k = c + 273.15;
        cout << fixed << setprecision(0) << f;
        cout << fixed << setprecision(2) << " " << c << " " << k << endl;
    }
}
