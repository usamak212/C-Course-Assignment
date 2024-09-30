#include<stdio.h>

/*char *scat(char s1[15], char s2[10])
{
	int i,j;

	//Reach the end of first string
	for(i=0; s1[i] != '\0'; ++i)
		;
	printf("end of s1 is readched i=%d\n", i);

	//Copy second string at the end of first string
	for(j=0; s1[i] = s2[j]; ++i, ++j)
		if(s1[i] == '\0')
			break;
	printf("Second string is concatented to 1st string %s\n", s1);
	return s1;
}*/

//Pointer Notation
char *scat(char *s1, char*s2)
{
	char *t = s1;

	//strlen - goes till end of s1
	for(; *s1 != '\0'; ++s1)
		;

	printf("end of s1 reached\n");

	//strcpy operation
	
/*	for(; *s1 = *s2; s1++, s2++)
		if(*s1 == '\0')
			break;
*/
	for(; (*s1 = *s2) != '\0'; s1++, s2++)
		;

	printf("strcpy completed = %s\n", t);

	return t;


}


int main()
{
	char s1[15] = "hello";
	char s2[7] = "world";
	char *ret;

	ret = scat(s1, s2);
	
	printf("concatenated string is %s\n", ret);


	return 0;
}
