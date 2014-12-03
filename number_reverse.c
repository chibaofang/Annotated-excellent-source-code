#include <stdio.h>
int main(){
	int a;
	int test;
	printf("请输入只有三位的正整数:\n");
	scanf("%d",&a);
	test  = a/100;
	if((test<10)&&(test>=1)){
		int a1, a2, a3,a4;
		a1 = a/100;
		a2 = a/10-a/100*10;
		a3 = a-100*a1-10*a2;
		a4 = a1+a2*10+a3*100;
		printf("输出结果是：%d\n", a4);
	}else{
		printf("您输入的数字不是三位整数\n");
	}


	return 0;
}
