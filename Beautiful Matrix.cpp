#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m[5][5], r, c;


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
               r = i;
               c = j;
            }
        }
    }

    cout << abs(r - 2) + abs(c - 2) << endl;

    return 0;
}


