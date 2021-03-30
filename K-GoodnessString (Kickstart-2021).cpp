#include<bits/stdc++.h>
using namespace std;
int main()
{

           long long int test;
           cin>>test;
        
           for(int m=1;m<=test;m++)
            {
                long long N,K,count1=0;
                 string s;
                cin>>N>>K;
                cin>>s;
                long long int ln=N-1;
                for(int i=0;i<N/2;i++)
                {
                      if(s[i]!=s[ln--])
                         count1++;
                }
              cout<<"Case "<<"#"<<m<<": "<<abs(K-count1)<<endl;
          }
           return 0;
}