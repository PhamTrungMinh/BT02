#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
        cout  << "Nhap vao mot so trong khoang 0..9: " << n << endl;
        switch(n)
        {
        case 0:
            cout << "Vua nhap vao chu so khong" << endl;
            break;
        case 1:
            cout << "Vua nhap vao chu so mot" << endl;
            break;
        case 2:
            cout << "Vua nhap vao chu so hai" << endl;
            break;
        case 3:
            cout << "Vua nhap vao chu so ba" << endl;
            break;
        case 4:
            cout << "Vua nhap vao chu so bon" << endl;
            break;
        case 5:
            cout << "Vua nhap vao chu so nam" << endl;
            break;
        case 6:
            cout << "Vua nhap vao chu so sau" << endl;
            break;
        case 7:
            cout << "Vua nhap vao chu so bay" << endl;
            break;
        case 8:
            cout << "Vua nhap vao chu so tam" << endl;
            break;
        case 9:
            cout << "Vua nhap vao chu so chin" << endl;
            break;
        }
    }
    while(n>=0 && n<=9);
}
