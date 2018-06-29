//Prob:-Given a string, find length of the longest substring with all distinct characters.  For example, for input "abca", the output is 3 as "abc" is the longest substring with all distinct characters.

//Can See Editorial:- https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/

//Code

#include<unordered_map>
using namespace std;

int main() {
	//code
	
    int t;
    cin>>t;
    while(t--){
        unordered_map<char, bool> mymap;
        char s[10000];
	    string str;
	    cin>>str;
	    int i,j;
	    for(i=0;i<str.length();i++){
	        s[i]=str[i];
	    }
	    s[i]='\0';
        
        int max=0;
        //int sol[str.length()][str.length()];
        
        for(i=0;i<str.length()-1;i++){
            int temp=1;
            mymap[str[i]]=true;
            for(j=i+1;j<str.length();j++){
                if(mymap.find(str[j])==mymap.end()){
                    temp++;
                    mymap[str[j]]=true;
                    
                }
                else{
                    if(temp>max){
                        max=temp;
                    }
                    mymap.clear();
                    mymap[str[j]]=true;
                    temp=1;
                }
                
            }
            if(temp>max){
                max=temp;
            }
            mymap.clear();
            
        }
        cout<<max<<endl;
        
        
    }
    
	return 0;
}
