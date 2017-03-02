#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int i;
    long long int sum=0;
    cin >> n;
    vector<int> arr(n);
    for(i=0; i<n; i++){
       cin >> arr[i];
       sum = sum + arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
