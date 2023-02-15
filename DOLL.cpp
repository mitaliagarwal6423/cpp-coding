#include <iostream>
using namespace std;

int main() {
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n>>k;
        int h[n];
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            if(h[i]>k)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
