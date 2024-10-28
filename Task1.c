#include <stdio.h>
int main () {
	int N;
	printf("please enter an integer N \n");
	scanf("%d",&N);	
	for (int i=1;i<=N;i++){
		for (int space=1;space<=N-i;space++){
			printf(" ");
		}
					
						
		for (int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");

	}
	return 0;	
					
}
