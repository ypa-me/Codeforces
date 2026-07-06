#include <iostream>
#include <vector>

using namespace std;
void solve(){

  vector<int> suneet(2);
  vector<int> slavic(2);
  for (int i = 0; i<2; i++){
    cin >> suneet[i];

    
  }

  for (int i = 0; i<2; i++){
    cin >> slavic[i];

    
  }



  int min1 = min(suneet[0], suneet[1]);
  int min2 = min(slavic[0], slavic[1]);
  int max1 = max(suneet[0], suneet[1]);
  int max2 = max(slavic[0], slavic[1]);

  if (min1>max2){
    cout << 4;

  }else if ((max1 > max2 && min1 > min2) || (min1 == max2 && max1 > max2)) {
    cout << 2;
    
  }else {
    cout << 0;
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



