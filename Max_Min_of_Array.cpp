#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_num=INT_MIN;
    int min_num=INT_MAX;
    for(int i=0;i<n;i++){
        // if(arr[i]>max_num){
        //     max_num=arr[i];
        // }
        max_num=max(max_num,arr[i]);
        // if(arr[i]<min_num){
        //     min_num=arr[i];
        // }
        min_num=min(min_num,arr[i]);
    }
    cout<<"Max Number is : "<<max_num<<endl;
    cout<<"Min Number is : "<<min_num<<endl;
    return 0;
}