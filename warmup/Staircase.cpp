#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    
    int n,p,h=1;
    
    cin >> n;
    p=n-1;
    for(int i=0;i<n;i++){
        
    for(int j=0;j<p;j++)cout<< " ";
    for(int k=0;k<h;k++){cout<<"#";}
        h++;
        p--;    
       cout<<endl;    
    }
    return 0;
}
