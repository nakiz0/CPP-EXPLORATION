#include <iostream>
#include <vector>
using namespace std;
//STL
int main() {
    //VECTOR IS DYNAMIC ALLOCATES
    vector<char> ch={'a','b','c','d','e'};
    vector<int> vec;

    //SIZE
    cout<<"size = " << ch.size()<<endl;
    cout<<"size before push_back = " << vec.size()<<endl;

    //PUSH_BACK
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    vec.push_back(28);


    cout<<"size after push_back= " << vec.size()<<endl;
    for (int vall:vec) {
        cout<<"after push_back = "<<vall<<endl;
    }

    //POP_BACK
    vec.pop_back();
    for (int vall:vec) {
        cout<<"after pop_back = "<<vall<<endl;
    }
    //FRONT VALUE
    cout<<"front val ="<<vec.front()<<endl;

    //LAST VALUE
    cout<<"front val ="<<vec.back()<<endl;
    vector<int> ba(5,1);

    //AT (VALUE AT INDEX)
    cout<<vec.at(1)<<endl;

    //PRINTING OUT VALUES
    for (char val :ch){ //VAL - POINTS TO THE VALUES | PRINTS VALUE INSTEAD OF ITERATING INDEX
        cout << val<<endl;
    }

    return 0;



}