#include <iostream>
using namespace std;

int main() {
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x<3)
        {
            cout<<"LIGHT"<<endl;
        }
        else if(x>=7)
        
        {
            cout<<"HEAVY"<<endl;
        }
        else
        {
            cout<<"MODERATE"<<endl;
        }
    }
	// your code goes here
	return 0;
}
