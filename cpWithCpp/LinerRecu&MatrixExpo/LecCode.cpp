
// BinaryExponentiation
// ModularBinaryExponentiation

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1e9+7;

void BinaryExponentiation( ll a , ll b){
ll res=1;
cin>>a>>b;
while(b){
    if(b&1)res*=a;
    a*=a;
    b>>=1;
}
cout<<res<<endl;
}

void ModularBinaryExponentiation( ll a , ll b){
    ll res = 1;
    a=(a%mod);
    while( b){
        if(b&1) res*=(a%mod);
        a*=(a%mod);
        b>>=1;
    }
    cout<<res<<endl;
}



int main()
{
    
ll a , b;
cin>>a>>b;

// BinaryExponentiation( a , b);
ModularBinaryExponentiation( a , b );
    
}








