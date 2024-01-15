#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int f,a,b;
        cin>>n>>f>>a>>b;
        long long int m[n];
        for(int i=0;i<n;i++)
        {
            cin>>m[i];
        }
        long long int diff;
        long long int sum = 0;
        for(int i = n-1;i>0;i--)
        {
            diff = m[i] - m[i-1];
            if(diff*a>b)
            {
                sum+=b;
            }
            else if(diff*a<=b)
            {
                sum+=diff*a;
            }
        }
        sum+=b;
        if(sum>=f)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}