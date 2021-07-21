#include<iostream>
#include<string.h>
using namespace std;
void solve()
{
    long int n=5,a,b;
    int i,f;
    //cin>>n>>a>>b;
    string c1="EQUINOX";
    char c2[100];
    for(i=0;i<n;i++)
    {
        cin>>c2;
        string  x = c2[0];
        cout<<"\n"<<x<<"\n\n";
        cout<<c1.find(x);
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
    return 0;
}