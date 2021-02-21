#include <iostream>
using namespace std;
int main()
{
    int tong;
    cin >> tong;
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
    cout << tong - bao_hiem - thue << " vnd";
}
