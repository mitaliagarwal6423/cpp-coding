#include <iostream>
using namespace std;

int main() {
    int t,n;
    
    cin>>t;
    while(t--)
    {
        
      int count=0;
      cin>>n;
      char s[n];
      for(int i=0;i<n;i++)
      {
          
          cin>>s[i];
      }
      for(int i=0;i<n;i++)
      {
          if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
          {
              if(count<4)
              {
                  count=0;
              }
          }
          else
          {
              count++;
          }
      }   
     
      if(count>=4)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
      }
      
    }
    
	// your code goes here
	return 0;
}
