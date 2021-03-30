#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n,h,x;
        cin>>n>>h>>x;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
              cin>>v[i];
        }
        sort(v.begin(),v.end());
        int flag=0;
        for(int i=v.size()-1;i>=0;i--)
        {
                if(x+v[i]>=h)
                {
                    flag=1;
                    break;
                }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
        return 0;
}