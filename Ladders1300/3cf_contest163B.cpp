#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    int pos1,pos2;
    cin>>n>>t;
    string q;
    cin>>q;
    if (n == q.length()){
        while (t>0){
            for (int i=0;i<n-1;i++){
                if (q[i] == 'B' && q[i+1] == 'G'){
                    swap(q[i],q[i+1]);
                    i++;
                }
            }
            t--;
        }
        cout<<q;
    }else{
        return 0;
    }
    return 0;
}