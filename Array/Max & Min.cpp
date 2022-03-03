#include<iostream>
using namespace std;

int main(){
	int max,min;
	int arr[] = {12,34,56,423,1,4345,41,532,6467,23};
	int len = sizeof(arr)/sizeof(arr[0]);
	min=max=arr[0];
	for(int i=1;i<len;i++){
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<"Max :: "<<max<<endl;
	cout<<"Min :: "<<min;
	
	return 0;
}
