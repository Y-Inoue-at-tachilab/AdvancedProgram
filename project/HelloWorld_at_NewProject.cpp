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


	// 2次元配列の初期化
	int a[4][3] ={ {1,2,3},{4,5,6},{7,8,9},{10,11,12} };


	// 2次元のchar型配列（初期化付き）
	char stAry[3][16] = { "apple", "banana", "cake" };


	// 1つのfor文で2つの変数を初期化,更新
	for (int i = 0, j = 10; i < j; i++, j--)
		printf("i=%d j=%d\n", i, j);


	/*
	// 初期化でカウンタ変数iを宣言
	for (int i = 0; i < 10; i++)
		printf("Hello, World!\n");

	bool flag;
	*/

	/*
	// 2のべき乗を表示 (1024まで）
	int i = 1; 
	int pw2 = 1;
	while (pw2 < 1024) {
		pw2 = pw2 * 2;
		printf("2の%d乗は%dです\n", i, pw2);
		i++;
	}
	*/

	/*
	// 一度も実行されないループ
	int i = 5;
	while (i < 5) {
		printf("i=%d\n", i);
		i++;
	}
	*/


	/*
	// 少なくとも1回は実行されるループ
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


	// scanf関数の変換指定子
	scanf_s("%d",  &i);     // 整数（int型）
	scanf_s("%lf", &d);     // 浮動小数点 (doule型）
	scanf_s("%s",   s, 10); // 文字列（char*型)


	printf("i = %d\n", i);
	printf("d = %f\n", d);
	printf("s = %s\n", s);




	return 0;
}