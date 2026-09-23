#include <iostream>
using namespace std;
int main(){
    int arr[] = {12,45,7,89,23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    for (int i = 1; i < n; i++)                  //baaki elements ko ek ek karke check karna 
    {
        if(arr[i] > largest){                    //agar current element largest se bda h to
            largest = arr[i];                    // to largest ki value update karke uss new value ko largest me put karna
        }
    }
    cout<<"largest element = "<<largest<<endl;     // largest ki value ko print karna
    
    return 0;
}
