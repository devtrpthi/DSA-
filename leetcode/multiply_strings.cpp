#include<bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2){
    int n1(0),n2(0);
    
    for(int i=0;i<num1.length();i++)
    {
        int a=num1[i]-'0';
        n1=n1*10+a;
    }

    for(int i=0;i<num2.length();i++)
    {
        int a=num2[i]-'0';
        n2=n2*10+a;
    }
    
    int mul=n1*n2;
    string ans;

    // while(mul>0){
    //     int dig=mul%10;
    //     char c=(char)dig;
    //     ans.push_back(c);
    //     mul/=10;
    // }
    ans = to_string(mul);
    return ans;
}

int main(){
    string num1,num2;
    cin>>num1>>num2;
    cout<<multiply(num1,num2)<<endl;

    return 0;
}