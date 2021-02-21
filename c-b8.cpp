#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if(delta<0)
    {
        cout << "vo nghiem";
        return 0;
    }
    if(delta==0)
    {
        cout << "nghiem phuc: " << -b/(2*a);
        return 0;
    }
    if(delta>0)
    {
        cout << "2 nghiem phan biet: " << (-b+sqrt(delta))/(2*a) << ", " << (-b-sqrt(delta))/(2*a);
    }
}
