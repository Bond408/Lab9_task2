#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "RUS");
	while (1) {
		int c = 0, a = 0, chet = 0, five = 0, sum = 0, sum2 = 0, proizv = 1;
		int number;

		printf("������� �����: ");
		scanf_s("%d", &number);

		int k = number % 10;
		int q = number / 100 % 10;
		while (number > 0) {
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
			number /= 10;
		}

		printf("���������� ���� 3: %d\n", c);
		printf("���������� ���������� � ��������� ������: %d\n", a);
		printf("���������� ������ ����: %d\n", chet);
		printf("���������� ���� ������ 5: %d\n", five);
		printf("����� �������� ����: %d\n", sum);
		printf("����� ���� ������ ��� ������ 7: %d\n", sum2);
		printf("������������ ���� ��������� ����: %d\n", proizv);

		char end;
		printf("����������? (�� - y, ��� - n):");
		scanf_s(" %c", &end);
		if (end == 'n' || end == 'N') {
			printf("��������� ���������.\n");
			break;
		}
	}
}