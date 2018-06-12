
/*
PROBLEM Given n non-negative integers in array representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
For example:
Input:
3
2 0 2
Output:
2
Structure is like below
|  |
|_|
We can trap 2 units of water in the middle gap.

*/

// REVIEW : See solution https://www.geeksforgeeks.org/trapping-rain-water/


//CODE

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n,i,j,sol=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int start = a[0];
	    int index=1;
	    
	    
	    while(index<n){
	        int maxTemp=a[index], maxIndex=index;
	        int tempIndex =index;
	        while(tempIndex<n&&a[tempIndex]<start){
	            sol+=start-a[tempIndex];
	            if(a[tempIndex]>maxTemp){
	               maxTemp=a[tempIndex]; 
	               maxIndex=tempIndex;
	            }
	            tempIndex++;
	        }
	        
	        if(tempIndex==n){
	            for(i=index;i<n;i++){
	                sol=((sol-start)+a[i]);
	            }
	            //cout<<maxTemp<<endl;
	            for(i=index;i<maxIndex;i++){
	                sol=sol+maxTemp-a[i];
	            }
	            start=maxTemp;
	            index=maxIndex+1;
	        }
	        
	        else{
	            start = a[tempIndex];
	            index=tempIndex+1;
	        }
	        
	        
	    }
	    
	    cout<<sol<<endl;
	    
	}   
	return 0;
}
