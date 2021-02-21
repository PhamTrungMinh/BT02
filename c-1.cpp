#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n<=1)
    {
        cout << "no";
        return 0;
    }
    if (n==2 || n==3)
    {
        cout << "yes";
        return 0;
    }
    if (n>3)
    {
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                cout << "no";
                return 0;
            }
        }
        cout << "yes";
    }
}

