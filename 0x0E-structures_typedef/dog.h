#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a data type with poppy structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: represents a dog, his ame, his ade and his owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - rypedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
