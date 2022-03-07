#include<iostream>
using namespace std;

int main(){
	int a[] = {1,2,3,4,5};
	int b[] = {1,2,6,7,8,9};
	int i=0,j=0;
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	while(i<n && j<m){
		if(a[i]<b[j]){
			cout<<a[i++]<<",";
		}
		else if(b[j]<a[i]){
			cout<<b[j++]<<",";
		}
		else{
			cout<<a[i++]<<",";
			j++;
		}
	}
	
	while(i<n){
		cout<<a[i++]<<",";
	}
	while(j<m){
		cout<<b[j++]<<",";
	}
	
}
