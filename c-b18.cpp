#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i=0;
    double n, diem=0;
    do
    {
        cin >> n;
        i++;
        cout << "Diem mon hoc " << i << ": " << n << endl;
        if(n>=0 && n<=10)
        {
            diem += n;
        }
        while(n>10)
        {
            cin >> n;
            cout << "Nhap lai diem mon hoc " << i << " (trong khoang tu 0..10): " << n << endl;
            if(n>=0 && n<=10)
            {
                diem += n;
            }
        }
    }
    while(n>=0);
    cout << "So mon hoc: " << i-1 << endl;
    cout << "Diem trung binh cua " << i-1 << " mon hoc: " << (diem/(i-1))*1.0;
}
