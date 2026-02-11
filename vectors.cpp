#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> ch={'a','b','c','d','e'};
    vector<int> vec;
    cout<<"size = " << ch.size()<<endl;
    cout<<"size before push_back = " << vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    vec.push_back(28);
    cout<<"size after push_back= " << vec.size()<<endl;
    for (int vall:vec) {
        cout<<"after push_back = "<<vall<<endl;
    }
    vec.pop_back();
    for (int vall:vec) {
        cout<<"after pop_back = "<<vall<<endl;
    }
    cout<<"front val ="<<vec.front()<<endl;
    cout<<"front val ="<<vec.back()<<endl;
    vector<int> ba(5,1);
    cout<<vec.at(1)<<endl;
    for (char val :ch){
        cout << val<<endl;
    }
//stl
    return 0;



}