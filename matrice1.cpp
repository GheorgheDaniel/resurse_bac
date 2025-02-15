#include <bits/stdc++.h>
using namespace std;

int N, a[21][21];

int main() {

	cin >> N;

	for(int i = 1; i <= N; i++) {
		int k = 1;
		for(int j = i - 1; j >= 1; j--) {
			a[i][j] = k;
			k++;
		}
    
		// ????

	}

	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
}
