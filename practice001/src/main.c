#include<stdio.h>
#include<time.h>
#include"../headers/recursive.h"

int main(void){
	clock_t t;
	int n = 20;
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
	return 0;
}
