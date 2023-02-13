#include <iostream>
using namespace std;

int main() {
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int result = a+b;
        if(result%2==0)
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
