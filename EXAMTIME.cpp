#include <iostream>
using namespace std;

int main() {
    int t,dsa1,toc1,dm1,dsa2,toc2,dm2;
    cin>>t;
    while(t--)
    {
        cin>>dsa1>>toc1>>dm1;
        cin>>dsa2>>toc2>>dm2;
        int t1 = dsa1+toc1+dm1;
        int t2 = dsa2+toc2+dm2;
        if(t1==t2)
        {
        if(dsa1==dsa2)
        {
            if(toc1==toc2)
            {
                if(dm1==dm2)
                {
                    cout<<"TIE"<<endl;
                }
                else
                {
                    if(dm1>dm2)
                    {
                       cout<<"DRAGON"<<endl;
                    }
                    else
                    {
                       cout<<"SLOTH"<<endl;  
                    }
                }
                 
            }
            else
            {
                if(toc1>toc2)
                {
                    cout<<"DRAGON"<<endl;
                }
                else
                {
                    cout<<"SLOTH"<<endl;  
                }
            }

        }
        else
        {
            if(dsa1>dsa2)
            {
                cout<<"DRAGON"<<endl;
            }
            else
            {
               cout<<"SLOTH"<<endl; 
            }
        }
            
        
        
        }
        else
        {
            if(t1>t2)
            {
                cout<<"DRAGON"<<endl;
            }
            else
            {
                cout<<"SLOTH"<<endl;
            }
        }
    }
	// your code goes here
	return 0;
}
