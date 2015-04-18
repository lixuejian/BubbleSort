#include <stdio.h>

#define TRUE 1
#define FALSE 0


int main(){
	int i;
	int a[10] = { 2, 5, 3, 1, 6, 7, 6, 9, 10, 8 };
	void BubbleSort(int *);

	BubbleSort(a);

	for (i = 0; i < 10; i++){
		printf("%d\n", a[i]);
	}

	return 0;
}
void BubbleSort(int *a){
	int i, j, temp;
	int flag;
	for (i = 0; i < 10; i++){
		flag = TRUE;
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = FALSE;
			}
		}
		if (flag == TRUE)
			break;
	}
}