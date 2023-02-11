#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x<=y)
        {
            int r = y/x;
            cout<<r<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
	// your code goes here
	return 0;
}
