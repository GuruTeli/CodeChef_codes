#include<bits/stdc++.h>
using namespace std;
int main()
{
     int N;
     cin>>N;
     vector<int> v;
     int val;
     long sum=0;
     for(int i=0;i<N;i++)
     {
         cin>>val;
         v.push_back(val);
      }
     int count1=0;
     vector<long> ans;
     for(int i=1;i<N;i++)
     {
         sum=v[i-1]*v[i];
         ans.push_back(sum);
     }
     for(int i=0;i<ans.size();i++)
     {
         count1=0;
         for(int j=0;j<N;j++)
         {
               if(ans[i]>v[j])
               {
                   count1+=1;
               }
         }
         if(count1==N)
         {
             cout<<i<<endl;
         }
     }

      return 0;
}