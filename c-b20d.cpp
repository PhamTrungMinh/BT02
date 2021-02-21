#include <iostream>
#include <iomanip>
using namespace std;

int tong_luong (int n)
{
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
    return luong;
}

int thu_nhap(int tong)
{
    int bao_hiem = tong*9/100;
    int chiu_thue = tong - bao_hiem;
    int thue = 0;
    if(chiu_thue <= 1000000) thue = 0;
    else
    {
        chiu_thue -= 1000000;
        if(chiu_thue <= 500000)
        {
            thue += chiu_thue/10;
        }
        else
        {
            thue += 500000/10;
            chiu_thue -= 500000;
            if(chiu_thue <= 500000) thue += chiu_thue*15/100;
            else
            {
                thue += 500000*15/100;
                chiu_thue -= 500000;
                thue += chiu_thue/5;
            }
        }
    }
    return tong - bao_hiem - thue;
}

int main()
{
    int tong = tong_luong(155);
    cout << "Thu nhap tu viec lam them: " << thu_nhap(tong) << " vnd" << endl;
    int tn = thu_nhap(tong) + 1500000;
    int tra = tn - 2000000;
    int thang = 0, vay = 10000000;
    while(vay>0)
    {
        thang++;
        cout << "Tien lai thang " << thang << ": " << vay/50 << " vnd" << endl;
        vay += vay/50;
        vay -= tra;
        if(vay>0) cout << "Du no dau thang " << thang+1 << ": " << vay << " vnd" << endl;
    }
    cout << "Tra het no sau " << thang << " thang";
}
