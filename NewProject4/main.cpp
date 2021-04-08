#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 1000

// �f���T��
int main() {

	/*
	// ����C����ɂ��A���S���Y���ƃf�[�^�\�� 2��

	int i, n;
	int prime[N/2];							// �f�����i�[����z�� 
	int ptr = 0;							// ���ɓ���ꂽ�f���̌� 
	unsigned long counter = 0;				// �揜�̉� 

	prime[ptr++] = 2;						// �Q�͑f���ł��� 
	prime[ptr++] = 3;						// �R�͑f���ł��� 

	for (n = 5; n <= N; n += 2) {		// ��݂̂�ΏۂƂ��� 
		int flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= n; i++) {
			counter++;
			if (n % prime[i] == 0) {		// ����؂��Ƒf���ł͂Ȃ� 
				flag = 1;
				break;						// ����ȏ�̌J�Ԃ��͕s�v 
			}
		}
		if (!flag)							// �Ō�܂Ŋ���؂�Ȃ����� 
			prime[ptr++] = n;				// �z��ɓo�^ 
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("�揜�Z���s�����񐔁F%lu\n", counter);

	return 0;
	*/


	/*
	unsigned long counter = 0;

	const int N = 30000;
	int a[N - 1], i, j, k, iend, m, n;

	for (i = 0; i < N - 1; i++)
		a[i] = i + 2; // store initial value series 2,3,4... to array


	iend = N - 2;
	n = 1;
	for (i = 0; ; i++) {
		for (m = n; counter++, (m <= iend) && (a[i] * a[i] > a[m]); m++);
		if (m > iend)
			break;
		n = m;
		for (j = m - 1; m <= iend; m++) {
			counter++;
			if (a[m] % a[i])
				a[++j] = a[m];
		}
		iend = j;
	}
	for (k = 0; k <= iend; k++)
		printf("%d\n", a[k]);

	printf("�揜�Z���s�����񐔁F%lu\n", counter);

	return 0;

	*/



	// �G���g�X�e�l�X���
	// �l�b�g�L�ڂ̃V���v���Ȏ���
	// https://nonbiri-tereka.hatenablog.com/entry/2014/07/10/120154

	int arr[N];

	int m_counter = 0;
	int c_counter = 0;

	// ������
	for (int i = 0; i < N; i++) {
		arr[i] = 1;
	}

	// 2����sqrt(N)�܂ő���
	for (int i = 2; i < sqrt(N); i++) { 

		c_counter++;
		if (arr[i]) {
			for (int j = 0; i * (j + 2) < N; j++) {
				arr[i * (j + 2)] = 0; // �����{���ӂ邢����

				m_counter++;
				c_counter++;
			}
		}

		c_counter++;
	}

	for (int i = 2; i < N; i++) {
		if (arr[i]) {
			printf("%d\n", i);
			//cout << i << endl;
		}
	}

	printf("n_mult=%d, n_cond=%d\n", m_counter, c_counter);




}



int func(){//int main() {

	// �~�����̌v�Z

	// �����e�J�����@
	int r;// = rand();
	double rand_max = (double)RAND_MAX;
	long int count = 0;
	const long int count_max = 1000000;
	for (int i = 0; i < count_max; i++) {

		//printf("%d/%d\r", count, count_max);

		double rx = rand() / rand_max;
		double ry = rand() / rand_max;

		rx *= rx;
		ry *= ry;

		if (rx + ry <= 1.0)
			count++;
	}
	printf("count = %d\n", count);
	printf("pi = %f\n", 4*(double)count / count_max);

	/*
	// ���C�v�j�b�c����
	long int i = 1;
	long int n = 150000;
	long double temp = 0.0;
	for (i = 1; i < n; i++) {

		long double inc_term = (1.0 / (2 * i - 1));

		if ((i % 2) == 1) {
			temp += inc_term;
		}
		else {
			temp -= inc_term;
		}

		long double ans = temp * 4.0;
		printf("pi(%i)=%f %f\n", i, ans, inc_term);

	}
	return 0;
	*/


	// �K�E�X�E���W�����h��
	/*
	double a = 1.0;
	double b = 1.0 / sqrt(2.0);
	double t = 1.0 / 4;
	double p = 1.0;

	for (int i = 0; i < 20; i++) {
		double a2 = (a + b) / 2;
		double b2 = sqrt(a*b);
		double t2 = t - p * (a - a2) * (a - a2);
		double p2 = 2 * p;

		a = a2;
		b = b2;
		t = t2;
		p = p2;
		printf("pi(%d)=%f\n", i+1, (a + b) * (a + b) / (4 * t));
	}
	*/


	return 0;
}