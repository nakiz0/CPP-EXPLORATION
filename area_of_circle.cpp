#include <iostream>
#include <cmath>
using namespace std;
int main(){

  const double pi= 3.141;
  cout<<"ENTER RADIOUS: ";
  double radious;
  cin>>radious;
  double area=pi*radious*radious;
  cout<<"AREA OF A SQUARE : "<<area<<endl;



}
#include <iostream>
using namespace std;

int main() {

    int result=0;
    char eval;
    int n;
    cout<<"\t---------CALUCULATOR----------";
    cout<<"EVALUATORS\n1. +\n2. -\n3. *\n4. /"<<endl;
    cout<<"enter the evaluator"<<endl;
    cin>>eval;
    cout<<"ENTER THE NUMBER OF VALUES YOU WANNA CALCULATE"<<endl;
    cin>>n;
    cout<<"ENTER THE NUMBERS"<<endl;
    int val[n];
    for (int i=0;i<n;i++) {
        cin>>val[i];
    }
    if (eval=='+') {
        for (int i=0;i<n;i++) {
            result=result+ val[i];

        }
        cout<<"OUTPUT: "<<result<<endl;

    }
return 0;
}