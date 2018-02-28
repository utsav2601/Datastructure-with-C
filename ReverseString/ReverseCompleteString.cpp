#include <stdio.h>
#include <string.h>
#include <malloc.h>
void ReverseComplete(char *word);
void reverse(char *word, int start, int end);
using namespace std;

int main ()
{
	//printf("Hello World");
	char word [] = "This is datastructure";
	char *str = word;
	ReverseComplete(str);
	printf ("%s", str);
	return 0;
}

void ReverseComplete(char *str)
{
	int start = 0, current=0;
	while ( current < (strlen(str)))
	{
		//	"this is datastructure";
		if (str[current+1] == ' ' )
		{
			reverse(str, start, current);
			start = current + 2;
		}

		if (str[current+1] == '\0')
		{
			reverse(str, start, current);
		}
		current++;
	}

	reverse(str, 0, strlen(str)-1);
}

void reverse (char *word, int start, int end)
{
	printf(" \n%d %d", start, end);
	while (start < end)
	{
		word[start] = word[start] ^ word[end];
		word[end] = word[end] ^ word[start];
		word[start] = word[start] ^ word[end];
		++start;
		--end;
	}
}

