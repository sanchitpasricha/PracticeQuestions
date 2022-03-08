#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void rotate(int arr[],int len){
	int i,temp;
	for(i=len-1;i>0;i--){
		swap(arr[i],arr[i-1]);
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	rotate(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
