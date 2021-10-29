#include<iostream>
using namespace std;

 int main () {
	int n1,n2,n3,n4,n5;
	cin>>n1>>n2>>n3>>n4>>n5;

	if(n1>n2&&n1>n3&&n1>n4&&n1>n5)
		cout<<n1;
	else if(n2>n3&&n2>n4&&n2>n5)
		cout<<n2;
	else if(n3>n4&&n3>n5)
		cout<<n3;
	else if(n4>n5)
		cout<<n4;
	else
		cout<<n5;
    return 0;
}