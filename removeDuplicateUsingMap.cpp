#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    vector <int> v{2,2,3,2,5,3,3,5,2,3};
    /* map<key,value> map_name */
    map<int,int> mp;
    int k=0;
    for (auto &&i : v){
        if(mp.find(i) == mp.end())
        mp.insert({i,k++});
    }
    for (auto i = mp.begin(); 
         i != mp.end(); i++){
        cout<< i->first<<" ";
    }
    return 0;
}