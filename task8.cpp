#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";cin >> n;
    for(int j{};j<n;j++){
        if(j%2==0){
            for(int i{};i<n;i++){
            if (i%2==0){
                cout << 'o';
            }
            else{
                cout << '*';
            }
            }
        }
        else{
            for(int i{};i<n;i++){
            if (i%2==0){
                cout << '*';
            }
            else{
                cout << 'o';
            }
            }
    }
    cout << endl;
    }
}