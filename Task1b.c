#include <stdio.h>
int main () {
        int N;
        printf("please enter an integer N \n");
        scanf("%d",&N);
	int i=1;
        while(i<=N){
		int j=1;	
		int space=1;
                while (space<=N-i){            
		      	printf(" ");
			space++;
		}

                while (j<=i){
                        printf("*");
			j++;
                }
                printf("\n");
		i++;


        }
        return 0;

}
