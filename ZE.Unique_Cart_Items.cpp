
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> products;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        products.insert(name);
    }

    for (string name : products) {
        cout << name << endl;
    }

    return 0;
}
