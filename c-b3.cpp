#include <iostream>
#include <cmath>
using namespace std;

bool tamgiac(double a, double b, double c)
{
    if(a+b<=c) return false;
    if(b+c<=a) return false;
    if(c+a<=b) return false;
    return true;
}

bool deu(double a, double b, double c)
{
    if(a==b && b==c) return true;
    return false;
}

bool can(double a, double b, double c)
{
    if(a==b) return true;
    if(a==c) return true;
    if(c==b) return true;
    return false;
}

bool vuong(double a, double b, double c)
{
    if(a*a == b*b + c*c) return true;
    if(b*b == a*a + c*c) return true;
    if(c*c == b*b + a*a) return true;
    return false;
}

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    if(!tamgiac(a,b,c))
    {
        cout << "no";
        return 0;
    }
    else
    {
        cout << "yes" << endl;
        if(deu(a,b,c))
        {
            cout << "deu";
            return 0;
        }
        else
        {
            if(can(a,b,c)) cout << "can" << endl;
            if(vuong(a,b,c)) cout << "vuong";
        }
    }
}
