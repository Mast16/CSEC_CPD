#include <iostream>
using namespace std;

int main() {
  int c[4];
  int count=0;
  for (int i=0; i<4; i++){
    cin>>c[i];
  }

  for(int i=0; i<3; i++){
        for(int j=i+1; j<4; j++){

        if(c[i]==c[j]){
            count++;
            break;


        }
        }

  }

  cout<<count<<endl;
}
