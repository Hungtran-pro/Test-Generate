#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N;
const ll Mod = 1000000007LL;
 
struct Matrix {
	ll arr[2][2];
};
 
Matrix operator * (Matrix a, Matrix b){
	Matrix res;
	res.arr[0][0] = 0;
	res.arr[1][0] = 0;
	res.arr[0][1] = 0;
	res.arr[1][1] = 0;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				res.arr[i][j] = (res.arr[i][j] + a.arr[i][k] * b.arr[k][j]) % Mod;
			}
		}
	}
	return res;
}
 
void solveMain(){
	cin >> N;
	Matrix a;
	a.arr[0][0] = 19;
	a.arr[0][1] = 6;
	a.arr[1][0] = 7;
	a.arr[1][1] = 20;
	Matrix res;
	res.arr[0][0] = 1;
	res.arr[1][0] = 0;
	res.arr[0][1] = 0;
	res.arr[1][1] = 1;
	while(N > 0){
		if(N & 1){
			res = res * a;
		}
		a = a * a;
		N /= 2;
	}
	cout << res.arr[0][0] << "\n";
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		solveMain();
	}
	return 0;
}
