#include "object_public.h"

int		main(void)
{
	t_object_public*	object_public;

	object_public = object_public_create();
	object_public->print(object_public->data);
	object_public->move(object_public->data, 42, 42);
	object_public->print(object_public->data);
	// object_public->data->x = 21; // This line can not compile
	// object_public->data->y = 21; // This line can not compile
	object_public->print(object_public->data);
	object_public_destroy(object_public);
	return (0);
}

