//William Decker
//lab 1

#include<stdio.h>
#define SIZE 256


int main(void){
  //variables
  int first_int = 0;
  float second_int = 0.0;
  char helloReply[SIZE];
  char buffer[SIZE]="";


  printf("Enter a integer (1 - 10): ");
  fgets(buffer,sizeof(buffer), stdin);
  sscanf(buffer, "%d", &first_int);
  if (0 < first_int < 10){
    for (int i; i < first_int; i++)
      printf("Hello?\n");
  }
  else{
    printf("Only numbers 1 - 10");
  }

  void song() {
    printf("With the lights out, its less dangerous\n Here we are now, entertain us\n I feel stupid and contagious\n Here we are now, entertain us\n A mulatto\n An albino\n A mosquito\n My libido\n\n\n Hey\n");
  }

  song();

  printf("Put a number here to divide it by two : ");
  fgets(buffer,sizeof(buffer), stdin);
  sscanf(buffer, "%f", &second_int);

  float mathMe(float value) {
    return (value/2.0);
  }

  printf("%f\n", mathMe(second_int));


  return 0;
}
