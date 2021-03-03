#include<iostream>
#include <cstring>
#include<vector>
#include<map>
#include<set>
using namespace std;

void solution1(char c[] ){
    vector<int>v;
    map<char,int>m;
    int n=strlen(c);
    for (int i = 0; i<n; i++){
        char temp=c[i];
        if(m.find(temp) == m.end()){
            v.push_back(i+1);
            m.insert({c[i],i});
        }
        else{
            for (auto it = m.begin(); it != m.end(); ++it){
                if(it->first == c[i]){
                    v.push_back((it->second)+1);
                    break;
                }                
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<c[i]<<" ";

    cout<<endl;

    or (auto &&i : v)
    {
        cout<<i <<" ";
    }f
    
}

// void solution2(char c[]){
//     set<char>s;
//     vector<int>v1;
//     int n=strlen(c);
//     for(int i=1;i<=n;i++){
//        if(s.find(c[i])==s.end()){
//             s.insert(c[i]);
//             v1.push_back(i);
//        }
//        else{
//            auto loc=s.find(c[i]);
//            int pos = loc - s.begin();
//            v1.push_back(pos);
//        }
//     }
//     for(int i=0;i<n;i++)
//         cout<<c[i]<<" ";

//     cout<<endl;
//     for(int i=1;i<=s.size();i++)
//         cout<<i<<" ";

//     cout<<endl;
// }

// void solution3(char c[]){
//     int n=strlen(c);
//     vector<int>v3;
//     for(int i=1;i<=n;i++){
//          auto it = find(v3.begin(), v3.end(), c[i]);
//          if(it == v3.end()){
//               v3.push_back(i);
//          }
//          else{
             
//              int index = it - v3.begin();
//              v3.push_back(index+1);
//          }
//     }
//     for(int i=0;i<n;i++)
//         cout<<c[i]<<" ";

//     cout<<endl;

//     for (auto &&i : v3)
//     {
//         cout<<i <<" ";
//     }
// }

int main(){
   char c[]="race car";
   solution1(c);
   return 0; 
}
