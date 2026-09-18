#include <iostream>
using namespace std;
class student
{
    public:
    int marks;
    bool operator>(student s)
    {
        return marks> s.marks;
    }
};
int main(){
    student s1,s2;

    s1.marks = 10;
    s2.marks = 20;

    if(s1 > s2)
    {
        cout<<"s1.marks is come"<<endl;
    }
    else{
        cout<<"s2.marks is come"<<endl;
    }

    return 0;
}