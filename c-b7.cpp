#include <iostream>
using namespace std;
int main()
{
    double x1, y1, z1, x2, y2, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    y1 /= x1; z1 /= x1; x1 = 1;
     y2 = y2 - x2*y1; z2 = z2 - x2*z1; x2 = 0;
    if(y2 == 0)
    {
        if(z2==0) cout << "vo so nghiem";
        else cout << "vo nghiem";
        return 0;
    }
    else
    {
        double y = z2 / y2;
        double x = z1 - y1*y;
        cout << x << "," << y;
    }
}
