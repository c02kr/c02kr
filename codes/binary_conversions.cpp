#include <iostream>
using namespace std;
int main()
{
    int i , j , n=10 , rem;
    //cin>>n;
    int bin[10];
    for(i=0 ; n!=0;i++)
    {
        rem =n%2;
        n=n/2;
        rem = bin[i];
        cout<<"array contains - "<<bin[j]<<"\t"<<"rem is "<<rem<<"\n"<<"n is "<<n;

    }
    //for(j=i-1 ;j>0;j--)
    //{
    //    cout<<bin[j]<<"\t";
    //}
    return 0;
}