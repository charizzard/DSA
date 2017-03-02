#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int cnt;
    cin >> t;
    if(t<=10)
    { 
     for(int x=0; x<t; x++)
     {   
        int n;
        int k;
        cin >> n >> k;
        int a[1000];
         cnt=0;
        for(int i=0; i<n; i++)
        {  
           cin >> a[i];
        
            if(a[i]<=0)
                {
                 cnt++;
                } 
        } 
            if(cnt>=k && k<=n)
                {
                cout<<"NO"<<endl;
                }
             else cout<<"YES"<<endl;
    }   
    }
    return 0;
}

