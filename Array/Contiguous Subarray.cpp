#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,-2,-1,-8,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	int sum=0,sub=arr[0];
	for(int i=0;i<len;i++){
		sum+=arr[i];
		if(sum>sub){
			sub=sum;
		}
		if(sum<0){
			sum=0;
		}
	}
	cout<<sub;
}
