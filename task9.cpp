#include <iostream>
using namespace std;
int main() {
    int num;
    int max_element = 0;
    int count = 0;
    cout << "Enter the sequance (0 - break): " << endl;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num > max_element) {
            max_element = num;
            count = 1;
        } else if (num == max_element) {
            count++;
        }
    }
    if (max_element == 0) {
        cout << "Sequance is empty" << endl;
    } else {
        cout << "Max element = " << max_element << endl;
        cout << "Numbers of elements equal max element = " << count << endl;
    }
    return 0;
}