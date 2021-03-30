#include<bits/stdc++.h>
using namespace std;
int main()
{

         string  s;
         cin>>s;
         int ln=s.size();
         string forward="",backward="";
         char c;
        
         for(int i=1;i<ln;i++)
         {
             
             forward+=s[i];
         }
         forward+=s[0] ;
          backward+=s[ln-1];
         for(int i=0;i<ln-1;i++)
         {
             backward+=s[i];
         }
    
         if(forward==backward)
          cout<<1<<endl;
          else cout<<0<<endl;
         return 0;

}