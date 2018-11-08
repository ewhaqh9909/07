#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	i=365;
	
	int*ptr;
	ptr=&i;
	
	printf("i의 주소:%i\n",&i);
	printf("i의 값:%i\n",i);
	
	printf("ptr의 주소:%u\n",ptr);
	printf("ptr의 값:%i\n",*ptr);
	return 0;
}
