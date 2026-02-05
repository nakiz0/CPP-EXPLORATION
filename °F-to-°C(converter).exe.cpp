#include <iostream>
using namespace std;
int main() {
    cout<<"ENTER FAHRENHEIT :";
    double F;
    const double C=(F-32)/1.8;
    cin>>F;
    cout<<"FAHRENHEIT :"<<F<<"°F"<<endl
    <<"VALUE IN CELSIUS : "<<C<<"°C";
    return 0;
}