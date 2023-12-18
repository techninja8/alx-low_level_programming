#include <unistd.h>

/**
 * main - prints out some text
 *
 * Return: Returns the value of 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
