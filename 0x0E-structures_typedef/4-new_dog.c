#include <stdlib.h>
#include "dog.h"

/**
 * _copy  -   Make a copy of passed in argument
 *  @src:      Data to make copy of
 *  Return:    Pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[1];
	}

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mutie;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	mutie = malloc(sizeof(dog_t));
	if (mutie == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(mutie);
		return (NULL);
	}
	(*mutie).name = new_name;

	(*mutie).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*mutie).name);
		free(mutie);
		return (NULL);
	}
	(*mutie).owner = new_owner;


	return (mutie);
}

