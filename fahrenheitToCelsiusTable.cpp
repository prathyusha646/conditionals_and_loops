/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Sample Input 1:
0 
100 
20
Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37
*/

#include<iostream>
using namespace std;
int main() {
	int s,w,e;
	int celsius;
	cout<<"Enter Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W)"<<endl;
	cin>>s>>e>>w;
	while(s<=e) {
		celsius=(s-32)*0.5555556;
		cout<<s<<"\t"<<celsius<<endl;
		s=s+w;
	}
	return 0;
}
