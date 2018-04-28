/*
 * recursion_print_parens.c
 *
 *  Created on: Mar 4, 2018
 *      Author: hsahu
 */

#include <stdio.h>

void print_parens(int n, int pos, int left, int right){
	static char str[100] = {};		// Empty result string
	static int valid_count = 0;

	//printf("pos = %d, Left = %d, Right = %d\n", pos, left, right);

	// Base Case
	if ((left == 0) && (right == 0)) {
		valid_count += 1;
		printf("%d - %s \n", valid_count, str);
		return;
	}

	// RECURSIVE CASE
	if (left > 0){
		str[pos] = '{';
		print_parens(n, pos+1, left-1, right);
	}

	if (left < right){
		str[pos] = '}';
		print_parens(n, pos+1, left, right-1);
	}
}

// Wrapper Function for calling the Recursive function
void print_all_parens(int n){
	printf("Print all the Parentheses for %d parens\n", n);
	if (n>0)
		print_parens(n, 0, n, n);
	return;
}
