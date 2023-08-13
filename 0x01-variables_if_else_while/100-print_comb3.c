#include <stdio.h>
#include <unistd.h>

/**
 * print_digit - Function to print a digit character
 * @num: The digit to print
 */
void print_digit(int num)
{
write(1, &num, 1);
}
/**
 * print_combinations - Function to print all combinations of two digits
 */
void print_combinations(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
		print_digit(i + '0');
			print_digit(j + '0');

			if (i != 8 || j != 9)
			{
				if (i != 8 || j != 9 - 1)
				{
					print_digit(',');
					print_digit(' ');
				}
			}
		}
	}
}

/**
 * main - Entry point, invokes print_combinations function
 * Return: Always 0
 */
int main(void)
{
print_combinations();
return (0);
}
