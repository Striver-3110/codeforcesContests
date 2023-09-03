#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==50){
	        cout<<0<<endl;
	    }
	    else if(n>50){
	        int temp = n;
	        int cnt = 0;
            if(temp==51)cout<<2<<endl;
            else if(temp==52)cout<<4<<endl;
            else{
	        while(1){
	            cnt++;
	            temp -= 3; 
                if((temp == 50) || (temp == 51) || (temp==52))break;
	        }
	        if(temp==51)
	        {
	            cnt+=2;
	        }
	        else if(temp==52){
	            cnt+=4;
	        }
	        cout<<cnt<<endl;
            }
	    }
	    else if(n<50){

	        int temp = n;
	        int cnt = 0;
            if(temp == 49){
                cout<<3<<endl;
            }
	        while(1){
	            cnt++;
	            temp += 2; 
                if((temp==50) || (temp==49))break;
	        }
	        if(temp==49)
	        {
	            cnt+=3;
	        }
	        cout<<cnt<<endl;
	}
}
	return 0;
}
