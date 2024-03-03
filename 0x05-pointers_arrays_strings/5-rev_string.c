#include "main.h"
#include <stdio.h>
/*
 * 5-rev_string.c
 *
 *  Created on: Mar 3, 2024
 *      Author: absheriff
 */
void rev_string(char *s)
{
	int slen = 0;
	int x = 0;

	while (s[slen] != '\0')
	{
		slen++;
	}
	slen -= 1;
	char scopy[slen];

	while (slen >= 0)
	{
		scopy[x] = s[slen];
		slen --;
	}
	s = scopy;
	printf("slen - %d\n", slen);
}

