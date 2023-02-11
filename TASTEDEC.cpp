#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if( 2 * x > 5 * y)
        {
            cout<<"Chocolate"<<endl;
        }
        else if( 2 * x == 5 * y)
        {
            cout<<"Either"<<endl;
        }
        else
        {
            cout<<"Candy"<<endl;
        }
    }
	// your code goes here
	return 0;
}
