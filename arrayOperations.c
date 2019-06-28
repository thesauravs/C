//Array and it's operation 

#include<stdio.h>

void display(int arr[], int size){
	printf("\nThe array elements are: \n");
	for(int i = 0; i < size; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

void insertion(int arr[], int size, int pos, int newElement){
	int temp;
	temp = size;
	size = size+1;
	while(temp >= pos-1){
		arr[temp+1] = arr[temp];
		temp = temp - 1;
	}
	arr[pos-1] = newElement;
}

void deletion(int arr[], int size, int pos){
	int temp;
	temp = pos-1;
	while(temp < size){
		arr[temp] = arr[temp+1];
		temp = temp+1;
	}
	size = size-1;
}

void search(int arr[], int size, int newElement){
	for(int i = 0; i < size; ++i){
		if(newElement != arr[i])
			continue;
		else
			printf("\n%d found in array at position %d.\n", newElement, i+1);
	}	
}

void update(int arr[], int newElement, int pos){
	arr[pos-1] = newElement;
}

int main(){
	int arr[100], size, choice, pos, newElement;

	printf("\nEnter the size of array: ");
	scanf("%d", &size);

	printf("\nEnter the array elements: \n");
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}

	display(arr, size);

	printf("\n ARRAY OPERATIONS\n");
	printf("\n 1. Insertion");
	printf("\n 2. Deletion");
	printf("\n 3. Search");
	printf("\n 4. Update");

	printf("\nEnter the choice: ");
	scanf("%d", &choice);

	switch(choice){
		case 1: printf("\nEnter the position: ");
				scanf("%d", &pos);
				printf("\nEnter the element: ");
				scanf("%d", &newElement);
				insertion(arr, size, pos, newElement);
				display(arr, size+1);
				break;

		case 2: printf("\nEnter the position: ");
				scanf("%d", &pos);
				deletion(arr, size, pos);
				display(arr, size-1);
				break;

		case 3: printf("\nEnter the element to search in array: ");
				scanf("%d", &newElement);
				search(arr, size, newElement);
				break;

		case 4: printf("\nEnter the new element: ");
				scanf("%d", &newElement);
				printf("\nEnter the position: ");
				scanf("%d", &pos);
				update(arr, newElement, pos);
				display(arr, size);
				break;
	}
return 0;
}