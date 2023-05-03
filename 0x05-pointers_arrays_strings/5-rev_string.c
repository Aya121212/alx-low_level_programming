#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int l, i;
	char temp;

/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;
/*swap the string by looping to half the string*/
	for (i = 0; i < 1 / 2; i++)
	{

		temp = s[i];
		s[i] = s[l - l - i]; /*-l because the array starts from 0*/
		s[l - l - i] = temp;
	}

}
