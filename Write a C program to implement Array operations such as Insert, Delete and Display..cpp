//C Function to Search an Element in an Array
int findElement(int array[], int size, int keyToBeSearched) 
{ 
int i; 
// Finding & returning the position of the element 
for (i = 0; i < size; i++) 
if (array[i] == keyToBeSearched) 
return i; 
return - 1; 
}


//C Program to Search an Element in an Array
#include<stdio.h> 
// Function to find the element for deletion
// where array[] is the array from which element needs to be deleted
// size is the size of the array
// keyToFind is the element to be deleted from the array
int findElement(int array[], int size, int keyToBeSearched) 
{ 
int i; 
// Finding & returning the position of the element 
for (i = 0; i < size; i++) 
if (array[i] == keyToBeSearched) 
return i; 
return - 1; 
}  
// Main Function 
int main() 
{ 
int array[] = { 31, 27, 3, 54, 67, 31 };
int size = sizeof(array) / sizeof(array[0]); 
int keyToBeSearched = 67; 
// Calling the function to delete an element from the array
int pos = findElement(array, size, keyToBeSearched); 
if(pos==-1){
printf("n Element %d not found", keyToBeSearched);
}
else{
printf("n Position of %d: %d", keyToBeSearched ,pos+1);
}
return 0; 
}



//C function to Insert An Element in An Array
//Function to insert an element in an array.
//arr[] = array, elements = number of elements present in the array
//keyToBeInserted = element to be inserted in the array
// size of the array
int insertElement(int arr[], int elements, int keyToBeInserted, int size) 
{ 
// Check if the capacity of the array is already full 
if (elements >= size) 
return elements; 
//If not then the element is inserted at the last index 
//and the new array size is returned
arr[elements] = keyToBeInserted; 
return (elements + 1); 
}


//Example
#include<stdio.h> 
//Function to insert an element in an array.
//arr[] = array, elements = number of elements present in the array
//keyToBeInserted = element to be inserted in the array
// size of the array
int insertElement(int arr[], int elements, int keyToBeInserted, int size) 
{ 
// Check if the capacity of the array is already full 
if (elements >= size) 
return elements; 
//If not then the element is inserted at the last index 
//and the new array size is returned
arr[elements] = keyToBeInserted;   
return (elements + 1); 
}  
// Main Function 
int main() 
{ 
int array[20] = { 31, 27, 3, 54, 67, 31 };
int size = sizeof(array) / sizeof(array[0]); 
int elements = 6; 
int i, keyToBeInserted = 32; 
printf("n Before Insertion: "); 
for (i = 0; i < elements; i++) 
printf("%d  ", array[i]); 
// Calling the function to insert the element in the array
elements = insertElement(array, elements, keyToBeInserted, size); 
printf("n After Insertion: "); 
for (i = 0; i < elements; i++) 
printf("%d  ",array[i]); 
return 0; 
}


//C Function to Delete An Element From An Array
// Function to delete an element
// where array[] is the array from which element needs to be deleted
// size is the size of the array
// keyToBeDeleted is the element to be deleted from the array
int deleteElement(int array[], int size, int keyToBeDeleted) 
{ 
// Calling findElement function to get the position of the element which needs to be deleted
int pos = findElement(array, size, keyToBeDeleted); 
// If element is not found then it prints Element not found
if (pos == - 1) 
{ 
printf("Element not found"); 
return size; 
} 
// Otherwise it deletes the element & moves rest of the element by one position
int i; 
for (i = pos; i < size - 1; i++) 
array[i] = array[i + 1]; 
return size - 1; 
} 


//Example
#include<stdio.h> 
// Function to delete an element
// where array[] is the array from which element needs to be deleted
// size is the size of the array
// keyToBeDeleted is the element to be deleted from the array
int deleteElement(int array[], int size, int keyToBeDeleted) 
{ 
// Calling findElement function to get the position of the element which needs to be deleted
int pos = findElement(array, size, keyToBeDeleted); 
// If element is not found then it prints Element not found
if (pos == - 1) 
{ 
printf("Element not found"); 
return size; 
} 
// Otherwise it deletes the element & moves rest of the element by one position
int i; 
for (i = pos; i < size - 1; i++) 
array[i] = array[i + 1]; 
return size - 1; 
} 
// Function to find the element for deletion
int findElement(int array[], int size, int keyToBeDeleted) 
{ 
int i; 
// Finding & returning the position of the element 
for (i = 0; i < size; i++) 
if (array[i] == keyToBeDeleted) 
return i; 
return - 1; 
}   
// Main Function 
int main() 
{ 
int array[] = { 31, 27, 3, 54, 67, 31 };
int size = sizeof(array) / sizeof(array[0]); 
int i, keyToBeDeleted = 67; 
printf("n Before Deletion: "); 
for (i = 0; i < size; i++) 
printf("%d  ", array[i]); 
// Calling the function to delete an element from the array
size = deleteElement(array, size, keyToBeDeleted); 
printf("n After Deletion: "); 
for (i = 0; i < size; i++) 
printf("%d  ",array[i]); 
return 0; 
}
