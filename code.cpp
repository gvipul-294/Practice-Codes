#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long i,j;
	long temp_health, health=2000, temp_inj=1, max_inj=1000000; //max_inj stores maximum injury possible while temp_inj will contain solution for particular i 
	long ans=0;  // Basically ans will contain the final solution 
	long n;
	cin>>n;                // n denotes the number of employees
	int arr[n];
	for(i=0; i<n; i++){
	    cin>>arr[i];
	}
	for (i=0; i<n; i++){
	    j=i;
	    temp_inj=1;
	    temp_health=health;
	    while(j<n&&(temp_inj*arr[j])<max_inj&&(temp_health-arr[j])>0){
	     temp_inj*=arr[j];
	     temp_health-=arr[j];
	     j++;   
	    }
	    if(ans<j){
	        ans=j;
	    }
	}
	cout<<ans<<endl;
	return 0;
}
