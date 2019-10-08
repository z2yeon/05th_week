#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=215;
	int input;
	int cnt=0;
	
	do
	{
		printf("Guess:");
		scanf("%d",&input);
	
		if(input<answer)
		{
			printf("HIgher\n");
		}
			
		else if(input>answer)
		{
			printf("Lower\n");
		}
			
	
		cnt++;
	}
	while (input!=answer);
	
	printf("Congratulation! Trials: %i\n",cnt);
	
	return 0;
}
