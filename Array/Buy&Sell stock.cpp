#include<iostream>
using namespace std;

int profit_chk(int buy,int sell){
	if(buy>=sell){
		cout<<"0";
	}
	else if(sell>buy){
		cout<<sell-buy;
	}
}

int main(){
	int arr[] = {7,1,5,3,6,4,2,10,3};
	int min=arr[0];
	int flag=0,max;
	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len;i++){
		if(min>arr[i]){
			min = arr[i];
			flag = i;
		}
	}
	max=arr[flag];
	for(int i=flag;i<len;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	profit_chk(min,max);
}
