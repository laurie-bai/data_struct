#ifndef __LINK_H__
#define __LINK_H__

#include <stdio.h>
#include <stdlib.h>

typedef int DataType;

typedef struct _node
{
	DataType data;
	struct _node *next;
} Node;

typedef struct _link
{
	int  total;
	Node *head;
} Link;

void err_quit(char *);
void link_init(Link *);
void link_reverse(Link *l);
void link_traverse(Link *);
Node *link_insert(Link *, DataType);
Node *link_delete(Link *, DataType);

#endif
