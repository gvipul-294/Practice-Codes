//COde 
#include <iostream>
#include <vector>.
#include<algorithm>
using namespace std;



int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    vector<char> ob;
	    
	    
	    string str;
	    getline(cin,str);
	    getline(cin,str);
	    char s[str.length()+1],ans[1000];
	    int i;
	    for(i=0;i<str.length();i++){
	        s[i]=str[i];
	    }
	    s[i]='\0';
	    ob.push_back(str[0]);
	    for(i=1;i<str.length();i++){
	        if(find(ob.begin(), ob.end(), str[i])==ob.end()){ //it = find (myvector.begin(), myvector.end(), 30);
	            ob.push_back(str[i]);
	            
	        }
	    }
	    
	    for(auto it= ob.begin();it!=ob.end();it++){
	        
	       cout<<*it;
	    }
	    cout<<endl;
	    ob.clear();
	    
	    
	}
	return 0;
}
