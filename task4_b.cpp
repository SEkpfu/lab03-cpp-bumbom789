#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: "; cin >> n;
    double x{};
    cout << "Enter x: "; cin  >> x;
    double y = sqrt(x);
    while (n>1){
        y = sqrt(x+y);
        n-=1;
    }
    cout << "y = " << y << endl;
    return 0;
}
