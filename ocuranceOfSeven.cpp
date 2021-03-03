#include<iostream>
#include <string> 
using namespace std;

/*checks if a perticular number is present in array or not */
int main(){
    int arr[]={2,6,4,5,2,97};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     string s=to_string(arr[i]);
    //     int found(s.find('7'));
    //     if(found<s.length()){
    //         cout<<"Boom";
    //         return 0;
    //     }
    // }
    // cout<<"Not Found !!!";


    string str="";
    for(auto i=0;i<n; i++)
        str += to_string(arr[i]); 
    //cout<<str<<endl;
    int loc=str.find('7');
    if(loc<str.length())
        cout<<"***BOOM***";
    else
        cout<<"Not present !!!!";    
    return 0;
}