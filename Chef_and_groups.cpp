#include<bits/stdc++.h>
using namespace std;
int main()
{
           int test,ln=0,count1=0;;
           cin>>test;
           string s="";
           while(test-->0)
           {
                cin>>s;
                ln=s.size();
                count1=0;
                for(int i=0;i<ln;i++)
                {
                       if(s[i]=='1')
                       {
                           count1++;
                           i++;
                           for(int j=i;j<ln;j++)
                           {
                               if(s[j]=='0')
                               {
                                   break;
                               }else i++;
                               
                           }
                       }
                }
                cout<<count1<<endl;
                }
                return 0;

}