#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	i=365;
	
	int*ptr;
	ptr=&i;
	
	printf("i�� �ּ�:%i\n",&i);
	printf("i�� ��:%i\n",i);
	
	printf("ptr�� �ּ�:%u\n",ptr);
	printf("ptr�� ��:%i\n",*ptr);
	return 0;
}
