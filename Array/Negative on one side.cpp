#include<iostream>
using namespace std;

int main(){
	int temp,i,j=0;
	int arr[] = {-11,2,22,-13,-33,-24,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len;i++){
		if(arr[i]<0){
			if(i!=j){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
	}
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
}
