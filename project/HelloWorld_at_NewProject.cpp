#include <stdio.h>
#include "strdef.h"

int main() {

	int X[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int Y[3][3] = { {3,2,1}, {6,5,4}, {9,8,7} };


	/*
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int sum = 0;
			for (int k = 0; k < 3; k++) {
				sum += X[i][k] * Y[k][j];
			}
			printf("%d ", sum);
		}
		printf("\n");
	}
	*/


	// 2�����z��̏�����
	int a[4][3] ={ {1,2,3},{4,5,6},{7,8,9},{10,11,12} };


	// 2������char�^�z��i�������t���j
	char stAry[3][16] = { "apple", "banana", "cake" };


	// 1��for����2�̕ϐ���������,�X�V
	for (int i = 0, j = 10; i < j; i++, j--)
		printf("i=%d j=%d\n", i, j);


	/*
	// �������ŃJ�E���^�ϐ�i��錾
	for (int i = 0; i < 10; i++)
		printf("Hello, World!\n");

	bool flag;
	*/

	/*
	// 2�ׂ̂����\�� (1024�܂Łj
	int i = 1; 
	int pw2 = 1;
	while (pw2 < 1024) {
		pw2 = pw2 * 2;
		printf("2��%d���%d�ł�\n", i, pw2);
		i++;
	}
	*/

	/*
	// ��x�����s����Ȃ����[�v
	int i = 5;
	while (i < 5) {
		printf("i=%d\n", i);
		i++;
	}
	*/


	/*
	// ���Ȃ��Ƃ�1��͎��s����郋�[�v
	int i = 5;
	do {
		printf("i=%d\n", i);
		i++;
	} while (i < 5);
	*/


	int i = 32;
	double d = 32.0;
	char c = 'A';
	char s[16] = "String";


	// scanf�֐��̕ϊ��w��q
	scanf_s("%d",  &i);     // �����iint�^�j
	scanf_s("%lf", &d);     // ���������_ (doule�^�j
	scanf_s("%s",   s, 10); // ������ichar*�^)


	printf("i = %d\n", i);
	printf("d = %f\n", d);
	printf("s = %s\n", s);




	return 0;
}