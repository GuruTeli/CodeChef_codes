#include<bits/stdc++.h>
using namespace std;
void fun()
{    string s;
    getline(cin,s);
    vector<string> v;
    string s1="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
           s1+=s[i];
        }
       else 
        {
           v.push_back(s1);
           s1=""; 
        }
    }
    v.push_back(s1);

    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{

        //  string s;
        //  cin>>s;
        //  cout<<"Lenght="<<s.length()<<endl;
        //  cout<<"Size="<<s.size()<<endl;
    //      string f,b;
    //      for(int i=1;i<1+s.length();i++)
    //      {
    //          f+=s[i%s.length()];
    //      }
    //      for(int i=s.length()-1;i<2*s.length()-1;i++)
    //      {
    //          b+=s[i%s.length()];
    //      }
    //      cout<<f<<endl;
    //      cout<<b<<endl;
    //  cout<<(f==b);
    // int N;
    // cin>>N;
    // int dp[N][2];
    // cout<<sizeof(dp)<<endl;
    
    
        fun();
    
}