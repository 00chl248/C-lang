#include <stdio.h> // printf / scanf �ʼ�
#include <stdlib.h> // �����Ҵ� �ʼ�
#include <string.h> // ���ڿ� �Լ� �ʼ�

#pragma warning (disable:4996)

typedef struct CoffeeStruct {

	char name[20];
	int price;

}coffee;

typedef struct Node {

	int data;
	struct Node* next;

} node;

node* createNode(int n);



int main() {

	

	/*
	int * arr;

	int n = 0;
	printf("���� �迭�� ũ�⸦ �Է��ϼ��� > ");
	scanf("%d", &n);


	arr = (int*)malloc(n * sizeof(int));

	int i = 0;

	

	for (i = 0; i < n; i++)
	{
		printf("�迭�� ���� ������ �Է��ϼ��� > ");
		scanf("%d", &arr[i]);
	}

	int max = arr[0];

	for (i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	 
	printf("���� �迭�� �ִ밪�� %d�Դϴ�", max);
	*/


	/*
	
	
	int n = 0;
	printf(" �迭�� ũ�⸦ �Է��ϼ��� > ");
	scanf("%d", &n);

	coffee* ptr;

	ptr = (coffee*)malloc(n * sizeof(coffee));

	int i = 0;

	while(i < n)
	{
		getchar();

		printf("Ŀ���̸� �Է� > ");
		gets(ptr[i].name);

		printf("Ŀ�� ���� �Է� > ");
		scanf("%d", &(ptr[i].price));
	

		printf("\n");

		i++;
	}

	i = 0;

	while (i < n)
	{
		printf("%s : %d \n", ptr[i].name, ptr[i].price);
		i++;
	}

	
	*/

	/*
	
	node first;
	first.data = 1;

	node second;
	second.data = 2;

	node third;
	third.data = 3;

	node forth;
	forth.data = 4;


	node* head;
	head = &first;

	first.next = &second;
	second.next = &third;
	third.next = &forth;

	*/

	node* head;

	head = createNode(10);
	head->next = createNode(20);
	head->next->next = createNode(30);



	return 0;

}

void printNode(node *head)
{
	while (head->next != NULL)
	{
		printf("%d->", head->data);
		head = head->next;
	}
}

node* createNode(int n) 
{
	node* newNode;
	newNode = (node*)malloc(sizeof(node));
	newNode->data = n;
	newNode->next = NULL;
	
	return newNode;
}