#include <iostream>
using namespace std;

int main() {
    int n,k;
    int count=0;
    cin >> n>>k;
    if((n-k)%10==0){
        count=1;
       cout<<count<<endl;

    }
    else {
    for(int i=1; i<10;i++){
      if(((n*i)-k)%10==0){
            cout<<i<<endl;
      return 0;
      }
      }
       for(int i=1; i<10; i++){
            if((n*i)%10==0){
                cout<<i<<endl;
                return 0;
            }
        }

    }
}

