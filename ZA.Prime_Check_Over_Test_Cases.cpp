#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int i;

        for (i = 2; i < n; i++) {
            if (n % i == 0)
                break;
        }

        if (n > 1 && i == n)
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
}

