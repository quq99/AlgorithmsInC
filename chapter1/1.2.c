#include <stdio.h>
#define N 1000

main()
{
	int i,j, p, q, t, id[N];
	for (i = 0; i < N; i++)
		{id[i] = i;}
	while(scanf("%d %d", &p, &q) == 2)
	{
		if (id[p] == id[q])
		{
			printf("They are already connected!\n\n");
			continue;
		}
		for(i=p; i != id[i]; i = id[i])
		for(j=q; j != id[j]; j = id[j])
			if(i == j) continue;
			id[i] = j;
	
		printf("%d %d\n\n", p, q);
	}	

}
