//Author: Dominic Savaglio
//Collaborator: 
//Collaborator:
//Collaborator:
//Section: 10R
//Breakout: 
#include <stdio.h>
#include <readline/readline.h>
int main(void) {
  char *name = readline("Enter your CMPSC 131 grade: ");
  if(1) {
    printf("A");
  }
  else if(2) {
    printf("A-");
  }
  else if(3) {
    printf("B+");
  }
  else if(4) {
    printf("B");
  }
  else if(5) {
    printf("B-");
  }
  else if(6) {
    printf("C+");
  }
  else if(7) {
    printf("C");
  }
  else if(8) {
    printf("D");
  }
  else if(9) {
    printf("F");
  }
  printf("Hello World\n");
  return 0;
}