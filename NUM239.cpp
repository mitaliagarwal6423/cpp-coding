#include <iostream>
using namespace std;

int main() {
    int t,l,r;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
           int a = i%10;
           
           if(a==2 || a==3 ||a==9)
           {
           count++;
           }
          
        }
         cout<<count<<endl;
        
    }
	// your code goes here
	return 0;
}
