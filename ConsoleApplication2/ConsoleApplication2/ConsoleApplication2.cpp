#include <iostream>
using namespace std;
#define N 10
struct Node {
	int data;//поле для хранения числа (здесь будет порядковый номер элемента).
	Node* next;

	Node(int value) : data(value), next(NULL) {}
};
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
	setlocale(LC_ALL, "Ru");
	printf("\n  Линейный самоадресуемый список:\n");
	Node* head =	NULL;
	Node* tail = NULL;
	for (int i = 1; i <= N; ++i) {//создаем N элементов списка.
		Node* newNode = new Node(i);//создаем новый узел со значением i.
			if (!head) {          //если список пуст:
				head = newNode;   //новый узел становится головой.
				tail = newNode;   //он же становится хвостом.
			}
			else {
				tail->next = newNode; //хвост указывает на новый узел.
				tail = newNode;       //  новый узел становится хвостом.
			}
	}
	Node* current = head;
	while (current) {
		printf("% d ,", current->data);
		current = current->next;
	}
	while (head) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}		
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




