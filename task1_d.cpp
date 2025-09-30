#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (double x = -1.5;x< 1.5+0.25;x+=0.25){
        cout << "x = " << x << endl;
        if (x<-0.5){
            cout << "y = " << 1.0-x*x << endl;
        } else if (x<=1){
            cout << "y = " << x+1 << endl;
        } else{
            cout << "y = "<< 1+sqrt(abs(cos(x))) << endl;
        }
        cout << "\n";
    }
    return 0;
}
