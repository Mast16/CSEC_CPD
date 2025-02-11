#include <iostream>
using namespace std;

int main() {

    int a[4];

  int sum=0;
  for (int i=0; i<4;i++){
    cin>>a[i];
  }
  string str;
    cin>>str;
for(int j=0; j<str.length(); j++){
    if(str[j]=='1'){
        sum+=a[0];
    }
    else if(str[j]=='2'){
        sum+=a[1];
    }
    else if(str[j]=='3'){
        sum+=a[2];
    }
    else if(str[j]=='4'){
        sum+=a[3];
    }
}
cout<<sum<<endl;


}
