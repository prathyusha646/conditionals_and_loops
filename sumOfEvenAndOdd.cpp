/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.

Sample Input 1:
1234
Sample Output 1:
6 4
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	int evenSum=0,oddSum=0;
	int rem;
	cout<<"enter n:";
	cin>>n;
	while(n!=0) {
		rem=n%10;
		if(rem%2==0) {
			evenSum=evenSum+rem;
		} else {
			oddSum=oddSum+rem;
		}
		n=n/10;
	}
	cout<<evenSum<<"\t"<<oddSum<<endl;
	return 0;
}
