#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int total_black_ones = 0;
    int total_white_ones = 0;
    
    int b_black_slots = 0;
    int b_white_slots = 0;

    // Row 0 is string 'a', Row 1 is string 'b'
    for (int i = 0; i < n; ++i) {
        // Check string a (row 0, col i)
        if ((0 + i) % 2 == 0) {
            if (a[i] == '1') total_black_ones++;
        } else {
            if (a[i] == '1') total_white_ones++;
        }

        // Check string b (row 1, col i)
        if ((1 + i) % 2 == 0) {
            b_black_slots++;
            if (b[i] == '1') total_black_ones++;
        } else {
            b_white_slots++;
            if (b[i] == '1') total_white_ones++;
        }
    }

    // String b must have enough slots of each parity to hold ALL the '1's of that parity
    if (total_black_ones <= b_black_slots && total_white_ones <= b_white_slots) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
