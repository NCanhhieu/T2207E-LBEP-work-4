#include <stdio.h>
using namespace std;
int main () {
	printf(" nhap n : ");
	int n;
	scanf("%d", &n);
	printf( "uoc so cua n la: ");
	for ( int i = 1; i <= n; i++) {
		if( n%i == 0) {
			printf ( " %d ", i);
		}
	}
	return 0;
}
