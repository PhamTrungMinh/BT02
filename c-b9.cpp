#include <iostream>
using namespace std;
int main()
{
    int n, tong = 0;
    cin >> n;
    while(n>0)
    {
        tong = tong + n%10;
        n/=10;
    }
    cout << tong;
}
