#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
        srand(time(NULL));	
	int matrix,xt=0,yt=0;
	xt=rand() % 10,yt=rand() % 10;		
	//matrix[xt][yt];
	for (int i=0;i<=xt;i++){
		for (int j=0;j<=yt;j++){
			if (i==xt && j==yt){
				printf("hurrah, you reached the treasure at %d , %d \n", xt,yt);
				break;
			}
		}
	}
	return 0;



}
