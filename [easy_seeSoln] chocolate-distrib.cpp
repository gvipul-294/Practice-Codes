/*
PROBLEM
Given an array A[] of N integers where each value represents number of chocolates in a packet. Each packet can have variable number of chocolates. There are m students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students in packet with maximum chocolates and packet with minimum chocolates is minimum.


*/

//SEE SOLN https://www.geeksforgeeks.org/chocolate-distribution-problem/

//CODE
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n,i,m,j,min=99999;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>m;
	    sort(a,a+n);
	    
	    for(i=0;i<=n-m;i++){
	        if(a[i+m-1]-a[i]<min){
	            min=a[i+m-1]-a[i];
	        }   
	    }
	    
	    cout<<min<<endl;
	    
	}
	return 0;
}
