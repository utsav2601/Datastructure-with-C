#include <iostream>
#include <stdio.h>
#include <string.h>

void permute (char *word, int left, int right);
void swap (char *left, char *right);
int main()
{
	char word[] = "abc";
	permute(word, 0, (strlen(word)-1));
	return 0;
}

void permute (char *word, int left, int right)
{
	int i;
	if ( left == right )
		printf("\n%s", word);

	for (i = left; i <=right; i++)
	{
		swap(word + left, word + i);
		permute(word, left+1, right);
		swap(word+left , word+i);
	}
}

void swap(char *left, char *right)
{
	char temp = *left;
	*left = *right;
	*right = temp;
}
