/*
PROBLEM
Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
*/

//REVIEW: can use sorting of Squares to improve complexity to o(n^2). Find at https://www.geeksforgeeks.org/find-pythagorean-triplet-in-an-unsorted-array/

//CODE

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
    while(t--){
        int n,i,j,k;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        int flag=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<n;k++){
                    int x=a[i];
                    int y=a[j];
                    int z=a[k];
                    if(x*x+y*y==z*z){
                        flag=1;
                        cout<<"Yes"<<endl;
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
            }
            if(flag==1){
                    break;
            }
        }
        if(flag==0){
            cout<<"No"<<endl;
        }
        
        
    }
	
	return 0;
}
