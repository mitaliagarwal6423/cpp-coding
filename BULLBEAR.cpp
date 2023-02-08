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
            cout<<"LOSS"<<endl;
        }
        else if(x==y)
        {
            cout<<"NEUTRAL"<<endl;
        }
        else
        {
            cout<<"PROFIT"<<endl;
        }
    }
	// your code goes here
	return 0;
}
