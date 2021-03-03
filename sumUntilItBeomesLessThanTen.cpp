#include<iostream>
#include<string>
// #include <cstdio>
#include <sstream>
using namespace std;

/* calculate sum of the numbers in a string */
int sumOfNo(string s){
    int l=s.length();
    int sum=0;    
    for(int i=0;i<l;i++){
        int j=s.at(i)- '0';
        sum=sum+j;
    }
    return sum;
}
/* recursively checks until sum gets less than 10 */
int chicks(string s){
    int sumation=sumOfNo(s);
    string s2=to_string(sumation);
    if(s2.length() == 1)
        return sumation;
    else
        return chicks(s2);
}

/* primary function that exectes in the first place */
int check(int num){
    string s=to_string(num);
    int l=s.length();
    /* base case */
    if(l==1){
        cout<<"Number is less than 10"<<endl;
        // return stoi(s);
         return num;
    }
    /* when number is contains two digits */
    return chicks(s);
}

int main(){
    int num;
    cout<<"Enter a number ... ";
    cin>>num;
    cout<<check(num);
    return 0;
}