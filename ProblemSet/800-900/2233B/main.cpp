#include <iostream>
#include <vector>


using namespace std;

void solve(){
    

    //defining test input
    int n;
    cin >> n;

    //declaring output array

    vector<int> ans(4*n);

    int index = 0;

    for (int i = 1; i <= n; i++) {
        ans[index] = i;
        index++; 
    }
    for (int i = 1; i <= n; i++) {
        ans[index] = i;
        index++; 
    }
    for (int i = 2; i <= n; i++) {
        ans[index] = i;
        index++; 
    }
    
    ans[index++] = 1;

    for (int i = 1; i <= n; i++) {
        ans[index] = i;
        index++; 
    }

    for (int i = 0; i < 4 * n; i++) {
        cout << ans[i] << (i == 4 * n - 1 ? "" : " ");
    }
    cout << "\n";




    
}

int main(){
    // Optimize input/output operations for speed 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;


}