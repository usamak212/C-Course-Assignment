#include<stdio.h>

struct node {
	int data;
	struct node *next; // pointer to the same type of strcture
}; // this is called as self referential structure

int main()
{
	struct node n1, n2, n3;
	printf("&n1 = %p, &n2 = %p, &n3 = %p\n", &n1, &n2, &n3);
	n1.data = 10;
	n1.next = &n2;

	n2.data = 20;
	n2.next = &n3;

	n3.data = 30;
	n3.next = NULL;

	printf("n1.data = %d n1.next = %p\n", n1.data, n1.next);
	printf("n2.data = %d n2.next = %p\n", n2.data, n2.next);
	printf("n3.data = %d n3.next = %p\n", n3.data, n3.next);


	return 0;
}
