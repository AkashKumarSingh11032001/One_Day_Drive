#include<bits/stdc++.h>
using namespace std;


int xorOfArray(vector<int>arr, int n)
{
    
    int xor_arr = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        xor_arr = xor_arr ^ arr[i];
        maxi = max(maxi,xor_arr);
    }
    return maxi;
}

int main(){

    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int>arr;
    int x;
    for(int i = 0;i < n;i++){
        cin >> x;
        arr.push_back(x);
    }

    int maxi = xorOfArray(arr,n);
    maxi = maxi*2 - 1;
    cout << (maxi * k);
}