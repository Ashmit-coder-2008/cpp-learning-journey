#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int n = sizeof(arr) /sizeof(arr[0]);
    int k = 2;
    k = k % n;

    //reverse algorithm start
    reverse(arr + n - k,arr+ n);

    //This reverse arr to n - k value tak 
    //First arr can used to reverse and after "," arr is used to tell computer last value of reverse
    reverse(arr, arr + n-k);

    //This reverse, reverse all arr (arr+n)
    reverse(arr, arr + n);

    cout<<"rotation array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
        cout<<",";
    }
    return 0;
    
}