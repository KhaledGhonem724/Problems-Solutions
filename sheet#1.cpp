
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;

int main()
{
	///////////////////////////////
	//////// F - Even Odds ////////
	///////////////////////////////
	// intpt : n , k
	// idea : 
	// in array of n numbers contains odd numbers from
	// 1 to n then even numbers from 1 to n (inclusive) 
	// print the k th number

	// brute force solution
	int n,k;
	vector<int>v(n);
	for (int i = 1; i <= n; i+=2)
	{
		v.push_back(i);
	}
	for (int i = 2; i <= n; i += 2)
	{
		v.push_back(i);
	}
	cout << v[k - 1] << endl;
	// this will cause an error : time limit exeeded  
	// math approach 
	/*
				    n
				  /   \
				even  odd
			  ex: 4    ex: 5
		1 2 3 4		  1 2 3 4 5
		1,3|2,4		  1,3,5|2,4

	in both situations : the position of last odd number will be : pos= (n+1)/2
		(4+1)/2=2	  (5+1)/2=3

	so if k <= pos ... the number is odd 
	else ... the number is even

	ODDs
	the 1 st odd number = 1
	the 2 nd odd number = 3
	the 3 rd odd number = 5
	...
	the x th odd number = ( x * 2 ) - 1 

	EVENs
	the 1 st even number = 2
	the 2 nd even number = 4
	the 3 rd even number = 6
	...
	the x th even number = ( (x-pos) * 2 )

	*/
	int pos = (n + 1) / 2;
	if (k <= pos) {
		cout << k * 2 - 1 << endl;
	}
	else {
		cout << (k - pos) * 2 << endl;
	}


	///////////////////////////////
	///// G - AtCoder Quiz 2 //////
	///////////////////////////////
	// intpt : n 
	// idea : 
	// regular if-else problem
	cin >> n;
	if (n >= 0 && n < 40) {
		cout << 40 - n;
	}
	else if (n >= 40 && n < 70)
	{
		cout << 70 - n;
	}
	else if (n >= 70 && n < 90)
	{
		cout << 90 - n;
	}
	else {
		cout << "expert";
	}

	///////////////////////////////
	///// H - Vanishing Pitch /////
	///////////////////////////////
	// input : speed , start time , end time , position 

	/*
	test case 1 : 
	10 3 5 20

	0		10		20		30		40		50		60		70
	0		1		2		3		4		5		6		7
	|-------|-------|-------|-------|-------|-------|-------|
							|===invisible===|
					*


	test case 2 :
	10 3 5 30

	0		10		20		30		40		50		60		70
	0		1		2		3		4		5		6		7
	|-------|-------|-------|-------|-------|-------|-------|
							|===invisible===|
							*
					
	*/
	int speed = 0, start = 0, end = 0, pos = 0;
	cin >> speed >> start >> end >> pos;
	start *= speed;
	end *= speed;
	if (start <= pos && pos <= end)
	{
		cout << "No";
	}
	else {
		cout << "Yes";
	}


	///////////////////////////////
	/////// I - Rainy Season //////
	///////////////////////////////
	// input : string s of length 3
	/*
	if number of R s :
			3 >>> RRR			  >>> 3
			2 >>> RRS , RSR , SRR >>> 1 or 2
			1 >>> SSR , SRS , RSS >>> 1
			0 >>> SSS			  >>> 0
	*/
	string s;
	cin >> s;
	int res = 0;
	for (int i = 0; i < 3; i++)
	{
		if (s[i] == 'R')
		{
			res++;
		}
	}
	if (res == 2 && s[1] == 'S')
	{
		res--;
	}
	cout << res;



	///////////////////////////////
	/// J - Word Capitalization ///
	///////////////////////////////
	// input : string s of length 3
	cin >> s;
	s[0] = toupper(s[0]);
	cout << s;
	// or by ASCII code
	if (s[0]>='a')
	{
		int dif = 'a' - 'A';
		s[0] += dif;
	}
	cout << s;
}
	/////////////////////////////////////////////////////////
	////// 1678. Goal Parser Interpretation /////////////////
	/////////////////////////////////////////////////////////
	// input : string command
string interpret(string command) {
	string res;
	for (int i = 0; i < command.length(); i++)
	{
		if (command[i] == 'G')
		{
			res.append("G");
		}
		else if (command[i] == '(' && command[i + 1] == ')')
		{
			res.append("o");
			i++;
		}
		else {
			res.append("al");
			i += 3;
		}
		return res;
	}
	return res;
}
	///////////////////////////////////////////////
	/////////// 771. Jewels and Stones ////////////
	///////////////////////////////////////////////
	// input : string jewels , string stones
int numJewelsInStones(string jewels, string stones) {
	int num = 0;
	for (int i = 0; i < stones.length(); i++)
	{
		for (int j = 0; j < jewels.length(); j++)
		{
			if (stones[i] == jewels[j])
			{
				num++;
				break;
			}
		}
	}
	return num;
}
