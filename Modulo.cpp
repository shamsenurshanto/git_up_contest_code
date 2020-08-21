#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli a,b,c,d,f,r,i,k,j,l,temp,x,y,total,sum,m,n;

int main()
{
    cin>>n>>m;
    lli ar[n],br[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>ar[i];
    }
    for(i=0 ; i<n ; i++)
    {
        cin>>br[i];
    }
    sort(ar,ar+n);
    sort(br,br+n);

    lli result[n]={0};

    for(i=0 ; i<n ; i++)
    {
        result[i]=abs(ar[i]-br[i]);
       // cout<<result[i]<<" ";
    }

    for(i=0 ; i<n ; i++)
    {
        if(result[i]>0)
        {
            temp=result[i];
            break;
        }
        else temp=0;
    }

    cout<<temp<<endl;


}
