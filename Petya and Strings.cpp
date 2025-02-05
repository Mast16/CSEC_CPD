#include <iostream>
#include <string>
#include <cctype>

using namespace std;


void toLower(string& str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    string str1, str2;

    cin >> str1;
    cin >> str2;

    toLower(str1);
    toLower(str2);

    if (str1 < str2) {
        cout << "-1";
    } else if (str1 > str2) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}

