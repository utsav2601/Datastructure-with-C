#include <stdio.h>
#include <string.h>
void IsUniqueString(char *word);
using namespace std;
int main()
{
	//  printf("Hello World");
	char *word = "abcde";
	IsUniqueString(word);
	return 0;
}

//find if unique characters 
void IsUniqueString(char *word)
{
	int N = 256;
	int check[N];
	bool flag = false;
	for (int i=0; i < N; i++ )
	{
		check[i] = 0;
	}
	for (int i =0; word[i] !=  NULL; ++i)
	{
		printf ("%d", (word[i]));
		if ( check[(int)word[i]] == 1 )
			flag = true;
		check[(int)(word[i])] = 1;    
	}
	if (flag)
	{
		printf("not unique");
		return;
	}   
	printf("unique");
}
