#include <iostream>
using namespace std;

int main() {
    int n,smallest=INT_MAX,largest=INT_MIN;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int small_index,large_index;
    for (int i=0;i<n;i++) {
        smallest=min(arr[i],smallest);

        largest=max(arr[i],largest);
        }
    for (int i=0;i<n;i++) {
        if (arr[i]==smallest) small_index = i;
        if (arr[i]==largest) large_index= i;
    }
    cout<<smallest<<endl;
    cout<<largest<<endl;
    cout<<small_index<<endl;
    cout<<large_index<<endl;
}