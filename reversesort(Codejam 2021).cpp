#include<bits/stdc++.h>
using namespace std;
int sSort(vector<int> v,int N)
{
         int min,ans=0;
         for(int i=0;i<N-1;i++)
         {
             min=i;
             for(int j=i+1;j<N;j++)
             {
                    if(v[j]<v[min])
                    {
                        min=j;
                    }
             }
             reverse(v.begin()+i,v.begin()+min+1);
             ans+=min-i+1;
         }
         return ans;
}
int main()
{

    int test;
    cin>>test;
    int N;
    for(int print=1;print<=test;print++)
    {
           cin>>N;
           vector<int> v;
           int val;
           for(int i=0;i<N;i++)
           {
               cin>>val;
               v.push_back(val);
           }
           int res=sSort(v,N);
           cout<<"Case #"<<print<<": "<<res<<endl;


    }
    return 0;
}