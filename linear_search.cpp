#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int target = 40;

    int found = 0;
    int index = -1;

    for (int i = 0; i < 5; i++)
    {
        if(arr[i] == target)
        {
            found = 1;    // not compulsorily in == found , but not found (!=)can not write before found.
            index = i;
            break;
        }
    }

    if(found == 1)
    {
        cout<<"target is found"<<endl;
        cout<<"index is: "<<index<<endl;
    }
    else
    {
        cout<<"target not found"<<endl;
    }
    
    return 0;
}