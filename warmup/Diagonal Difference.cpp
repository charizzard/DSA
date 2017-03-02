#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i,j;
    
    int x=0;
    int y=0;
    
    
    cin >> n;
    int a[100][100];
    for(int i=0; i<n; i++){
       for(int j= 0; j< n; j++){
          cin >> a[i][j];
           if(i==j) {x=x+a[i][j];}
           if(i+j==n-1){y=y+a[i][j];} }
    }   
    
        cout<<abs(x-y)<<endl;
return 0;
}
  