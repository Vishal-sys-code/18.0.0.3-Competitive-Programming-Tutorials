#include <bits/stdc++.h>
using namespace std;

void Input_Output() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
}

int main() {
	Input_Output();
	int a, b;
    cin>>a>>b;
    int sum = a+b;
    cout << "SUM :" << sum << endl;
	return 0;
}