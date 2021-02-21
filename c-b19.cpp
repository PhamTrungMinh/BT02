#include <iostream>
using namespace std;
int main()
{
    double diem, heso, tong_diem=0;
    int so_heso=0;
    int n;
    cin >> n;
    cout << "Tong so mon hoc can tinh DTB: " << n << endl;
    for(int i=1; i<=n; i++)
    {
        cin >> diem >> heso;
        so_heso += heso; tong_diem += diem*heso;
        cout << "Diem mon hoc " << i << ": " << diem << endl;
        cout << "He so mon hoc " << i << ": " << heso << endl;
    }
    cout << "So mon hoc: " << n << endl;
    cout << "Tong so he so: " << so_heso << endl;
    cout << "Diem t rung binh cua " << n << " mon hoc: " << (tong_diem/so_heso)*1.0;
}
