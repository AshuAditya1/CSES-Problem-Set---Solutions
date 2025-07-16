/*
 
                  "Yada yada hi dharmasya glanir bhavati bharata,
                  Abhyutthanam adharmasya tadatmanam srjamy aham."
     
                        _/\_ !! HARE KRISHNA  !!_/\_
         
 
        * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
        *                    Author : Ashu_Aditya                               *
        *     TC : O(?) — still quicker than her replies  (T_T)                 *
        *     SC : O(?) — yet lighter than the weight of her memories (T_T)     *
        *                                                                       *
        *                           /\_/\                                       *
        *                          (= ._.)                                      *
        *                          / >  \>                                      *
        *                                                                       *
        * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
    
*/
 
 
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
const int MOD = 1e9 + 7;
 
#pragma GCC optimize("O3,unroll-loops,fast-math")
#pragma GCC target("avx,avx2,fma")
 
#define int                     long long
#define double                  long double 
#define endl                    "\n"
#define sort_kardo(v)           sort(v.begin(),v.end())
#define rev_sort_kardo(v)       sort(v.begin(),v.end(),greater<int>())
#define all(a)                  (a).begin(), (a).end()
#define loop(i,a,b)             for(int i = a; i < b; i++)
#define rloop(i,a,b)            for(int i = a; i >= b; i--)
#define pii                     pair<int,int> 
#define vi                      vector<int>
#define vpii                    vector<pair<int,int>>
#define si                      set<int>
#define spii                    set<pair<int,int>>
#define mii                     map<int,int>
#define mci                     map<char,int>
#define yes                     cout << "Yes" << endl
#define no                      cout << "No"  << endl
#define pb                      push_back
#define ff                      first
#define ss                      second
#define p_cnt                   cout << count << endl
#define p_ans                   cout << ans << endl
 
 
 
int myCeil(double x) {
    int intPart = (int)x;
    if (x == (double)intPart) return intPart;
    else return (x > 0) ? intPart + 1 : intPart;
}
 
int myFloor(double x) {
    int intPart = (int)x; 
    if (x == (double)intPart) return intPart;
    else return (x < 0) ? intPart - 1 : intPart;
}
 
int myPow(int a, int b){
    if(b == 0) return 1;
    int half_pow = myPow(a, b/2);
    if(b % 2 == 0) return half_pow * half_pow % MOD;
    else return half_pow * half_pow % MOD * a % MOD;
}
 
int myGCD(int a, int b){
    if(a == 0) return b;
    return myGCD(b % a, a);
}
 
int myLCM(int a, int b){
    return a / myGCD(a, b) * b;
}
 
bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
 
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return is_prime;
}
 
 
 
/*-------------------------------------------------- Code Starts -----------------------------------------------------*/
 
 
 
void hare_krishna(){
    // When I wrote this code, only Krishna and I knew the logic, but now only Krishna knows :)
    
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    int val = (x2 - x1)*(y3 - y1) - (y2 - y1)*(x3 - x1);
    if(val > 0) cout << "LEFT" << endl;
    if(val < 0) cout << "RIGHT" << endl;
    if(val == 0) cout << "TOUCH" << endl;
}
 
 
 
/*-------------------------------------------------- Code Ends -------------------------------------------------------*/
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
 
 
    #ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
    #endif                              
 
 
    int tt;
    cin >> tt;
    while(tt--){
        hare_krishna();
    }
    return 0;
}
