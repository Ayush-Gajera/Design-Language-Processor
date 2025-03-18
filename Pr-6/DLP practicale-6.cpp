#include <iostream>
#include <string>
using namespace std;
int pos = 0;
bool S(string& input);
bool L(string& input);
bool match(char expected, string& input) {
    if (pos < input.size() && input[pos] == expected) {
        pos++;
        return true;
    }
    return false;
}
bool S(string& input) {
    if (match('(', input)) {
        if (L(input) && match(')', input)) {
            return true;
        }
    }
    if (match('a', input)) {
        return true;
    }
    return false;
}
bool L(string& input) {
    if (S(input)) {
        if (match(',', input)) {
            return L(input);
        }
        return true;
    }
    return false;
}


int main() {
    string input;
    cout << "enter string ";
    cin >> input;

    pos = 0;
    if (S(input) && pos == input.size()) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
