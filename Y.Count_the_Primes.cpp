#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    for (int j = 2; j <= n; j++) {
        int i;

        for (i = 2; i < j; i++) {
            if (j % i == 0)
                break;
        }

        if (i == j)
            count++;
    }

    cout << count << '\n';
    return 0;
}

