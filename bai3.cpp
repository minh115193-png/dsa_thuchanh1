#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int max = a[0];
	for (int j = 1; j < n; j++)
		if(max < a[j])
			max = a[j];
	printf("%d", max);
}
