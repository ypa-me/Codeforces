#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    long long good_subarrays_count = 0;

    // We only need to check adjacent elements (subarrays of length 2)
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(p[i] - p[i + 1]);
        if (diff == std::gcd(p[i], p[i + 1])) {
            good_subarrays_count++;
        }
    }

    cout << good_subarrays_count << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}