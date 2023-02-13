#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int r = n* 60;
        int ans = r/20;
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
