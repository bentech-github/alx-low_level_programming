#include "dog.h"
#include <stdlib.h>
/*
 * Init_dog - a function that initialize a variable of type struct dog
 * @d: the dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
