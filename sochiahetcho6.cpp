#include <stdio.h>
using namespace std;
int main () {
	printf(" nhap n :  ");
	int n;
	scanf("%d", &n);
	int k = n;
	if ( n < 6) {
		k = 6;
		printf(" so lon hon n be nhat chia het cho 2 va 3 la %d \n", k);
	} else 
	{
		if ( n%6 == 0) {
			k = n + 6;
		printf(" so lon hon n be nhat chia het cho 2 va 3 la %d \n", k);
		} else {
			while ( k% 6 != 0 ) {
				k++;
			}
		printf(" so lon hon n be nhat chia het cho 2 va 3 la %d \n", k);
		}
		
	}
	return 0;
}
