
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> m;
    while (n--) {
        string s;
        cin >> s;
        m[s]++;
    }

    for (auto x : m)
        cout << x.first << " " << x.second << '\n';
}
