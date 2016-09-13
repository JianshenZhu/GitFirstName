/*
 ============================================================================
 Name        : 2222.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
	unsigned short i;
	int j, k;
	int b[16];
	char a;
	unsigned int mask=32768;
	printf("Please input an integer decimal number.\n");
	fflush(stdout);
	scanf("%hu", &i);
	printf("Please select the way you want be input a or b.\n");
	fflush(stdout);
		a=getchar();
		a=getchar();
	switch(a)
	{
	case'a':
			for (k=15;k>=0;--k)
			{
				j=i%2;
				i=i/2;
				b[k]=j;
				}
			printf("Binary Equivalent : ");
			fflush(stdout);
			for (k=0;k<=15;++k)
			{
					printf("%d", b[k]);
					fflush(stdout);
			}


		break;
	case'b':


		printf("Binary Equivalent : ");
		fflush(stdout);

		while(mask > 0)

		 {

		 if((i & mask) == 0 )
		 {
		 printf("0");
		 fflush(stdout);
		 }
		 else
		 {
		 printf("1");
		 fflush(stdout);
		 }
		 mask = mask >> 1 ;

		 }

		}
	return 0;
}

