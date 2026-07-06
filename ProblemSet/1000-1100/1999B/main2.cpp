#include <iostream>

using namespace std;

// Helper function to figure out who wins a single round
// Returns 1 if Suneet wins, -1 if Slavic wins, 0 for a tie
int play_round(int suneet_card, int slavic_card) {
    if (suneet_card > slavic_card) return 1;
    if (suneet_card < slavic_card) return -1;
    return 0;
}

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2; // Suneet's cards
    cin >> b1 >> b2; // Slavic's cards

    int suneet_wins = 0;

    // Way 1: Suneet plays a1 vs b1, and a2 vs b2
    if (play_round(a1, b1) + play_round(a2, b2) > 0) {
        suneet_wins++;
    }
    
    // Way 2: Suneet plays a1 vs b2, and a2 vs b1
    if (play_round(a1, b2) + play_round(a2, b1) > 0) {
        suneet_wins++;
    }
    
    // Way 3: Suneet plays a2 vs b1, and a1 vs b2
    if (play_round(a2, b1) + play_round(a1, b2) > 0) {
        suneet_wins++;
    }
    
    // Way 4: Suneet plays a2 vs b2, and a1 vs b1
    if (play_round(a2, b2) + play_round(a1, b1) > 0) {
        suneet_wins++;
    }

    // Output the total number of winning scenarios for Suneet
    cout << suneet_wins << "\n";
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
