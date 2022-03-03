#include<iostream>
using namespace std;

int main(){
	int temp;
	int arr[] = {1,2,3,4,5,6,7,8};
	int length = sizeof(arr)/sizeof(arr[0]);
	
	//swap function
	for(int i=0,j=length-1;i<length/2;i++,j--){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	//printint array
	for(int i=0;i<length;i++){
		cout<<arr[i]<<" ";
	}
}
