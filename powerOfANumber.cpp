/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1

Sample Input 1 :
 3 4
Sample Output 1 :
81
*/

#include<iostream>
using namespace std;
int main() {
	int base; //x
	int power; //n;
	cout<<"Enter base and power(base^power):";
	cin>>base>>power;
	int i=1,res=1;
	while(i<=power) {
		res=res*base;
		i++;
	}
	cout<<base<<"^"<<power<<" = "<<res<<endl;
	return 0;
}
