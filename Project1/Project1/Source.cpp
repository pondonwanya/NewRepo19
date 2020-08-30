#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < (i * 2) - 1; j++) {
			printf("*");
		}
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}
		printf("\n");
	}
	for (int i = 1; i < num; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < ((num * 2) - 1) - (2 * (i)); j++) {
			printf("*");
		}
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		printf("\n");
	}

}