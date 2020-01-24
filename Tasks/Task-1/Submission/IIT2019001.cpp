#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll mex=1e8;
vector<bool> arr(mex+1,true);

int main()
{
    int l,r;
    
    cin>>l>>r;
    ll cnt=0;
    arr[0]=false;
    arr[1]=false;
    for(ll i=2;i*i<mex+1;i++){
        if(arr[i]==true){
            for(ll j=i*i;j<mex+1;j+=i){
                arr[j]=false;
            }
        }
    }
    for(ll i=l;i<=r;i++){
        if(arr[i]==true) cnt++;
    }
    cout<<cnt<<endl;
}
