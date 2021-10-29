#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c,d;
	cin>>a>>b>>c;
	d=(b*b-4*a*c);
	if(d>0){
		int m=(-b+sqrt(d))/2*a;
		int n=(-b-sqrt(d))/2*a;
		cout<<"Real and Distinct"<<endl;
		cout<<n<<" "<<m;
	}else if(d==0){
		int o=(-b)/2*a;
		cout<<"Real and Equal"<<endl;
		cout<<o<<" "<<o;
	}else{
		cout<<"Imaginary"<<endl;
	}
    return 0;
}