#include <iostream>
using namespace std;
int main()
{
    int t=0;
    while (t<=100){
        cout << "tcelsium = " << t << endl;
        cout << "tfarengeit = " << 9.0/5.0*t+32.0 << endl;
        t+=10;
        cout << "\n";
    }
    return 0;
}
