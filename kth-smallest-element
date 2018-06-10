
/*
PROBLEM

Given an array and a number k where k is smaller than size of array, 
the task is to find the k’th smallest element in the given array. 
It is given that all array elements are distinct.

*/

//REVIEW: O(n+klogn) using min-heap https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

//CODE
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n,k,i,j;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    
	    int index,val;
	    while(k--){
        
        int smallest=INT_MAX;
        
        for(i=0;i<n;i++){
	        if(a[i]<smallest){
	            smallest=a[i];
	            index=i;
	        }
	    }
	    val=a[index];
        a[index]=INT_MAX;
        
	    }
	    cout<<val<<endl;
	    
	}   
	 
	return 0;
}
