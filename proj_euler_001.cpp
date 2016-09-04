#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    uint64_t t,*n,k,n1;
    unsigned int i,j,c5;
    cin>>t;
    n=new uint64_t [t];
    for(i=0;i<t;i++)
        cin>>*(n+i);
    k=0;

    for(i=0;i<t;i++)
    {
        k=0;
        n[i]--;
        n1=n[i];
        n1/=3;
        n1=(n1*(n1+1))/2;
        n1*=3;
        k+=n1;

        n1=n[i];
        n1/=5;
        n1=(n1*(n1+1))/2;
        n1*=5;
        k+=n1;

        n1=n[i];
        n1/=15;
        n1=(n1*(n1+1))/2;
        n1*=15;
        k-=n1;

       if(i==t) cout<<k;
            else
            cout<<k<<endl;
    }
    return 0;
}
