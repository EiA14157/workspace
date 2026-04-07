#include<stdio.h>
#include<time.h>
#include"../headers/recursive.h"

int main(void){
	clock_t t;
	int n = 30;
	int ret;

	t = clock();
	ret = fibo_recur(n);
	t = clock() - t;
	printf("fibonacci recursive\n");
	printf("n: %d, ans: %d, time spent: %f sec\n", n, ret, (double)t);
	t = clock();
	ret = fibo_iter(n);
	t = clock() - t;
	printf("fibonacci iterative\n");
	printf("n: %d, ans: %d, time spent: %f sec\n", n, ret, (double)t);
	show_fibo(n);

	n = 20;
	t = clock();
	ret = hanoi_recur(n);
	t = clock() - t;
	printf("hanoi tower recursive\n");
	printf("n: %d, ans: %d, time spent: %f sec\n", n, ret, (double)t);
	t = clock();
	ret = hanoi_iter(n);
	t = clock() - t;
	printf("hanoi tower iterative\n");
	printf("n: %d, ans: %d, time spent: %f sec\n", n, ret, (double)t);
	show_hanoi(5, 'A', 'B', 'C');
	return 0;
}
