#include <stdio.h>
#include <locale.h>
int main(void) {
	int c = 0, a = -1, chet = 0, five = 0, sum = 0, sum2 = 0, proizv = 1, proizv2 = 1, proizv3 = 1;
	int number;
	setlocale(LC_ALL, "RUS");
	printf("Введите число:");
	scanf_s("%d", &number);
	int k = number % 10;
	int q = number / 100 % 10;
	while (number > 0)
	{

		if (number % 10 == 3) {
			++c;
		}
		if (number % 10 == k) {
			++a;
		}
		if ((number % 10) % 2 == 0) {
			++chet;
		}
		if (number % 10 > 5) {
			++five;
		}
		if ((number % 10) % 2 != 0) {
			sum += number % 10;
		}
		if (number % 10 >= 7) {
			sum2 += number % 10;
		}
		if (number % 10 != 0) {
			proizv *= number % 10;
		}
		if (number % 100 <= 100) {
			proizv2 *= number % 10;
		}
		number /= 10;
	}
		printf("Количество цифр 3: %d\n", c);
		printf("Количество совпадений с последней цифрой: %d\n", a);
		printf("Количество четных цифр: %d\n", chet);
		printf("Количество цифр больше 5: %d\n", five);
		printf("Сумма нечетных цифр: %d\n", sum);
		printf("Сумма цифр больше или равных 7: %d\n", sum2);
		printf("Произведение всех ненулевых цифр: %d\n", proizv);
}