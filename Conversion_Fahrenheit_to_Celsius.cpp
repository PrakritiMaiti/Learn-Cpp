#include<iostream>
using namespace std;

int main(){
    int minfar,maxfar,step,c;
	cin>>minfar>>maxfar>>step;
	for (int i=0;i<=(maxfar/step);i++){
		int c=((minfar-32)*5/9);
		cout<<minfar<<" "<<c<<endl;
		minfar+=step;
	}
    return 0;
}