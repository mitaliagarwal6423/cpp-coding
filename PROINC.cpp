#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int z = x-y;
        int s = x + (x * 0.1);
        int result = s-z;
        cout<<result<<endl;
    }
	// your code goes here
	return 0;
}
