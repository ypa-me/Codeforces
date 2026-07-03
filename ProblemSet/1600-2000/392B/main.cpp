#include <iostream>
#include <vector>


using namespace std;


int solve(){
  // parsing matrix to 2d array
  // using vector even though c-type array would be better
  vector <vector<long long>> matrix(3, vector<long long>(3));
  
  for (int i=0;i<=3;i++){
    for (int j=0;j<=3;j++){
      cin >> matrix[i][j];
    }
  }
  


  //declaring array for column positions 
  int rods = 3;
  vector <int> rods(3);
  




  int num_disks;
  cin >> num_disks;
  


  return 0;
  



}

//declaring recursive function


int change_disks(){

  
}




int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while ( t--){
    solve();
  }

  
return 0;
  
}
