// Average permutations code chef
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        vector<int> a;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
                a.insert(a.begin(),i);
            else
                a.insert(a.end(),i);
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
	    
	}
	return 0;
}
   
