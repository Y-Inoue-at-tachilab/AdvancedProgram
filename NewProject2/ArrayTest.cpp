#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PassedArraySize(int a[]);


int main(void)
{
	int i;

	//int a[5] = { 1, 2, 3, 4, 5 }; // �z��a�̐錾

	/*

	int a[5] = { 1, 2, 3, 4, 5 }; // �z��a
	int* p = a; // int�^�̃|�C���^�ia���w���j

	for (int i = 0; i < 5; i++) {

		// �z��a�̗v�f��Y���Ŏw��
		printf("a[i]=%d\n", a[i]); 

		// a���|�C���^�ƌ��Ȃ�
		printf("*(a + i)=%d\n", *(a + i)); 

		// a���w���|�C���^���g���āA�z��v�f�ɃA�N�Z�X
		printf("*(p + i)=%d\n", *(p + i)); 

		printf("p[i]=%d\n", p[i]);

	}
	*/


	/*
	int n;   // int�^�̕ϐ�
	int* p;  // int�^�̃|�C���^

	// �|�C���^p�ɕϐ�n�̃A�h���X����
	p = &n;

	// p�̎w���������̈�i=�ϐ�n) ��100����
	*p = 100; 
	*/


	int a[5] = { 1, 2, 3, 4, 5 }; // �z��a
	int* p; // �|�C���^p
	
	// �|�C���^p�ɔz��a����
	// a[0]�̃A�h���X��p�ɓn�����
	p = a;

	// a[1]�̒l���o��
	printf("p[1] = %d\n", p[1]); 


	printf("*(a+1) = %d\n", *(a+1));


	// �z��̗v�f�����v�Z
	int na = sizeof(a) / sizeof(a[0]);



	// 2�����z��̏�����
	//int a[4][3] = { {1,2,3}, {4,5} };


	/*
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			printf("%d %d %d\n", i, j, a[i][j]);



	// �z���錾�����X�R�[�v�ŃT�C�Y�����߂�
	printf("�z��a�̑傫����%d %d�ł��B\n", sizeof(a), sizeof(a[0][0]));

	// �֐��ɔz���n���āA�T�C�Y�����߂�
	PassedArraySize((int*)a);
	*/



	/*
	// �錾��: OK
	char st[2][10] = { "ABCD", "XYZ" };
	printf("size=%d\nl1: %s\nl2: %s\n", sizeof(st), st[0], st[1]);


	// �g�̌����f�[�^�^
	typedef struct {
		char name[21];  // �����i�����o1�j
		int height;     // �g���i�����o2�j
		double vision;  // ���́i�����o3�j
	} PhysCheck;

	// �\���̔z��̏�����
	PhysCheck persons[10] = {
		{"AKASAKA Tadao",  162, 0.3},
		{"KATOH Tomiaki",  173, 0.7},
		{"SAITOH Shinya",  171, 1.5},


		{"MATSUTOMI Akio", 169, 0.8},
	};


	// �z��̃����o�ɃA�N�Z�X
	strcpy_s(persons[0].name, "YAMADA Taro");
	persons[0].height = 180;
	persons[0].vision = 2.0;









	printf("%s %d %f\n", persons[0].name, persons[0].height, persons[0].vision);


	PhysCheck p2[2];
	printf("size %d  %d %d %d\n",sizeof(p2), sizeof(p2[0].name), sizeof(p2[0].height), sizeof(p2[0].vision));
	*/



	/*

	// �\���̂̐錾
	PhysCheck person = { "YAMADA Taro", 180, 2.0 };

	// �\���̂̃|�C���^
	PhysCheck* p_person = &person;


	// �|�C���^����������o�ϐ��ւ̃A�N�Z�X
	printf("name=%s\n", p_person->name);

	// �h�b�g���Z�q���g���ꍇ�̋L�q
	printf("name=%s\n", (*p_person).name);

	*/

	/*
	struct xyz {
		int x; int y; int z;
	};

	// struct xyz�^�� �ʖ�XYZ��ݒ�
	typedef struct xyz XYZ;

	// XYZ�^�� struct xyz�^ �Ɠ���
	XYZ a; 


	// �\���̂̐錾��typedef�𓯎��ɍs��
	typedef struct {
		int year;  // �N
		int month; // ��
		int day;   // ��
	} Date; // ���̍\���̂�Date�^�Ƃ��Ĉ���
	*/



	/*

	// person�̊e�����o�ɃA�N�Z�X
	strcpy_s(person.name, "YAMADA Taro");
	person.height = 180;
	person.vision = 2.0;

	printf("%s %d %f\n", person.name, person.height, person.vision);

	*/





	/*
	// 1����������i�i���������܂ށj
	st[0] = 'X';
	st[1] = 'Y';
	st[2] = 'Z';
	st[3] = '\0';

	// strcpy_s�֐����g�p
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
	printf("�n���ꂽ�z��a�̑傫����%d�ł�.\n", sizeof(a));
}



// �z��a�̒��g��\��
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

	int na; // �z��T�C�Y


	// int�^�̃|�C���^p, q
	int *p, *q;

	// malloc�֐��ɂ�铮�I����
	p = (int*)malloc(na * sizeof(int));

	// calloc�֐��ɂ�铮�I����
	q = (int*)calloc(na, sizeof(int));


	// �v�f��5��int�^�z�� a[5]
	int a[5];


	// �z��a�̃T�C�Y���擾
	size_t size = sizeof(a);




}
*/

