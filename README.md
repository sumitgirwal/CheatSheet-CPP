# CheatSheet-CPP
Quick CPP Codes
# Cheat-Sheet
CPP Cheat Sheet for CP

#### 1. 10^9 long long
#### 2. Sum of 1 to n even & odd numbers
```bash
Sum of even : (n*n)
Sum of odd : (n*(n+1))
```

#### 3. Find sum of all pair in array
```bash
Using map : ans += (i.second*(i.second - 1))/2;
```
#### 4. COOL NAME CODECHEF
```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
     string s; cin>>s;
     sort(s.begin(), s.end());
     int sum=0;
     for(int i=0; i<s.size(); i++){
       int pos = int(s[i])-96;
       int ans = pos*(i+1);
       sum += ans;
      }
      cout<<sum<<endl;
    }
    return 0;
}
```
#### 5. Non-Negative Product
```cpp
#include<bits/stdc++.h>
#define ll long long
#define int ll
using namespace std;

int32_t main()
{
    int t,n,x;
    cin >> t ;
    while(t--) {
        cin >> n;
        bool flag = false;
        int count = 0;
        for(int i=0; i<n; i++) {
            cin >> x ;
            if(x<0) {
                count++;
            }
            if(x==0) {
                flag = true;
            }
        }
        if(flag) {
            cout << 0 << endl;
        }
        else if (count%2==0) {
            cout << 0 << endl;
        }
        else {
            cout << 1 << endl;
        }
    }
    return 0;
}

```
#### 6. Two Different Palindromes
```cpp
#include<iostream>
using namespace std;

int main()
{
    int t,x,y;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        if( (x%2!=0) && (y%2!=0) ) {
            cout << "NO" << endl;
        }
        else if ( (x==1) || (y==1) ) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}
```
#### 7. Even Splits
```cpp
#include<bits/stdc++.h>
#define ll long long
#define int ll
using namespace std;

int32_t main()
{
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        string s;
        cin >> s;
        if((s[0]=='1') && (s[1]=='0') && s.size()==2) {
            cout << s << endl;
        }
        else {
            sort(s.begin(),s.end());
            cout << s << endl;
        }
    }
}
```

###### Stick length part
'''bash
for _ in range(int(input())):
    n, k = map(int, input().split())
    print(1 if n%k > 0 else 0)
'''

for _ in range(int(input())):
    n = int(input())
    if n <= 3:
        print(-1)
        continue
    print(*range(2, n+1, 2), *range(1, n+1, 2))


#### Resources
- [Learn CP](https://github.com/hkirat/Algorithmic-Resources)
- [Learn Sorting](https://lamfo-unb.github.io/2019/04/21/Sorting-algorithms/)

#### 1. 10^9 long long
#### 2. Sum of 1 to n even & odd numbers
```bash
Sum of even : (n*n)
Sum of odd : (n*(n+1))
```

#### 3. Find sum of all pair in array
```bash
Using map : ans += (i.second*(i.second - 1))/2;
```
#### 4.
#### 5.Small fact
```cpp
// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using namespace std;
using namespace boost::multiprecision;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cpp_int fact=1;
        for(int i=n;i>0;i--)
         fact=fact*i;
        cout<<fact<<endl; 
    }
    
    return 0;
}
```
##### 6. Always use string to input digits
```cpp
#include <iostream>
#include <string>
using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int d; string n; 
        cin>>d; cin>>n;  
        bool flag=false;
        for(int i=0;i<d;i++){   
            if(n[i]=='5' ||n[i]=='0')
            { flag=true;
                break;
            }
        }       
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;  
    }
    return 0;
}
```

###### long long
```bash
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define int ll
int32_t main() {
    int t; cin >> t;
    while (t--) {
            int n; cin>>n;
            vector<int> a(n);
            for(int i=0;i<n;i++) cin>>a[i];
            int count=0;
            int temp=0;
            for(int i=0;i<n;i++){
                int x; cin>>x;
                if(x<=(a[i]-temp)) count++;
                temp = a[i];
            }
            cout<<count<<endl;
    }
    return 0;
}

```

Input:
    string bin_string = "10101010";

    Function call:
    stoi(bin_string, 0, 2);

    Output:
    170
````

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    // input
    string str;
    getline(cin,str);
    
    int t = str.size();
    map<char,int> mp;
    
    // processing
    for(int i=0; i<t; i++) {
        if(str[i]!=' ') {
            mp[str[i]]++;
        }
    }
    
    //output
    for(auto i:mp) {
        cout << i.first << " = " << i.second << " ";
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // input
    string str;
    getline(cin,str);
    
    int n = str.size();
    string final="";
    string temp="";
    
    // processing
    for(int i=0; i<n; i++){
        
        if(str[i]==' '){
            final = " "+temp+final;
            temp = "";
        }else{
            temp = temp+str[i];
        }
    }

    if(temp != " "){
        final = " "+temp+final;
    }

    // output    
    cout<<final<<endl;

    return 0;
}
