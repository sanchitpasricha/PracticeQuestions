#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,1,1,1};
	int k = 2;
	int flag=0;
	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len;i++){
		for(int j = i+1;j<len;j++){
			if(arr[i] + arr[j] == k){
				flag++;
			}
		}
	}
	cout<<"Pairs = "<<flag;
}
