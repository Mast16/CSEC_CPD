#include <iostream>

using namespace std;

int main()
{
    int a,b,count = 0;
    cin>>a;
    cin>>b;
    while(a<=b){

        a=3*a;
        b=2*b;
        count++;
        }
    cout<<count;

}
