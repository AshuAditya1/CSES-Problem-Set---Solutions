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
    
    
    int n;
    cin >> n;
    loop(i,1,n+1){
        int k = i;
        int total_ways_to_place = (myPow(k,2) * (myPow(k,2) - 1)) / 2;
        int total_ways_to_attack = 4 * (k - 1) * (k - 2);
        int no_attack_places = total_ways_to_place - total_ways_to_attack;
        cout << no_attack_places << endl;
    }
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


    int tt = 1;
    // cin >> tt;
    while(tt--){
        hare_krishna();
    }
    return 0;
}