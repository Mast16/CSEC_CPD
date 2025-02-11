#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    string str;
    cin >> str;

    int current = 0;
    int rot = 0;
    int totalrot=0;

    for (int i = 0; i < str.length(); i++) {
        int target = str[i] - 'a';


        int forwarddist = abs(target - current);
        int backwarddist = 26 - forwarddist;


        totalrot += min(forwarddist, backwarddist);


        current = target;
    }

    cout << totalrot << endl;

    return 0;
}
