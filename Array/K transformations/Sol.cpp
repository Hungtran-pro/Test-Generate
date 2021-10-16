// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int n, k;
    cin >> n >> k;
    ll a[n];
    F(i, 0, n) cin >> a[i];
    if(k & 1) k = 1;
    else k = min(k, 2);
    ll MAX;
    while(k--)
    {
        MAX = a[0];
        F(i, 1, n) MAX = max(MAX, a[i]);
        F(i, 0, n) a[i] = MAX - a[i];
    }
    for(ll i : a) cout << i << ' ';
    return 0;
}