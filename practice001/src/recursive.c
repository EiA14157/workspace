#include<stdio.h>
#include"../headers/recursive.h"

int fibo_recur(int n){
	if(n > 1)
		return fibo_recur(n-1) + fibo_recur(n-2);
	return n;
}

int fibo_iter(int n){
	int f[1000];
	int i;
	f[0] = 1;
	f[1] = 1;
	for(i=2;i<n;i++)
		f[i]=f[i-1]+f[i-2];
	return f[n-1];
}

int hanoi_recur(int n){
	if(n==1)
		return 1;
	return hanoi_recur(n-1) + 1 + hanoi_recur(n-1);
}

int hanoi_iter(int n){
	int h[1000];
	int i;
	h[0]=1;
	for(i=1;i<n;i++)
		h[i] = h[i-1] + 1 + h[i-1];
	return h[n-1];
}
