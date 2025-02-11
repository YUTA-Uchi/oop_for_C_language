#ifndef OBJECT_PRIVATE_H_
#define OBJECT_PRIVATE_H_

#include <stdlib.h>
#include <stdio.h>
typedef struct s_object t_object;

struct s_object {
	int x;
	int y;
};

t_object*	object_create(int x, int y);
void		object_destroy(t_object* object);
void		object_move(t_object* object, int x, int y);
void		object_print(t_object* object);
#endif