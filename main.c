#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 #include <stdio.h> 
int inc(int counter);

int main(void) 
{ 
	int i=10; 
	printf("before i=%d\n", i); 
	i=inc(i); // �Լ��� ��ȯ���� �̿�, i= �� ������ ��ȯ �ȵ�. 
	printf("after i=%d\n", i); 
	

}
int inc(int counter) 
{ 
	counter++; 
	return counter; 
}


