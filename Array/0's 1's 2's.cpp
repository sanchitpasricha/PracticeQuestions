#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int arr[] = {0,2,1,1,0,1,2,0,1,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	int l=0,mid=0,h=len-1;
	while(mid<=h){
		switch(arr[mid]){
			case 0:{
				swap(arr[l++],arr[mid++]);
				break;
			}
			case 1:{
				mid++;
				break;
			}
			case 2:{
				swap(arr[mid],arr[h--]);
				break;
			}
		}
	}
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
