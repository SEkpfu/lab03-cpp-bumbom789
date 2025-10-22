#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: "; cin >> n;
    double x{};
    cout << "Enter x: "; cin  >> x;
    double y = cos(x);
    while (n>1){
        y= cos(x+y);
        n-=1;
    }
    cout << "y = " << y << endl;
    return 0;
}
