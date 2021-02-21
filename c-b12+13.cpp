#include <iostream>
#include <cmath>
using namespace std;

bool chinh_phuong(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(i*i == n) return true;
    }
    return false;
}

bool hoan_hao(int n)
{
    int tong=0;
    for(int i=1; i<=n/2; i++)
    {
        if(n%i==0) tong+=i;
    }
    if(tong==n) return true;
    else return false;
}

bool nguyen_to(int n)
{
    if(n<=1) return false;
    if(n==2 || n==3) return true;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for(int i=2; i<=n; i++)
        if(nguyen_to(i)) cout << i << " ";
    cout << "la so nguyen to" << endl;
    for(int i=2; i<=n; i++)
        if(hoan_hao(i)) cout << i << " ";
    cout << "la so hoan hao" << endl;
    for(int i=2; i<=n; i++)
        if(chinh_phuong(i)) cout << i << " ";
    cout << "la so chinh phuong" << endl;
}
