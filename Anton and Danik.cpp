#include <iostream>

using namespace std;

int main()
{
    int n, sumA=0, sumB=0;
    cin>>n;
    string result;
    cin>>result;
for(int i=0; i<n; i++)
        {
           if( result[i]=='A')
            {
            sumA++;
            }
            else if(result[i]=='D')
            {
            sumB++;
           }
        }

    if (sumA > sumB)
    {
        cout<<"Anton";
    }
    else if(sumA < sumB)
    {
    cout<<"Danik";
    }
    else{
    cout<<"Friendship";
    }

    return 0;
}
