/*
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
*/


/*
ASCII : (48-57) -> numbers(0-9)
		(65-90) -> Capital Letters(A-Z)
		(97-122) -> Small Letters(a-z)
*/

#include<iostream>
using namespace std;
int main() {
	int ch;
	cout<<"Enter an ASCII number"<<endl;
	cin>>ch;
	if(ch >= 65 && ch <= 90) {
		cout<<"1"<<endl;
	} else if(ch>=97 && ch<=122) {
		cout<<"0"<<endl;
	} else {
		cout<<"-1"<<endl;
	}
	return 0;
}
