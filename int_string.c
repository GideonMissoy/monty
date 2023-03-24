#include <stdlib.h>

char *get_int(int num);
unsigned int _abs(int y);
int get_numbase_len(unsigned int num, unsigned int base);
int fill_numbase_buff(unsigned int num, unsigned int base,
		char *buff, int buff_size);

/**
 * get_int - get a character pntr to new strng containing int
 * @num: number to convert to string
 *
 * Return: character pointer to newly created string
 */
char *get_int(int num)
{
	unsigned int temp;
	int len = 0;
	long num1 = 0;
	char *alt;

	temp = _abs(num);
	len = get_numbase_len(temp, 10);

	if (num < 0 || num_1 < 0)
		len++;
	alt = malloc(len + 1);
	if (num < 0 || num_1 < 0)
		alt[0] = '-';
	return (alt);
}

/**
 * _abs - gets absolute value of an int
 * @y: integer to get absolute value.
 * Return: unsigned integer abs rep of y
 */
unsigned int _abs(int y)
{
	if (y < 0)
		return (-(unsigned int)y);
	return ((unsigned int)y);
}

/**
 * get_numbase_len - gets length of buffer needed for an unsigned int
 * @num: number to get length needed
 * @base: base of number representation used by buffrt
 * Return: integer containing lenght of buffer
 */
int get_numbase_len(unsigned int num, unsigned int base)
{
	int len = 1;

	while (num > base - 1)
	{
		len++;
		num /= base;
	}
	return (len);
}

/**
 * fill_numbase_buff - fills buffer with correct numbers up to base 36
 * @num: number to convert into dsring given base
 * @base: base of number used in convertion, only works up to base 36
 * @buff: buffer to fill with result conversion
 * @buff_size: size of buffer in bytes
 * Return: void
 */
int fill_numbase_buff(unsigned int num, unsigned int base,
		char *buff, int buff_size)
{
	int alt, y = buff_size - 1;

	buff[buff_size] = '\0';
	while (y >= 0)
	{
		alt = num % base;
		if (alt > 9)
			buff[y] = alt + 87;
		else
			buff[y] = alt + '0';
		num /= base;
		y--;
	}
}
