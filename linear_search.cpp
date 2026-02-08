#include <iostream>

using namespace std;
int lsearch(int arr[],int sz,int key) {
    for(int i=0;i<sz;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int key=8;
	int n=7;
    cout<<lsearch(arr,n,8);

}
