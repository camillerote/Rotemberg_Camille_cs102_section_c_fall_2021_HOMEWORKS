#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define array_input 3  //size of the array to be able to use it in functions outside main
 
//function to display array/then print out the inputted  array
void display(char array[][40]){
  for(int i=0; i<array_input; i++){
    printf("%s : %ld ", array[i], strlen(array[i]));
  }
  printf("\n");
}

void stringLength(char array[][40]){
  char temp[40];
  // Buuble Sort using strlen in stdlib.h
  for(int i=0; i<array_input; i++){
    for(int j=0; j<array_input-1-i; j++){
      if(strlen(array[j]) > strlen(array[j+1])){
        strcpy(temp, array[j]);       
        strcpy(array[j], array[j+1]);
        strcpy(array[j+1], temp);
      }
    }
  }

  printf("Length Sorted Array: ");
  display(array);
}

void stringAlpha(char array[][40]){
  char temp[40];
  // Buuble Sort using strcmp to sort arrays  
  for(int i=0; i<array_input; i++){
    for(int j=0; j<array_input-1-i; j++){
      if(strcmp(array[j], array[j+1]) > 0){
        strcpy(temp, array[j]);
        strcpy(array[j], array[j+1]);
        strcpy(array[j+1], temp);
      }
    }
  }
  //stdout sorted sorted array
  printf("Alpha Sorted Array: ");
  display(array);
}

int main()
{

  char array[array_input][40];

  
  printf("Enter %d Lower case letter strings: \n", array_input);
  for(int i=0; i<array_input; i++){
    scanf("%s", array[i]);
  }

  
  printf("Original array: ");
  
  display(array); // printing the array
  stringAlpha(array); //sorting array alphabetical order
  stringLength(array); // sorting it by string length  

    return 0;
 }




