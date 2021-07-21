#include<iostream>
using namespace std;
int solve()
{
    int i,n,w,wr;
    int wn[100];
    cin>>n>>w>>wr;
    for(i=0;i<n;i++)
    {
        cin>>wn[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<wn[i];
    }
}
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        solve();
    }
}