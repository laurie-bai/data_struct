#include "link.h"

void err_quit(char *msg)
{
	printf("%s\n", msg);
	exit(0);
}

void link_init(Link *link)
{
	link->head = malloc(sizeof(Node));
	if (link->head == NULL)
		err_quit("error : init pid_ipport_link");
	link->head->next = NULL;
}

Node *link_insert(Link *link, DataType data)
{
	Node *node = malloc(sizeof(Node));
	
	if (node == NULL)
		err_quit("error : malloc new Node");
	node->data = data;
	node->next = link->head->next;
	link->head->next = node;

	return node;
}

Node *link_delete(Link *link, DataType data)
{
	Node *pre = link->head;
	Node *cur = link->head->next;
	
	while (cur != NULL)
	{
		if (cur->data == data)
		{
			pre->next = cur->next;
			return cur;
		}
		pre = cur;
		cur = cur->next;
	}
	
	return NULL;
}

void link_traverse(Link *link)
{
	Node *node = link->head->next;
	while (node != NULL)
	{
		printf("%d\n", node->data);
		node = node->next;
	}
}

void link_reverse(Link *link)
{
	Node *prev, *curr, *next;

	if (link == NULL || link->head == NULL)
		err_quit("null link");
	//empty linke or only one node, not need to reverse
	if (link->head->next == NULL || link->head->next->next == NULL)
		return;
	prev = link->head;
	curr = link->head->next;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	link->head->next->next = NULL;
	link->head->next = prev;
}
