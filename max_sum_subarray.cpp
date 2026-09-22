#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,8,4,5,6};
    int n = sizeof(arr)  / sizeof(arr[0]);
    //ek group me kitna elements lene h iss ke liya k.
    int k = 3;

    int maxSum  = 0;                            // maxsum suru me zero h.
    int startIndex = 0;                         // maximum sum bala group ka starting index is 0.

    for (int i = 0; i <= n-k ; i++)             // Har possible group ko check karna.
    {
        int sum = 0;
        for (int j = i; j < i + k ; j++)        //current group ke k element ka sum
        {
            sum = sum + arr[j];
        }
        if(sum > maxSum){                       //Agar current sum maximum hai
            maxSum = sum;
            startIndex = i;
        }
    }

    cout<<"max sum is: "<<maxSum<<endl;          //Maximum sum print karna
    cout<<"group is: ";                          // maximum sum bala group print karna

    for(int j = startIndex; j < startIndex + k; j++){ 
        cout<<arr[j]<<",";
    }
    
    return 0;
}