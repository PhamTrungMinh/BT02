#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<100)
    {
        cout << "khong co luong";
        return 0;
    }
    int luong = 12000*100;
    n-=100;
    if(n<=50) luong += 16000*n;
    else
    {
        luong += 16000*50;
        n-=50;
        if(n<=50) luong += 20000*n;
        else
        {
            luong += 20000*50;
            n-=50;
            luong += 25000*n;
        }
    }
    cout << luong << " vnd";
}
