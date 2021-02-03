/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow � pf
where :
	hra   = 20% of basic
	da    = 50% of basic
	allow = 1700 if grade = �A�
	allow = 1500 if grade = �B�
	allow = 1300 if grade = �C' or any other character
	pf    = 11% of basic.
	
Sample Input 1 :
10000 A
Sample Output 1 :
17600
*/

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int basic;
	char grade;
	int allow;
	cout<<"Enter basic:";
	cin>>basic;
	cout<<"Enter grade:";
	cin>>grade;
	if(grade=='A') {
		allow=1700;
	} else if(grade=='B') {
		allow=1500;
	} else {
		allow=1300;
	}
	double hra=0.2*basic;
	double da=0.5*basic;
	double pf=0.11*basic;
	double totalSal=basic+hra+da+allow-pf;
	int result=round(totalSal);
	cout<<"Total Salary is:"<<result<<endl;
	return 0;
}
