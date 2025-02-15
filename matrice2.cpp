#include <bits/stdc++.h>
using namespace std;

int M, N, a[21][21];

int main() {

	cin >> M >> N;

	int k = 1;
	for(int i = M; i >= 1; i--) {
		for(int j = N; j >= 1; j--) {
			
			/*
				cat timp k nu e bun, vrem sa il crestem pe k
				cum??
				...	

				while(...) k++;

			*/


			a[i][j] = k;
			k++;
		}
	}	

	for(int i = 1; i <= M; i++) {
		for(int j = 1; j <= N; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}

}
