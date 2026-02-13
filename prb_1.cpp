#include <iostream>
#include <vector>
using namespace std;

int main() {

    //defining vector
    vector<int> vec={4,2,1,2,1};

    int ans=0; //vairable to contain the answer
    for (int val:vec) {
        ans=ans^val;
    }

    return ans;
}