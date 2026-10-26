#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;

    for (i = 2; i < n; i++) {
        if (n % i == 0)
            break;
    }

    if (n > 1 && i == n)
        cout << "Prime"  <<endl;
    else
        cout << "Not Prime" <<endl;

    return 0;
}

