#include <stdio.h>   

void PrintArray(int arr[], int n);
void InsertionSort(int arr[], int n);

// Main Function 
void main() 
{ 
int arr[10], n, i;
printf("Enter number of elements : ");
scanf("%d", &n); 
printf("Enter %d Numbers:", n); 
for(i = 0; i < n; i++)
scanf("%d", &arr[i]); 
InsertionSort(arr, n); 
PrintArray(arr, n); 
}

// Function to print the elements of an array
void PrintArray(int arr[], int n) 
{ 
int i; 
for (i = 0; i < n; i++) 
printf("%d \t", arr[i]); 
}  

// Insertion Sort Function
void InsertionSort(int arr[], int n) 
{ 
int i, j, element; 
for (i = 1; i < n; i++) 
{ 
	element = arr[i]; 
	j = i - 1; 
	while (j >= 0 && arr[j] > element) 
	{ 
		arr[j + 1] = arr[j]; 
		j = j - 1; 
	}
	arr[j + 1] = element; 
} //End of for loop
}    
