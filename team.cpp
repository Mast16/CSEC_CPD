#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int A[a][3];
    int count = 0;

    for (int i=0; i<a; i++){
        for(int j=0; j<3; j++){
            cin>>A[i][j];
        }
    }
for (int i=0; i<a; i++){
    int sum=0;
for(int j=0; j<3; j++){
    sum+=A[i][j];}
if (sum>=2){
    count++;
}
}

cout<<count<<endl;

 return 0;
    }
