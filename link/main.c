#include "link.h"

int main(int argc, char *argv[])
{
	Link l;

	link_init(&l);
	link_insert(&l, 2);
	link_insert(&l, 1);
	link_delete(&l, 2);
	link_insert(&l, 3);
	link_insert(&l, 4);
	link_traverse(&l);
	link_reverse(&l);
	link_traverse(&l);

	return 0;
}
