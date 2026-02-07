#include <iostream>

using namespace std;

int main() {
   int number =0b11111111;
    int xnumber= 0xff;

    double price=99.99;
    float interestRate = 3.67f;
    long fileSize = 9000l;
    char letter = 'A';
    bool isValid = false;
    auto isAuto= "HELLO";
    cout<<"price(DOUBLE) = "<<price<<endl
    <<"interestRate(FLOAT) = "<<interestRate<<endl
    <<"fileSize(LONG) = "<<fileSize<<endl
    <<"letter(CHAR) = "<<letter<<endl
    <<"isValid(BOOL) = "<<isValid<<endl
    <<"isAuto(AUTO) = "<<isAuto<<endl
    <<"number(BINARY) = "<<number<<endl
    <<"xnumber(HEXADECIMAL) = "<<xnumber;


    return 0;
}