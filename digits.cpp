#include<iostream>
using namespace std;

int main() {
    int n;
    int digits=0;
    cin>>n;

    while (n>0) {
        digits++;
        n/=10;
    }

    cout<<"number of digits : "<<n;
}
