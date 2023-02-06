#include<iostream>
using namespace std;
   int sumOfArray(int arr[],int n){
   	if(n==0){
   		return 0;
	   }
	   int sum= arr[n-1]+sumOfArray(arr,n-1);
	   return sum;
   }
  int main(){
  	int n;
  	cin>>n;
  	int arr[n];
  	for(int i=0;i<n;i++){
  		cin>>arr[i];
	  }
	  int s=sumOfArray(arr,n);
	  cout<<s;
	  return 0;
  	
  }
  
