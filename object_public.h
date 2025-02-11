#ifndef OBJECT_PUBLIC_H_
#define OBJECT_PUBLIC_H_

#include <stdlib.h>
typedef struct s_object t_object;

typedef struct s_object_public {
	t_object	*data;
	t_object*	(*create)(int x, int y);
	void		(*destroy)(t_object* object);
	void		(*move)(t_object* object, int x, int y);
	void		(*print)(t_object* object);
} t_object_public;

t_object_public*	object_public_create(void);
void				object_public_destroy(t_object_public* object_public);
#endif