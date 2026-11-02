#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d", &a);
	if(a < 2){
		printf("Khong phai so nguyen to");
	}
	else{
		int n = 0;
		for(int i = 2; i <= sqrt(a); i++)
			if(a % i == 0)
				n = 1;
		if(n == 0)
			printf("La so nguyen to");
		else
			printf("Khong la so nguyen to");
	}
}
