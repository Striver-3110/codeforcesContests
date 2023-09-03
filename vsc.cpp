using namespace std;
#include<vector>
#include <iostream>

int main(){
    vector <long long int> v;
    for(int o = 0 ; o < 20 ; o++){
        v.push_back(o+10);
    }
    for(auto it = v.begin();it!=v.end()-1 ;it++)cout<<*it<<" ";
    cout<<endl;

    for(auto it = v.begin();it!=v.end()-1 ;it++)
        {
            if(*it == 12){
                v.erase(it);
                // v.erase(it);
                // it--;
                cout<<*it<<endl;
            }
            else{
                // cout<<*it<<" ";
            }
        }
}

