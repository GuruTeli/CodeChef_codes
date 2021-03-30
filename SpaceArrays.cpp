#include<bits/stdc++.h>
using namespace std;
int main()
{

      long int test;
      cin>>test;
      
      while(test-->0)
      {
          long int N,val;
           cin>>N;
           vector<int> p,arr;
           for(int i=0;i<N;i++)
           {
               cin>>val;
               arr.push_back(val);
               p.push_back(i+1);
               
           }
           sort(arr.begin(),arr.end());
            int count1=0,fl1=0;
           for(int i=0;i<N;i++)
           {
                    
                     if(arr[i]>p[i])
                     {
                         fl1=1;
                         break;
                     }
                     else if(arr[i]==p[i])
                     {
                         continue;
                     }else
                      count1=count1+abs(arr[i]-p[i]);
                    
            }
           
           if(count1%2==0 || fl1)
           {
               cout<<"Second"<<endl;
           }else cout<<"First"<<endl;


      }
      return 0;
}
