#include <iostream>
using namespace std;
int main()
{
    char input {};
    int number,k{},ch{};
    do
    {
        k++;
        cout << "Enter the number: "; cin >> number;
        if ((number&1)==0)
            ch++;
        cout << "Do you want to continue?(Y/N) "; cin >> input;
    } while (input == 'Y' || input == 'y');
    cout << "Number of numbers = " << k << endl;
    cout << "Number of even numbers = " << ch << endl;
}
