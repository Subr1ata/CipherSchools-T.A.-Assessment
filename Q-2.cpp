#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,money,k;
    cout<<"Enter n:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter money:";
    cin>>money;
    cout<<"Enter k:";
    cin>>k;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=money && money%a[i]==0)
        cnt++;
    }
    if(cnt==k)
    cout<<"Right"<<endl;
    else
    cout<<"Wrong"<<endl;
}
