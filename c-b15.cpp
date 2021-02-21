#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int f0=1, f1=1;
    int f2=f1+f0;
    if(f0<n) cout << f0 << " ";
    if(f1<n) cout << f1 << " ";
    while(f2<n)
    {
        cout << f2 << " ";
        f0=f1; f1=f2;
        f2 = f1+f0;
    }
    if(n==f2)
    {
        cout << f2 << endl;
        cout << n << " la so fibonacci";
    }
    else
    {
        cout << endl;
        cout << n << " khong la so fibonacci";
    }
}
