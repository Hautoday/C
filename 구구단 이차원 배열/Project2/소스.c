#include <stdio.h>
int main() {
	int a[10][10] = { 0 };
	

	for (int i = 0; i <= 9; i++)
	{
		a[0][i] = i;
		printf("%d	", a[0][i]);
		
	}
	printf("\n");
	for (int i = 1,j=1; i < 10; j++,i++)
	{
		a[j][0] = j;
		a[0][i] = i;
		//printf("%d	", a[j][0]);
		printf("%d	", a[j][0]);
		//printf("%d	", a[0][i]);
		
		for (int j = 1; j < 10; j++) {
			a[j][i] = (j)*(i);
			printf("%d	", a[j][i]);


		}
		printf("\n");
	}
	return 0;
}