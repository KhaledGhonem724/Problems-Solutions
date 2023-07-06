# PUA ECPC 2023 cheat sheet 
## Content
- [libraries](lib)
- code templates
  - standard
  - data types define
  - fast input and output
- important built-in functions 
  - String
  - numbers
  - Arrays
    - basic
    - advanced
- important functions 
  - GCD
  - LCM

## libraries `lib` 
```
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cassert>

#include <string>
#include <string.h>

#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

#include <algorithm>
#include <numeric>
#include <cmath>
```
## code templates
### standard
```
using namespace std;
```

### data types define
```
#define ll long long
```
### fast input and output
```
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
```

## important built-in functions 
### String
```
to_string(int)
stoi(string)
isalpha(ch)
isdigit(ch)
```
### numbers
```
min(a,b)
max(a,b)
swap(a,b)
floor(a)
ceil(a)
pow(a,b)
log2(a)
```
### Arrays
- **basic**
```
sort( arr , arr + size);
reverse( arr, arr + size );
fill( arr , arr + size , val );
int MinValue = *min_element( arr , arr + size);
int MaxValue = *max_element( arr , arr + size );
int index = find( arr , arr + size , val ) - arr;
```
- **advanced**
```
next_permutation( arr , arr + size )
upper_bound( arr , arr + size , val )
Returns the address of the first element e when ( e > val ) arr is sorted
index = upper_bound(arr,arr+7, 3) - arr;
value = *upper_bound(arr,arr+7, 3);
```




## important functions 
### GCD
Greatest Common Divisor (GCD) or Highest Common Factor (HCF) of two numbers is the largest number that divides both of them. 
```
int GCD(int a, int b) {
	if (!b)return a;
	return GCD(b, a % b);
}
```
### LCM
Least Common Multiple (LCM) of two numbers is the smallest number which can be divided by both numbers. 
```
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
```





