#include "bits/stdc++.h"
#define ll long long
using namespace std;
vector<int> primes;
map<int,int>primepower;
const int MAXN=110;
int isPrime[MAXN+1];
void sieve(){
    isPrime[0] = isPrime[1] = 1;
    primes.push_back(2);
    for(int i = 3; i <= MAXN; i+=2){
        if(isPrime[i] == 0){
            primes.push_back(i);
            if(i*(ll)1*i <= MAXN){
                for(int j = i*i; j <= MAXN; j += (2*i)){
                    isPrime[j] = 1;
                }
            }
        }
    }
}
int main()
{
    int a,b,c,d,n,p,factr=0;
    sieve();
    /*for(int i=0;i<primes.size();i++)
    {
        cout<<primes[i]<<endl;
    }*/
    int t;
    cin>>t;
    for(int jj=0;jj<t;jj++){
    cin>>n;
    c=0;
    for(int i=0;i<primes.size()&& primes[i] <= n;i++)
    {
        c++;
        p=primes[i];
        factr=0;
        d=sqrt(n);
        int x=n;
        while(x)
        {
            factr+=x/p;
            x=x/p;
        }
        primepower[p]=factr;
        //cout<<factr<<endl;
       // cout<<c<<endl;
    }
    int j=0;
    c=primepower.size();
   // cout<<c<<endl;
    printf("Case %d: %d = ",jj+1,n);
    for(int i=0;i<primes.size()&&primes[i]<=(n);i++)
    {
       /// printf("Case %d: %d %d\n",j+1,primes[i],primepower[primes[i]]);
         if(primepower[primes[i]]!=0){
        printf("%d (%d)",primes[i],primepower[primes[i]]);
        if(primes[i+1]<=n&&primepower[primes[i+1]]>0)
        printf(" * ");
        else
        {
            printf("\n");
            break;
        }
         }
    }

}
}
