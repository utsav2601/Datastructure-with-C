#include<string.h>
#include <stdio.h>

void KMPSearch(char *pat, char *txt);
void ComputeLpsArray(char *pat, int M, int *lps);
int main()
{
	char *txt = "ABABDABACDABABCABAB";
	char *pat = "ABABCABAB";
	KMPSearch(pat, txt);
	return 0;
}


void ComputeLpsArray(char *pat, int M, int *lps)
{
	int j = 0, i =1;
	lps[0] = 0;
	while (i < M)
	{
		if (pat[i] == pat[j])
		{
			j++;
			lps[i] = j;
			i++;
		}
		else 
		{
			if ( j == 0)
			{
				lps[i] = 0;
				i++;
			}
			else 
			{
				j = lps[j-1];
			}
		}
	}

}


void KMPSearch(char *pat, char *text)
{
	int M = strlen(pat);
	int N = strlen(text);
	int lps[M];

	ComputeLpsArray(pat, M, lps);
	int i= 0, j = 0;
//	for (int x = 0; x < M; x++)
//	printf ("lps : %d" , lps[x]);
	while ( i < N)
	{

		if (text[i] == pat[j])
		{
			i++;
			j++;
		}

		if (j == M)
		{
			printf("\npattern found at: %d", i-j);
			j= lps[j-1];
		}
		else if( i < N && pat[j] != text[i])
		{
			if (j != 0)
				j = lps[j-1];
			else 
			{
				i = i +1;
			}
		}
	}
}
