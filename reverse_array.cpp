#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int n =sizeof(arr) / sizeof(arr[0]);
    
    cout<<"Original array: ";

    for (int i = 0; i < n; i++)                  // Given array likhna ke liya
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;

    cout<<"Reverse array: ";
    for (int i = n - 1; i >=0 ; i--)              // ek ek karke reverse likhna ke liya
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    
    return 0;
}