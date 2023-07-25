/**
 * numlen - Writes the length of a number
 * @num: number to calculate length
 *
 * Return: length of the number.
*/

int numlen(int num)
{
	if (num == 0)
		return (0);
	return (1 + numlen(num / 10));
}
