// A. Helpful Maths
// https://codeforces.com/problemset/problem/339/A
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
    cout << summands[i]; 
    if (i != summands.size()-1) {
      cout << "+";
    }
  }
  cout << endl;
  return 0;
}
