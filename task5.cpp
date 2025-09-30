#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double epsilon;
    cout << "Enter epsilon: "; cin >> epsilon;
    double sum {},tek{};
    int k{},sign {1};
    do{
        tek = sign/(2.0*k+1.0);
        sum += tek;
        sign *= -1;
        k++;
    } while (abs(1.0/(2.0*k+1.0))>= epsilon);
    cout << "Answer = " << sum;

    return 0;

}
