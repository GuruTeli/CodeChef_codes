#include<bits/stdc++.h>
using namespace std;
void solve()
{
         long int num;
        cin>>num;
        int arr[32];
            
          
            int i=0,r=0;
            while(num!=0)
            {
            r = num%2;
            arr[i++] = r;
            num /= 2;
            }
               int last=i-1;
               long int a=0,b=0;
               a+=pow(2,last);
               last=last-1;
             
            for(int j=last;j>=0;j--){
                          if(arr[j]==0)
                          {
                             a+=pow(2,j);
                             b+=pow(2,j);
                        }
                        if(arr[j]==1)
                        {
                            b+=pow(2,j);
                        }
                }
         cout<<a*b<<endl;
               
}
int main()
{
        int test;
        cin>>test;
       
        while(test-->0)
        {
              
            solve();
             
       }
        return 0;
}