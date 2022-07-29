#include <stdio.h>
using namespace std;
int main () {
	printf(" nhap n :  ");
	int n;
	scanf("%d", &n);
	int k = n -1 ;
	int min = 0;
     while ( k > 0 ) {
     	if ( k%2 == 0 && k%3==0 ) {
     		min = k;
     		break;
		 }
		 k--;
	 }
	 printf( " gia tri can tim %d ", min);
	return 0;
}
