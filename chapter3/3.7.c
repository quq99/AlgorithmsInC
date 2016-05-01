#include <stdio.h>
#include <stdlib.h>

int heads()
{
	return rand() < RAND_MAX/2;
}


int main(int argc, char *argv[])
{
	int i=0, j=0, cnt=0;

/*play coins N times, repeat the game M times.*/
	int N = atoi(argv[1]), M = atoi(argv[2]);
	int *f = malloc( (N+1) * sizeof(int));
	for(j = 0; j <= N; j++)
		f[j] = 0;
/*count*/
	for(i = 0; i < M; i++, f[cnt]++)
	{
		for(cnt = 0, j = 0; j <= N; j++)
			if( heads() )
				cnt++;
	}
/*print the results*/

	for(j = 0; j <= N; j++)
	{
		printf("%2d", j);
		for(i = 0; i < f[j]; i+=10)
			printf("*");
		printf("\n");
	}
}
