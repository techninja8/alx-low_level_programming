#include <unistd.h>

/**
 * main - prints out some text
 *
 * Return: Returns the value of 1
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);

	return (1);
}
