#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    
    vector<bool> visited(n + 1, false);
    int cycle_count = 0;
    
    
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cycle_count++; 
            
            
            int current = i;
            while (!visited[current]) {
                visited[current] = true;
                current = p[current]; 
            }
        }
    }
    
    
    cout << n - cycle_count << "\n";
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