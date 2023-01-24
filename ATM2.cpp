#include <iostream>
using namespace std;

int main() { 
    int t,n,a,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            if(k>a)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
                a=a-k;
            }
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
