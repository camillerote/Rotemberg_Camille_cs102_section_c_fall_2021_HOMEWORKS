#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define inputted_array 3  //size of the array
 
//function to display array/then print out the inputted  array
void display(char array[][40]){
  for(int i=0; i<inputted_array; i++){
    printf("%s : %ld ", array[i], strlen(array[i]));
  }
  printf("\n");
}

void stringLength(char array[][40]){
  char temp[40];
  // Buuble Sort
  for(int i=0; i<inputted_array; i++){
    for(int j=0; j<inputted_array-1-i; j++){
      if(strlen(array[j]) > strlen(array[j+1])){
        //swap array[j] and array[j+1]
        strcpy(temp, array[j]);
        strcpy(array[j], array[j+1]);
        strcpy(array[j+1], temp);
      }
    }
  }
  //display the sorted array
  printf("Length Sorted Array: ");
  display(array);
}

void alpha(char array[][40]){
  char temp[40];
  // Buuble Sort 
  for(int i=0; i<inputted_array; i++){
    for(int j=0; j<inputted_array-1-i; j++){
      if(strcmp(array[j], array[j+1]) > 0){
        //swap array[j] and array[j+1]
        strcpy(temp, array[j]);
        strcpy(array[j], array[j+1]);
        strcpy(array[j+1], temp);
      }
    }
  }
  //display the sorted array
  printf("Alpha Sorted Array: ");
  display(array);
}

int main()
{
  
//create an array of strings
  char array[inputted_array][40];

  //Inputting names
  printf("Enter %d Lower case letter strings: \n", inputted_array);
  for(int i=0; i<inputted_array; i++){
    scanf("%s", array[i]);
  }

  //display the original array
  printf("Original array: ");
  
  display(array); // printing the array
  alpha(array); // throwing the array in and sorting it by alphabetical order
  stringLength(array); // throwing in the array and sorting it by string length  

    return 0;
 }




