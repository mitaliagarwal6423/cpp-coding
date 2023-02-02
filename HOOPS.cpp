#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<(n/2)+1<<endl;   
        }
    }
	// your code goes here
	return 0;
}
