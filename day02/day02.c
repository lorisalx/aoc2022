#include <stdio.h>

int main() {
  char ch1, ch2;
  int firstSum = 0;
  int secondSum = 0;
  FILE *file = fopen("input.txt", "r");

  while (fscanf(file, "%c %c\n", &ch1, &ch2) == 2) {
    if (ch1 == 'A' && ch2 == 'X') {
      firstSum += 4; // 1 ROCK + 3 DRAW ROCK
      secondSum += 3; // 3 SCISSORS + 0 LOSE ROCK

    }
    else if (ch1 == 'A' && ch2 == 'Y')
    {
      firstSum += 8; // 2 PAPER + 6 WIN ROCK 
      secondSum += 4; // 1 ROCK + 3 DRAW ROCK
    }
    else if (ch1 == 'A' && ch2 == 'Z')
    {
      firstSum += 3; // 3 SCISSORS + 0 LOSE ROCK 
      secondSum += 8; // 2 PAPER + 6 WIN ROCK 
    }
    else if (ch1 == 'B' && ch2 == 'X')
    {
      firstSum += 1; // 1 ROCK + 0 LOSE PAPER 
      secondSum += 1; // 1 ROCK + 0 LOSE PAPER 
    }
    else if (ch1 == 'B' && ch2 == 'Y')
    {
      firstSum += 5; // 2 PAPER + 3 DRAW PAPER 
      secondSum += 5; // 2 PAPER + 3 DRAW PAPER 
    }  
    else if (ch1 == 'B' && ch2 == 'Z')
    {
      firstSum += 9; // 3 SCISSORS + 6 WIN PAPER
      secondSum += 9; // 3 SCISSORS + 6 WIN PAPER
    }  
    else if (ch1 == 'C' && ch2 == 'X')
    {
      firstSum += 7; // 1 ROCK + 6 WIN SCISSORS
      secondSum += 2; // 2 PAPER + 0 LOSE SCISSORS
    }  
    else if (ch1 == 'C' && ch2 == 'Y')
    {
      firstSum += 2; // 2 PAPER + 0 LOSE SCISSORS
      secondSum += 6; // 3 SCISSORS + 3 DRAW SCISSORS
    }  
    else if (ch1 == 'C' && ch2 == 'Z')
    {
      firstSum += 6; // 3 SCISSORS + 3 DRAW SCISSORS
      secondSum += 7; // 1 ROCK + 6 WIN SCISSORS
    }      
  }
  printf("Total score first strategy : %d \n", firstSum);
  printf("Total score real strategy : %d \n", secondSum);

  fclose(file);

  return 0;
}