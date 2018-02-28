#include <stdio.h>
#include <string.h>
#include <malloc.h>
char* reverse (char *word);

int main ()
{
	//printf("Hello World");
	char *word = "abcde";
	//char *ret = reverse(word);
	//char *ret = reverse2(word);
	reverse2(word);
	printf ("%s", word);
	return 0;
}

char * reverse (char *word)
{
	int j = strlen(word)-1;
	char *a = (char *)malloc(sizeof(char) * (j+1));
	printf ("%c", word[j]);
	strcpy(a, word);
	int i = 0;
	while (i < j)
	{
		a[i] = a[i] ^ a[j];
		a[j] = a[j] ^ a[i];
		a[i] = a[i] ^ a[j];
		++i;
		--j;
	}
	return a;
}

