#include<stdio.h>


int main()
{
	char str[50],temp;
	printf("Enter string \n");
	scanf("%s", str);

	printf("\nOriginal: %s", str);
	int lenn = 0;
	while (str[lenn] != '\0') {
		lenn++;
	}
    int i,j;
    for ( i = 0, j = lenn - 1; i < j; ++i, --j) {
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}
	printf("\n\nReversed: %s", str);
}