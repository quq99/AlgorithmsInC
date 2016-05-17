#include <stdlib.h>
#include <stdio.h>
typedef struct node *link;
struct node 
{
	int item;
	link next;
};

struct node heada,headb;
void printlinks(link b)
{
	if(b->next != NULL)
	{
		for(b=b->next; b != NULL; b=b->next)
			printf("%d\t", b->item);
		printf("\n");
	}
}
int main(int argc, char *argv[])
{
	link t=NULL,temp=NULL, x=NULL;
	link a = &heada, b = &headb;
	//a->next = NULL, b->next = NULL;
	int i=0;
	int N = atoi(argv[1]);
	for (i=0, t=a; i < N; i++)
	{
		t->next = malloc(sizeof *t);
		t = t->next;
		t->next = NULL;
		t->item = rand() % 1000;
	}
	printf("Original numbers:\n");
	printlinks(a);

	b->next = NULL;
/*you cannot use for(t=a->next; t != NULL; t = t->next) because in "t->next = x->next" t will change. so we use temp to store the t*/
	for(t=a->next; t != NULL; t = temp)
	{
		temp = t->next;
		//printf("%d\n", t->item);
		for(x = b; x->next != NULL; x = x->next)
		{
			if(x->next->item > t->item) break;
		}
		t->next = x->next;
		x->next = t;
	}

	printf("Sorted numbers:\n");
	printlinks(b);
}

