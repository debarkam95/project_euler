/* To find the sum of even fibonnaci numbers upto a given number for a set of numbers. Refer Project Euler problem 002*/

#include<iostream>
using namespace std;

int main()
{
    uint64_t *n,sum,c1,c2,c3,n1,i1;
    int t;
    cin>>t;
    n=new uint64_t [t];

    for(int i=0;i<t;i++)
        cin>>n[i];

    for(int i=0;i<t;i++)
    {
        n1=n[i];
        c1=1;
        c2=1;
        c3=c1+c2;
        sum=0;
        while(c3<n1)
        {
            if(c3%2==0) sum+=c3;
            c1=c2;
            c2=c3;
            c3=c1+c2;
        }
         if(i==t) cout<<sum;
            else
            cout<<sum<<endl;
    }
    return 0;
}
