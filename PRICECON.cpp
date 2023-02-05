#include <iostream>
using namespace std;

int main() {
     int t,n,k;
     cin>>t;
     while(t--)
     {
         cin>>n>>k;
         int p[n];
         int s1=0,s2=0;
         for(int i=0;i<n;i++)
         {
             cin>>p[i];
             s1 = s1+p[i];
             if(p[i]>k)
             {
                 p[i]=k;
                 s2 = s2+p[i];
                 
             }
             else
             {
             s2= s2+p[i];
             }
            
         }
          cout<<s1-s2<<endl;
         
     }
	// your code goes here
	return 0;
}
