#include<stdio.h>

int main()
{
	char *p = NULL;
	p = "hello";
	printf("Before string is %s\n", p);
	//*p = 'k';
	p++;
	printf("after string is %s\n", p);


	return 0;
}
