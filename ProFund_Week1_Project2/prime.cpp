#include<stdio.h>
bool prime(int In);

int main() {
	int min, max;
	int i = 1;
	printf("Enter minimum Number : ");
	scanf_s("%d", &min);
	printf("Enter maximum Number : ");
	scanf_s("%d", &max);
	for (int num = min; num < max; num++) {
		if (prime(num)){
			printf("%d is Prime\n", num);
		}
	}
}

bool prime(int In) { //ใช้ตรวจว่าเลขที่ได้รับมาเป็นจำนวนเฉพาะหรือไม่
	int i = 1;
	while (true)
	{
		if (In > i + 1 || In ==1) {
			if (In == 1 || In % (In - i) == 0) {
				return false;
				break;
			}
			else {
				i += 1;
			}
		}
		else
		{
			return true;
			break;
		}
	}
}