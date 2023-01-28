#include <iostream>
using namespace std;

int main() {
    int t,k;
    cin>>t;
    while(t--)
    {
        int l=0;
        cin>>k;
        for(int i=1;i<=k;i++)
        {
        if(i%2==0)
        {
            l=l-1;
        }
        else
        {
        l=l+3;
        }
        }
       
        cout<<l<<endl;
    }
	// your code goes here
	return 0;
}
