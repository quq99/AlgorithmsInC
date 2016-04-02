#include <stdio.h>
#define N 1000

main()
{
	int i, p, q, t, id[N];
	for (i = 0; i < N; i++)
		{id[i] = i;}
	while(scanf("%d %d", &p, &q) == 2)
	{
		if (id[p] == id[q])
		{
			printf("They are already connected!\n\n");
			continue;
		}
		for (i = 0, t = id[p]; i < N; i++)
		{
			if(id[i] == t)
				{id[i] = id[q];}
		}
		printf("%d %d\n\n", p, q);
	}	

}
