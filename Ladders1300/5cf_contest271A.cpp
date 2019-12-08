#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    int x = 1;
    int arr[4];
    cin>>n;
    n+=1;
    while (true){
        x = 0;
        temp = n;
        for (int i=0;i<4;i++){
            arr[i]=temp%10;
            temp=temp/10;
        }
        sort(arr,arr+4);
        for (int i=0;i<3;i++){
            if (arr[i] == arr[i+1]){
                x++;
            }
        }
        if (x==0){
            break;
        }else{
            n++;
        }
    }
    cout<<n;
    return 0;
}