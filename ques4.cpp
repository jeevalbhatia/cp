#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      long long int a[n],b[m];
      for(int r=0; r<n; r++)
      {
        cin>>a[r];
      } 
     
      for(int q=0; q<m; q++)
      {
        cin>>b[q];
        b[q]=(-1)*b[q];
      } 
      
      sort(a,a+n);
      sort(b,b+m);
      long long int diff=0;
      int k=0,j=m-1,l=0,count=0,i=n-1;
      while(count<n)
      {
        if(max(abs(a[i]+b[k]),abs(a[i]+b[j]))>=max(abs(a[l]+b[k]),abs(a[l]+b[j])))
        {
            diff=diff+max(abs(a[i]+b[k]),abs(a[i]+b[j]));
            count++;
            
            if(abs(a[i]+b[k])>=abs(a[i]+b[j]))
            {
                k++;
            }
            else
            {j--;}
            
            i--;
        }
        else
        {
           diff=diff+max(abs(a[l]+b[k]),abs(a[l]+b[j]));
            count++;
            
            if(abs(a[l]+b[k])>=abs(a[l]+b[j]))
            {
                k++;
            }
            else
            {j--;}
            
            l++;
        }
      } 
    cout<<diff<<endl;
        
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}
