// i need to review and rewrite this code actually
// i understood the logic
// i just need to ensure that i understand the solution intuitively so that i can get solutions to other problems easier
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long n;
    cin >> n;

    // Array storing the smallest palindrome for remainders 0 through 11
    vector<long long> min_palindromes = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11};

    // Find the required remainder
    int rem = n % 12;
    
    // Pick the optimal smallest palindrome
    long long a = min_palindromes[rem];

    // Check if b would be non-negative
    if (n >= a) {
        long long b = n - a;
        cout << a << " " << b << "\n";
    } else {
        // If n is smaller than the smallest possible palindrome for that remainder, it's impossible
        cout << -1 << "\n";
    }
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}