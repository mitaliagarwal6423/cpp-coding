#include <iostream>
using namespace std;

int main() {
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x>100)
        {
            int y=x-10;
            cout<<y<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
	// your code goes here
	return 0;
}
