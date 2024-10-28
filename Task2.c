#include <stdio.h>
int main() {
	   	int time, M = 0, S = 0;
   	     	printf("Please enter the number of minutes: ");
    		scanf("%d", &time);

   		 int totalSeconds = time * 60;

    	for (int i = 0; i <= totalSeconds; i++) {
        	printf("%02d : %02d\n", M, S);
        
       		S++;
        	if (S==60) {
            	S = 0;
            	M++;
        }
    }
    return 0;
}

