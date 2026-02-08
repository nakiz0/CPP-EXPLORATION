#include <iostream>
using namespace std;

//REVERSING THE ARRAY
void reverse(int arr[],int sz) {

    for (int i=0;i<sz/2;i++) {
        int temp=arr[sz-1-i];
        arr[sz-1-i]=arr[i];
        arr[i]=temp;

    }



}

int main() {
    int arr[]={5,2,3,1,4,6};
    int sz=6;
    reverse(arr,sz);
    for (int i=0;i<sz;i++) {
        cout<<arr[i]<<" ";
    }
}


