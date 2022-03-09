#include<iostream>
using namespace std;

int main(){
	int arr[] = {1, 3, 5, 8, 1, 2, 6, 0, 6, 8, 9};
	int len = sizeof(arr)/sizeof(arr[0]);
	int hold,hops=0;
	int i=0;
	while(i<len){
		if(i >= len-1){
			break;
		}
		hold = arr[i];
		if(hold == 0){
			hops=-1;
			break;
		}
		i+=hold;
		hops++;
	}
	cout<<"hops :: "<<hops;
}
