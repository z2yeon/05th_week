#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0,meter;
	
	while(i<3)
	{
		meter=i*1609;
		printf("%d������ %d�����Դϴ�.\n",i,meter);
		i++;
	}
	
	return 0;
}
