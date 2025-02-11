#include "object_private.h"

t_object*	object_create(int x, int y)
{
	t_object*	object;

	object = (t_object*)malloc(sizeof(t_object));
	if (object == NULL)
		return (NULL);
	object->x = x;
	object->y = y;
	return (object);
}

void		object_destroy(t_object* object)
{
	free(object);
}

void		object_move(t_object* object, int x, int y)
{
	object->x = x;
	object->y = y;
}

void		object_print(t_object* object)
{
	printf("Object at (%d, %d)\n", object->x, object->y);
}