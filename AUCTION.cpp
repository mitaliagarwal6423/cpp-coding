#include <iostream>
using namespace std;

int main() {
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            cout<<"Alice"<<endl;
        }
        else if(b>a && b>c)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Charlie"<<endl;
        }
    }
	// your code goes here
	return 0;
}
