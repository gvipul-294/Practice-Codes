/*
Problem:

Given an array, reverse every sub-array formed by consecutive k elements.

*/

/*
Just added temp array to reverse for understanding, otherwise no need of that and thus can easily make O(1) of auxilliary space.
*/


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
	    for(i=0;i<n;i+=k){
	        int temp[k];
	        int g=0;
	        for(j=i;j<i+k&&j!=n;j++){
	            temp[g++]=a[j];
	        }
	        if(j!=n){
	            int size=k;
	            int start=0;
	            int end=size-1;
	            while(start<=end){
	                int made= temp[end];
	                temp[end]=temp[start];
	                temp[start]=made;
	                start++;
	                end--;
	            }
	          
	        }
	        
	        else{
	            int size=j-i;
	            int start=0;
	            int end=size-1;
	            while(start<=end){
	                int made= temp[end];
	                temp[end]=temp[start];
	                temp[start]=made;
	                start++;
	                end--;
	            }
	            
	        }
	        int l;
	        for(l=i;l<j;l++){
	            a[l]=temp[l-i];
	        }
	        
	    }
	    for(i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	
	
	
	
	return 0;
}
