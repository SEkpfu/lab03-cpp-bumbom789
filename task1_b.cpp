#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x {},y{};
    do {
        cout << "x = " << x << endl;
        cout << "y = " << log(x+1.0)+sin(x) << endl;
        x+=0.5;
        cout << "\n";
    } while (x<=5.0);
    return 0;
}
