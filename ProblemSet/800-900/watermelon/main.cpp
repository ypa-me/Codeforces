#include <iostream>



int main (){
    // Optimize input/output operations for speed (Good habit for Codeforces)
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int w;
    std::cin >> w;

if (w > 2 && w % 2 == 0) {
     std::cout << "YES\n";
} else {
    std::cout << "NO\n";
}
    

 return 0;
}





