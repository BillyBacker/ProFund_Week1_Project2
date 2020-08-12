#include<stdio.h>

int main() {
	int In, i;
	printf("Enter Number : ");
	scanf_s("%d", In);
	while (true)
	{
		if (In > i) {
			if (In % (In - i) == 0) {
				printf("Not Prime");
				break;
			}
			else {
				printf("Prime");
				break;
			}
		}
	}

}