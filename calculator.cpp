#include <iostream>
#include <vector>
using namespace std;

int main() {

    int result;
    char eval;
    int n;

    cout<<"\n----------------CALCULATOR----------------";
    cout<<"\nEVALUATORS\n1. +\n2. -\n3. *\n4. /"<<endl;

    cout<<"ENTER THE EVALUATOR: ";
    cin>>eval;

    cout<<"ENTER THE NUMBER OF VALUES: ";
    cin>>n;

    vector<int> val(n);

    cout<<"ENTER THE NUMBERS"<<endl;
    for (int i=0;i<n;i++) {
        cin>>val[i];
    }

    if (eval=='+') {
        result = 0;
        for (int i=0;i<n;i++) {
            result += val[i];
        }
    }

    else if (eval=='-') {
        result = val[0];
        for (int i=1;i<n;i++) {
            result -= val[i];
        }
    }

    else if (eval=='*') {
        result = 1;
        for (int i=0;i<n;i++) {
            result *= val[i];
        }
    }

    else if (eval=='/') {
        result = val[0];
        for (int i=1;i<n;i++) {
            result /= val[i];
        }
    }

    else {
        cout<<"Invalid operator";
        return 0;
    }

    cout<<"OUTPUT: "<<result<<endl;

    return 0;
}
