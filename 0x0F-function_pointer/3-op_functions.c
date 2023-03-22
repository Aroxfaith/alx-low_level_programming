#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add a and b together
  * @a: first value
  * @b: second value
  *
  * Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract b from a
  * @a: first value
  * @b: second value
  *
  * Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns product of a & b
  * @a: first value
  * @b: second value
  *
  * Return: a x b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide a $ b
  * @a: first value
  * @b: second value
  *
  * Return: division of a&b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - return modulos of q & b
  * @a: first value
  * @b: second value
  *
  * Return: modulo
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
