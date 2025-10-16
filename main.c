#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

  #include <stdio.h> 
static int all_files; // static은 전역변수의 범위를 제한함. static을 붙이면 이 파일 내에서만 가능함

extern void sub();

int main(void)
{
	sub();
	printf("%d\n", all_files);
	
	return 0;
}