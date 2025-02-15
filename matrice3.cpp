#include <bits/stdc++.h>
using namespace std;

int M, N, a[101][101];

int main() {

	cin >> M >> N;

	for(int i = 1; i <= M; i++) {

		for(int j = 1; j <= N; j++) {
			cin >> a[i][j];
		}

	}	

	for(int i = 1; i <= M; i += 2) { //trecem prin gazoane

		if(i + 1 <= M) {

			int minn = 12;

			//cum calculez minimul de pe linia i + 1? 
			
			for(int j = 1; j <= N; j++) {
				// ...
			}

			//cum schimb toate elementele mai mari sau egale cu minimul
			// cu vaolarea minimului - 1

			for(int j = 1; j <= N; j++) {
				// ...
			}

		}

	}	

	for(int i = 1; i <= M; i++) {
		for(int j = 1; j <= N; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}

}
