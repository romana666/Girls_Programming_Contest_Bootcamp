
#include <iostream>
using namespace std;

int main() {
    int n, x, largest;
    cin >> n;

    cin >> largest;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x > largest)
            largest = x;
    }

    cout << largest <<endl;
    return 0;
}
