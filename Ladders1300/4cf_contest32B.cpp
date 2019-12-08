#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    string a = "";
    for (int i=0;i<n;i++){
        if (s[i] == '.'){
            a += '0';
        }else if (s[i] == '-'){
            if (s[i+1] == '.'){
                a += '1';
            }else if (s[i] == '-'){
                a += '2';
            }
            i++;
        }
    }
    cout<<a;
    return 0;
}