#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PassedArraySize(int a[]);


int main(void)
{
	int i;

	//int a[5] = { 1, 2, 3, 4, 5 }; // 配列aの宣言

	/*

	int a[5] = { 1, 2, 3, 4, 5 }; // 配列a
	int* p = a; // int型のポインタ（aを指す）

	for (int i = 0; i < 5; i++) {

		// 配列aの要素を添字で指定
		printf("a[i]=%d\n", a[i]); 

		// aをポインタと見なす
		printf("*(a + i)=%d\n", *(a + i)); 

		// aを指すポインタを使って、配列要素にアクセス
		printf("*(p + i)=%d\n", *(p + i)); 

		printf("p[i]=%d\n", p[i]);

	}
	*/


	/*
	int n;   // int型の変数
	int* p;  // int型のポインタ

	// ポインタpに変数nのアドレスを代入
	p = &n;

	// pの指すメモリ領域（=変数n) に100を代入
	*p = 100; 
	*/


	int a[5] = { 1, 2, 3, 4, 5 }; // 配列a
	int* p; // ポインタp
	
	// ポインタpに配列aを代入
	// a[0]のアドレスがpに渡される
	p = a;

	// a[1]の値を出力
	printf("p[1] = %d\n", p[1]); 


	printf("*(a+1) = %d\n", *(a+1));


	// 配列の要素数を計算
	int na = sizeof(a) / sizeof(a[0]);



	// 2次元配列の初期化
	//int a[4][3] = { {1,2,3}, {4,5} };


	/*
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			printf("%d %d %d\n", i, j, a[i][j]);



	// 配列を宣言したスコープでサイズを求める
	printf("配列aの大きさは%d %dです。\n", sizeof(a), sizeof(a[0][0]));

	// 関数に配列を渡して、サイズを求める
	PassedArraySize((int*)a);
	*/



	/*
	// 宣言時: OK
	char st[2][10] = { "ABCD", "XYZ" };
	printf("size=%d\nl1: %s\nl2: %s\n", sizeof(st), st[0], st[1]);


	// 身体検査データ型
	typedef struct {
		char name[21];  // 氏名（メンバ1）
		int height;     // 身長（メンバ2）
		double vision;  // 視力（メンバ3）
	} PhysCheck;

	// 構造体配列の初期化
	PhysCheck persons[10] = {
		{"AKASAKA Tadao",  162, 0.3},
		{"KATOH Tomiaki",  173, 0.7},
		{"SAITOH Shinya",  171, 1.5},


		{"MATSUTOMI Akio", 169, 0.8},
	};


	// 配列のメンバにアクセス
	strcpy_s(persons[0].name, "YAMADA Taro");
	persons[0].height = 180;
	persons[0].vision = 2.0;









	printf("%s %d %f\n", persons[0].name, persons[0].height, persons[0].vision);


	PhysCheck p2[2];
	printf("size %d  %d %d %d\n",sizeof(p2), sizeof(p2[0].name), sizeof(p2[0].height), sizeof(p2[0].vision));
	*/



	/*

	// 構造体の宣言
	PhysCheck person = { "YAMADA Taro", 180, 2.0 };

	// 構造体のポインタ
	PhysCheck* p_person = &person;


	// ポインタを介したメンバ変数へのアクセス
	printf("name=%s\n", p_person->name);

	// ドット演算子を使う場合の記述
	printf("name=%s\n", (*p_person).name);

	*/

	/*
	struct xyz {
		int x; int y; int z;
	};

	// struct xyz型に 別名XYZを設定
	typedef struct xyz XYZ;

	// XYZ型は struct xyz型 と同じ
	XYZ a; 


	// 構造体の宣言とtypedefを同時に行う
	typedef struct {
		int year;  // 年
		int month; // 月
		int day;   // 日
	} Date; // この構造体をDate型として扱う
	*/



	/*

	// personの各メンバにアクセス
	strcpy_s(person.name, "YAMADA Taro");
	person.height = 180;
	person.vision = 2.0;

	printf("%s %d %f\n", person.name, person.height, person.vision);

	*/





	/*
	// 1文字ずつ代入（ナル文字を含む）
	st[0] = 'X';
	st[1] = 'Y';
	st[2] = 'Z';
	st[3] = '\0';

	// strcpy_s関数を使用
	strcpy_s(st, "XYZ");
	*/





	/*

	int** pp = (int**)calloc(2, sizeof(int*));

	int** t;

	t = pp;

	for (int i = 0; i < 2; i++) {
		int* p;
		p = (int*)calloc(10, sizeof(int));
		*pp = p;
		pp++;
	}

	pp = t;
	for (int j = 0; j < 2; j++) {
		int* q;
		q = *(pp + j);
		for (int i = 0; i < 10; i++) {
			*(q + i) = j * 10 + i;
		}
	}

	pp = t;
	for (int j = 0; j < 2; j++) {
		int* q;
		q = *(pp + j);
		for (int i = 0; i < 10; i++) {
			printf("%d %d %d\n", j, i, *(q + i));
		}
	}


	free(pp);

	*/
	return 0;
}

void PassedArraySize(int a[]) {
	printf("渡された配列aの大きさは%dです.\n", sizeof(a));
}



// 配列aの中身を表示
void ShowArray(int* a, int na) {
	for (int i = 0; i < na; i++)
		printf("a[%d]=%d\n", i, a[i]);
}


/*
void* calloc(size_t nmemb, size_t size);
void* malloc(size_t size);


void free(void* ptr);



void* calloc(size_t nmemb, size_t size) { return NULL; }

void* malloc(size_t size) { return NULL; }

void free(void* ptr) {}
*/


/*
void func() {

	int na; // 配列サイズ


	// int型のポインタp, q
	int *p, *q;

	// malloc関数による動的生成
	p = (int*)malloc(na * sizeof(int));

	// calloc関数による動的生成
	q = (int*)calloc(na, sizeof(int));


	// 要素数5のint型配列 a[5]
	int a[5];


	// 配列aのサイズを取得
	size_t size = sizeof(a);




}
*/

