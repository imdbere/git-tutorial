#include <stdio.h>
#include <espl_lib.h>

void main() 
{
  printf("Gib eine Zahl ein: ");
  int inputNumber;
  scanf("%d", &inputNumber);
  const char* text = num_to_words(inputNumber);
  printf(text);

}
