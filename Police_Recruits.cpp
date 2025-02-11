#include <iostream>
using namespace std;

int main() {
    int n, event, available_officers = 0, untreated_crimes = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> event;

        if (event == -1) {
            if (available_officers > 0) {
                available_officers--;
            } else {
                untreated_crimes++;
            }
        } else {
            available_officers += event;
        }
    }

    cout << untreated_crimes << endl;

    return 0;
}


