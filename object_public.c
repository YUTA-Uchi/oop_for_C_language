
#include "object_public.h"
#include "object_private.h"

t_object_public*	object_public_create(void)
{
	t_object_public*	object_public;

	object_public = (t_object_public*)malloc(sizeof(t_object_public));
	if (object_public == NULL)
		return (NULL);
	object_public->data = object_create(0, 0);
	object_public->create = object_create;
	object_public->destroy = object_destroy;
	object_public->move = object_move;
	object_public->print = object_print;
	return (object_public);
}

void				object_public_destroy(t_object_public* object_public)
{
	object_public->destroy(object_public->data);
	free(object_public);
}
