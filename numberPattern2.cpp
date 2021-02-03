/*
Print the following pattern
Pattern for N = 4
       1
     23
   345
 4567
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i=1;
	while(i<=n) {
		int space=1;
		while(space<=n-i) {
			cout<<" ";
			space=space+1;
		}
		int col=1;
		int j=i;
		while(col<=i) {
			cout<<j;
			j++;
			col++;
		}
		cout<<endl;
		i++;
	}
	return 0;
	/*int n;  Alternate Code
    cin>>n;
    int k;
    int i=1;
    int val=1;
    int j;
    while(i<=n) {
        k=1;
        while(k<=n-i) {
            cout<<" ";
            k=k+1;
        }
        j=i;
        while(j<=val) {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        val=val+2;
    }*/
}
