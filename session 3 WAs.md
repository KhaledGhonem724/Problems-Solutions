# [B. Helpful Maths](https://vjudge.net/contest/558712#problem/B)
## original code
```cpp
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main() {
  string sum;
  cin >> sum;
  vector<char> summands;
  for (char c: sum) {
  summands.push_back(c);
  }
  sort(summands.begin(), summands.end());
  for (int i =0; i < summands.size(); i++) { 
    cout << summands[1]; 
    if (i != summands.size()-1) {
      cout << "+";
    }
  }
  cout << endl;
  return 0;
}
```
## edited
```cpp
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main() {
  string sum;
  cin >> sum;
  vector<char> summands;
  for (char c: sum) {
    if(c!='+'){
      summands.push_back(c);
    }
  }
  sort(summands.begin(), summands.end());
  for (int i =0; i < summands.size(); i++) { 
    cout << summands[1]; 
    if (i != summands.size()-1) {
      cout << "+";
    }
  }
  cout << endl;
  return 0;
}
```

# [C - AC or WA](https://vjudge.net/contest/558712#problem/C)
## original code
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
## edited 
```cpp
#include <iostream>
using namespace std;
int main(){
  int N,M;
  cin>> N>>M;
  if(N==M){
    cout<<"Yes\n";
  }else{
    cout<<"No\n";
  }
  return 0;
}
```






