#include <stdio.h>
int main() {
	int max=0,min,pop[10],rev[10];
	printf("please enter the pouplation of the 10 cities");
		for(int i=0; i<10;i++){
			scanf("%d", &pop[i]);
			if (i==0){
				min=pop[i];
			}
			if (pop[i]<min){
				min=pop[i];
			}
			if (pop[i]>max){
				max=pop[i];
			}
		}
		for (int i=0;i<10;i++){
			rev[i]=pop[9-i];
		}
		for (int i=0;i<10;i++){
			printf("the population in reverse order is %d \n",rev[i]);
				
		}
		printf("the maximum and minimum are %d,%d\n",max,min);
	return 0;
}
			

		
