#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    int count=0;

    cin>>str;
    for(int i=0; i<n; i++){
        if(str[i]==str[i+1]){
            count++;
        }

    }
    cout<<count<<endl;
}
