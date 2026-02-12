#include <iostream>
#include <vector>
using namespace std;
//STL
int main() {
    //VECTOR IS DYNAMIC ALLOCATES MEMORY AT RUNTIME RATHER THAN COMPILE TIME
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





    //NEXT ONE
    int n,smallest=INT_MAX,largest=INT_MIN;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int small_index,large_index;
    for (int i=0;i<n;i++) {
        smallest=min(arr[i],smallest);

    }
}
//OLD ONE
//NEXT LEVEL
//OLD LEVEL
//MIDDLE ONE