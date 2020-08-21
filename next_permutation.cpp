#include<bits/stdc++.h>
using namespace std;
#define N 1009
typedef long long int ll ;
int main(){

    ll d;
    cin>>d;
    ll cnt=0;
    ll a1[d];
    for(ll i=0;i<d;i++)
        cin>>a1[i];
    if(d==1)
    {
        cout<<0<<endl;
        return 0;
    }
        for(ll i=0;i+1<d;i++)
        {
            if(a1[i]>a1[i+1])
            {
                cnt+=a1[i]-a1[i+1];
            }
        }
        cout<<cnt<<endl;
}
