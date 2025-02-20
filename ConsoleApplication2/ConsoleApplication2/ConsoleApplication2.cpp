#include <iostream>
using namespace std;
#define N 10
void zad3()
{
	int x, i, c;
	int fun[10];
	int arr[10];
	setlocale(LC_ALL, "Ru");
	printf("статический массив:\n");
	for (int x = 0; x < 10; x++)
	{
		fun[x] = x * x;
		printf("% d, ", fun[x]);
	}
	printf("\n  статический массив  указатели:\n");
	int* perem = arr;  // Указатель на первый элемент массива
	for (int i = 0; i < 10; i++)
	{
		*(perem + i) = i * i;
		printf("% d, ", *(perem + i));  // Косвенная адресация через указатель
	}
	printf("\n  динамический массив индекс:\n");
	int* arra;
	arra = new int[N];
	for (int i = 0; i < 10; i++)
	{
		arra[i] = i * i;
		printf("% d, ", arra[i]);  // Косвенная адресация через указатель

	}
	delete[] arra;
	printf("\n  динамический массив  указатели :\n");
	int* array;
	array = new int[N];
	for (int i = 0; i < 10; i++)
	{
		*(array + i) = i * i;
		printf("% d, ", *(array + i));  // Косвенная адресация через указатель

	}
	delete[] array;
}
void zad4(){

	struct el { int s; struct el* p; };
	struct el* p1, * p2, * p3;
	p1 = new struct el;
	p2 = p1;
	for (int i = 1;i <= N;i++)
	{
		p2->s = i;
		if (i < N) { p3 = new struct el; p2->p = p3; p2 = p3; }
	}
	p2->p = NULL;
	p2 = p1;
	while (p2 != NULL)
	{
		printf(" % d", p2->s); 
		p2 = p2->p;
	}
	while (p2 != NULL) { p2 = p1;p1 = p1->p;delete p2; }
}
int main()
{
	int a;
	cin >> a;
	if (a > 1) 
	{ 
		zad3();
	}
	else
	{
		zad4();
	}
	
}




