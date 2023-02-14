#include <iostream>
using namespace std;

int main() {
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        int re = x*y;
        if(n<=re)
        {
            cout<<"YES"<<endl;
        }
        else
        {
          cout<<"NO"<<endl;  
        }
    }
    
	// your code goes here
	return 0;
}
