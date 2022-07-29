#include <stdio.h>
using namespace std;
int main () {
	printf(" nhap n: ");
	int n;
	scanf("%d", &n);
	int t = 0;
	while ( t< n) {
		if ( t%2 == 1) {
		printf (" t = %d \n", t); }
		t++;
	}
	return 0;
}
