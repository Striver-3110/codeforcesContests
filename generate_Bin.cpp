#include <iostream>
using namespace std;

string solve(int n){
    string ans = "";
    while(n){
        if(n&1)str += to_string(1);
        str += to_string(0);
        n>>=1;
    }
    return ans;
}

int main(){
    cout<<solve(n);
}