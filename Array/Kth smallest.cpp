//finding a kth smallest element
#include<iostream>
using namespace std;

int main(){
	int arr[] = {54,18,5845,185,6,100,112};
	int min,flag=0,k,j;
	cout<<"Enter k :: ";
	cin>>k;
	int len = sizeof(arr)/sizeof(arr[0]);
	do{
		min = arr[0];
		for(int i=1;i<len;i++){
			if(min>arr[i]){
				min=arr[i];
				j=i;
			}	
		}
		arr[j]=INT_MAX;
		flag++;
	}while(flag != k);
	
	cout<<min;
}
