

/* �z��𓮓I�ɐ��� */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int* a;	 /* �z��̐擪�v�f�ւ̃|�C���^ */
	int na;	 /* �z��a�̗v�f�� */

	printf("�v�f���F");
	scanf_s("%d", &na);

	/* �v�f��na��int�^�z��p�̋L������m�� */
	a = (int*)calloc(na, sizeof(int));	

	if (a == NULL)
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		printf("%d�̐�������͂��Ă��������B\n", na);
		for (i = 0; i < na; i++) {
			printf("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}

		printf("�e�v�f�̒l�͈ȉ��̂Ƃ���ł��B\n");
		for (i = 0; i < na; i++)
			printf("a[%d] = %d\n", i, a[i]);

		free(a);	/* �L�������� */
	}
	return 0;
}



