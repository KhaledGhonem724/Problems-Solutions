/*
relise the syntax difference comparing to Java
*/
#include <iostream>
#include <iomanip>
#include <algorithm>
#define endl "\n"
typedef long long ll;
using namespace std;
int main()
{
	//////////////////////////////////////////////////////////////////////////
	///////////////////////////////// data types /////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	cout << "data types : " << khaled;
	int a;				// declaration 
	int b = 5;			// initialisation
	b = 8;				// overide 
	///////////////////////////////// numbers /////////////////////////////
	short v1;
	int v2;					// -2147483648			to 2147483647
	unsigned int v3;		// 0					to 4294967295
	long v4;				// -2147483648			to 2147483647
	long long v5;			// -9223372036854775808 to 9223372036854775807 
	unsigned long long v6;	// 0					to 18446744073709551615

	///////////////////////// numbers & fractions ///////////////////////////
	cout << "numbers & fractions : " << endl;
	float f1;				// 3.4 ^ -38 to 3.4 ^ 38 
	double f2 = 2.2e-308;	// 2.2 ^ -308 to 1.7 ^ 308 
	
	double x1 = 3;		// 3.0
	double x2 = 3.;		// 3.0
	double x3 = 3.0;	// 3.0
	
	// setprecision(3) ==> # include <iomanip>
	double var3 = 12.1234567;
	cout << setprecision(3) << var3 << endl; // 12.1
	cout << setprecision(5) << var3 << endl; // 12.123

	///////////////////////// words & letters ///////////////////////////////
	cout << "words & letters : " << endl;
	char c='a';						// -128 to 127
	string s="pUAicpc";				// array of chars
	cout << s << endl;
	s[0] = 'P';
	cout << s << endl;
	// if there is the string input/output of size 4
	// first way :
	cout<< s;
	// second way :
	for (int i = 0; i < 4; i++)
	{
		cout<< s[i]<<" ";
	}
	cout << endl;
	// functions : 
	//substr(start) OR substr(start, length)  
	cout << "the word : " << s << endl;
	cout << "sub string (0) : " << s.substr(0) << endl;
	cout << "sub string (1) : " << s.substr(1) << endl;
	cout << "sub string (0,3) : " << s.substr(0,3) << endl;
	cout << "sub string (1,3) : " << s.substr(1,3) << endl;
	// length
	cout << "word : " << s << " , the size : " << s.length() << endl;
	// sort ==> according to ASCII code
	string sorted = s;
	sort(sorted.begin(), sorted.end());
	cout << "word : " << s << " , sorted : " << sorted << endl;
	// reverse 
	string reversed = s;
	reverse(reversed.begin(), reversed.end());
	cout << "word : " << s << " , reversed : " << reversed << endl;


	//////////////////// type casting & overflow ///////////////
	cout << "type casting & overflow : " << endl;
	// auto type conversion
	double var1 = 2.3;
	int var2 = 12;
	cout << var1 + var2 << endl;	// 14.3 ==> double ==> the bigger scale
	var2 = var1;
	cout << var2 << endl;			// 2 ==> int 

	// casting : double - int 
	cout << (int)var1 << endl;		// 2 

	// casting : char - int (ASCII code)
	int i1 = 102;
	char c1 = i1;
	cout << i1 << " ==> " << c1 << "\n";		// 102 ==> f 
	cout << i1 << " ==> " << (char)i1 << "\n";	// 102 ==> f

	/*
	you are given a string >> check if this string contains any numbers 
	
	
	*/

	string str = "5482c12";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] > '9' || str[i] < '0')
		{

		}
	}


	// Overflow : assign a big value in small data type
	// INT_MAX= 2147483647
	// 
	int var4 = pow(INT_MAX, 2);
	cout << var4 << endl;			//garbage 

	///////////////////////// defined variables ///////////////////////////////
	cout << "defined variables : " << endl;
	cout << "Range of integer : " << INT_MIN << " to " << INT_MAX <<endl;

	// special chars in printing \n , \t
	cout << "line" << "\n";
	cout << "another line" << endl;
	// #define identifier replacement-text
	// can define any thing ==> #define PI 3.142

	// typedef current_name new_name ;
	// can define any data types ==> typedef long long ll;
	/*
	use double not float ... both : only when you need fractions.

	*/

	//////////////////////////////////////////////////////////////////////////
	////////////////////////////// Operators /////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	cout << "//////////////////////////////////////////////////////////////////////////" << endl << "Operators : " << endl;
	///////////////////////// Unary operators ////////////////////////////////
	cout << "Unary operators : " << endl;
	int num = 4;
	cout << num << endl;
	cout << num++ << endl;
	cout << num << endl;
	cout << --num << endl;

	///////////////////////// Binary operators ////////////////////////////////
	cout << "Binary operators : " << endl;
	// + , * , - , / 
	cout << "4 + 2 = " << 4 + 2 << endl;
	cout << "4 - 2 = " << 4 - 2 << endl;
	cout << "4 * 2 = " << 4 * 2 << endl;
	cout << "4 / 2 = " << 4 / 2 << endl;
	// modulus operator
	// the clock example 
	cout << "18 % 12 =" << 18 % 12 << endl;	// 6
	cout << "8 % 12 =" << 8 % 12 << endl;	// 8
	// negative 
	cout << "-23 % 12 =" << -23 % 12 << endl;	// -11 ==> wrong
	// to get the right result .. add 12 ... -23 % 12 = 1
	int p = 3, q = 5;
	if (p >= 0 && q > p)
	{
		cout << "TRUE\n";
	}
	else {
		cout << "FALSE\n";
	}
	int t = 4;			// 4
	cout << "t= " << t << endl;
	t += 3;// t=t+3				// 7
	cout << "t= " << t << endl;
	t -= 3;				// 4
	cout << "t= " << t << endl;
	t *= 3;				// 12
	cout << "t= " << t << endl;
	t /= 3;				// 4
	cout << "t= " << t << endl;
	t %= 3;				// 1
	cout << "t= " << t << endl;
	///////////////////////// ternary operators ////////////////////////////////
	(3 > 1) ? cout << "ternary true\n" : cout << "ternary false\n";
	(3 == 1) ? cout << "ternary true\n" : cout << "ternary false\n";
	/////////////////////////// operator precedence :////////////////////////////////
	cout << "9 - 3 % 5 * 4 = " << 9 - 3 % 5 * 4 << endl;
	



}
