#include <iostream>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int maxRoll = max(Y, W);

    string results[] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};

    cout << results[maxRoll - 1] << endl;
    return 0;
}
