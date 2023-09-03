#include <bits/stdc++.h>
using namespace std;
#define cn cin>>
#define ct cout<<
#define cys cout<<"YES"<<endl
#define cno cout<<"NO"<<endl

bool solve(){
    string m,w;
    cn m>>w;
    int i = 0, j = 0;
    int lenm = m.length(),lenw = w.length();
    if(lenm<lenw){
        while(i<lenm && j<lenw){
            if(m[i]==w[j]){
                i++;
                j++;
            }
            else
            j++;
        }
        if(i == lenm)return true;
    else return false;

    }
    else {
        while(i<lenw && j<lenm){
            if(w[i]==m[j]){
                i++;
                j++;
            }
            else
            j++;
    }
    if(i == lenw)return true;
    else return false;
    }
    
}

int main() {
	// your code goes here
	int t;
	cn t;
	while(t--){
	    if(solve()){
	        cys;
	    }
	    else cno;
	}
	
	return 0;
}
