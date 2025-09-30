#include <iostream>
using namespace std;
int main()
{
    int n;
    double s {};
    cout << "Enter n: ";cin >> n;
    while (n!=0){
        s+= 1.0/(2.0*n);
        n-=1;
    }
    cout << "S = " << s << endl;
    return 0;
}
