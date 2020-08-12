#include<stdio.h>

int main() {
	int In = 0;
	int i = 1;
	printf("Enter Number : ");
	scanf_s("%d", &In);
	while (true)
	{
		if (In > i+1) {
			if (In % (In - i) == 0) {
				printf("Not Prime");
				break;
			}
			else {
				i += 1;
			}
		}
		else
		{
			printf("Prime");
			break;
		}
	}

}