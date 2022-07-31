#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(){

    int a,b;
    cin >> a >> b;

    int gcd_1 = gcd(a,b);
    vector<int>num;
    int cnt = 0;
    for(int i = 1;i <= gcd_1;i++){
        
        if(gcd(i,b) == gcd_1) {
            ++cnt;
        }
        num.push_back(i);
    }

    double S = 0.5;
    cout << cnt;
    cout << num.size();
    cout << S;
    // cout <<  S * 1000000;


}