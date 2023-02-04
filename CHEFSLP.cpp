#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,l,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>l>>x;
	    if(n==0 || l==0 || x==0 || (n-l)==0)
	    {
	        cout<<"0"<<endl;
	    }
	    else if( l < (n-l))
	    {
	        int c = l*x;
	        cout<<c<<endl;
	    }
	    else
	    {
	        int r = n-l;
	        int c = r*x;
	        cout<<c<<endl;
	    }
	}
	return 0;
}
