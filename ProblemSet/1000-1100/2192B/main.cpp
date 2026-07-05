#include <iostream>
#include <vector>


using namespace std;

void solve(){

  int n;
  cin >> n;

  string s;
  
  cin >> s;


  vector<int> ones;
  vector<int> zeros;
  //finding numbers of 1s and zeros 
 for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones.push_back(i + 1);
        } else {
            zeros.push_back(i + 1);
        }
    }

    //  If the count of '1's is even, operate on all '1's
    if (ones.size() % 2 == 0) {
        cout << ones.size() << "\n";
        for (int i = 0; i < ones.size(); i++) {
            cout << ones[i] << (i == ones.size() - 1 ? "" : " ");
        }
        cout << "\n";
    } 
    // If the count of '0's is odd, operate on all '0's
    else if (zeros.size() % 2 != 0) {
        cout << zeros.size() << "\n";
        for (int i = 0; i < zeros.size(); i++) {
            cout << zeros[i] << (i == zeros.size() - 1 ? "" : " ");
        }
        cout << "\n";
    } 
    //Unsolvable
    else {
        cout << -1 << "\n";
    }
} 
  





int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--){
    solve();
  }
  
  return 0;

}




