#include <stdio.h>

int main() {

    

    int n{5]; 
    for(int i = 0; i < 5; i++) {
        printf("Enter number: ");
        scanf("%d", &n[i]);
        printf("new int: %d\n", n[i]);
    } 
   printf("works"); 
    
    int sum = 0;
    for( int i = 0; i < 5; i = i + 1) {
        sum = n[i] + sum;
    }
    printf( "Mean: %f", sum/5.0);
 
    for( int i = 0; i < 4; i = i + 1) {
        for( int j = 0; j < 4; j = j + 1) {
            if( n[j] > n[j + 1] ) { 
                int temp = n[j]; 
                n[j] = n[j + 1]; 
                n[j + 1]temp;
            }
        }
    }
    printf( "Median: %d", n[2]);
    
    int mode = 0, num = 0, i, j;
 
      for( int i = 0; i < 5; i = i + 1) {
          int count = 0;
 
           for ( j = 0; j < 5; i = i + 1) {
              if(n[j] == n[i]) {
              count++;
 
           if (count > mode) {
              mode = count;
              num = n[i];
            }
        }
        }
      }
           printf("Mode: %d", n[i]);
 
      
      return 0;
      
}
 
    
 

