#include <stdio.h>
#define N 1000

main()
{
	int i,j,sz[N], p, q, t, id[N];
	for (i = 0; i < N; i++)
		{id[i] = i;sz[i] = 1;}
	while(scanf("%d %d", &p, &q) == 2)
	{
		for(i=p; i != id[i]; i = id[i])
		for(j=q; j != id[j]; j = id[j])
			if(i == j) continue;
		if(sz[i] < sz[j])
		{
			id[i] = j;
			sz[j] = sz[j] + sz[i];
		}
		else
		{
			id[j] = i;
			sz[i] = sz[i] + sz[j];
		}
		printf("%d %d\n\n", p, q);
	}	

}