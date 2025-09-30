#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (double x =0;x<2*M_PI+M_PI/6.0;x+=M_PI/6.0){
        cout << "x = " << x << endl;
        cout << "y = "<< cos(x) << endl;
        cout << "\n";
    }
    return 0;
}
