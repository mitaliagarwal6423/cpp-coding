#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>y)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int diff = y-x;
            cout<<diff<<endl;
            }
    }
    
	// your code goes here
	return 0;
}
