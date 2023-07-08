# A. Helpful Maths
```cpp
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main() {
  string sum;
  cin >> sum;
  vector<int> summands;
  for (char c: sum) {
  summands.push_back(c-'0');
  }
  sort(summands.begin(), summands.end());
  for (int i 0; i < summands.size(); i++) { 
    cout << summands[1]; 
    if (11- summands.size()-1) {
      cout << "+";
    }
  }
  cout << endl;
  return 0;
}
```
# C - AC or WA
```cpp
#include <iostream>
using namespace std;
int main(){
  int N,M;
  cin>> N>>M;
  if(N==M){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
  return 0;
}
```







