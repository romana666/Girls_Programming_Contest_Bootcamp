#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        sort(s.rbegin(), s.rend());
        cout << s << '\n';
    }

    return 0;
}
