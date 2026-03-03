#include<iostream>
using namespace std;
template<class T>
T square(T a)
{
    return a*a;
}
int main()
{
    float p;
    cout<<"Enter a number:";
    cin>>p;
    cout<<"Square of a number is:"<<square(p);
    return 0;
}