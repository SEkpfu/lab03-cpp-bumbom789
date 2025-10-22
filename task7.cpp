#include <iostream>
#include <cmath>
using namespace std;

double dist(double x1,double y1,double x2,double y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
    int n;
    cout << "Enter n: "; cin >> n;
    double x[n],y[n];
    for(int i{};i<n;i++){
        cout << "Enter x, y: ";cin >> x[i] >> y[i];
    }
    double p{dist(x[n-1],y[n-1],x[0],y[0])};
    for (int i{1};i<n;i++){
        p+=dist(x[i],y[i],x[i-1],y[i-1]);
    }
    cout << "P = " << p << endl;
    return 0;
}