#include<iostream>
using namespace std;
#define cn cin>>
#define ct cout<<
#define long long int

int main(){
    int n;
    cin >> n;
    while(n){
        if(n%2 == 0){
            n/=2;
        }
        else n = n*2+1; 
        cout<< n << "→";
    }
}
