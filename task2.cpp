#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int kolvo_otric{},summa{},minn{INT_MAX};
    for (int i =0;i<7;i+=1){
        int number;
        cout << "Enter the number: "; cin >> number;
        if (number<0)
            kolvo_otric+=1;
        if (abs(number)<100 && abs(number)>9)
            summa +=number;
        if (number<minn)
            minn = number;
    }
    cout << "Number of negative numbers = " << kolvo_otric << endl;
    cout << "Sum of two-digit number = " << summa << endl;
    cout << "Minimum number = " << minn << endl;
    return 0;
}
