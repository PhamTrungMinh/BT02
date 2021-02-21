#include <iostream>
using namespace std;
int main()
{
    int n;
    int x=-1;
    do
    {
        cin >> n;
        if(n != x)
        {
            cout << n << " ";
            x=n;
        }
        else continue;
    }
    while(n!=-1);
}
