#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,a;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    cin>>x>>y>>a;
	if(a>=x && a<y)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
	}
	return 0;
}
