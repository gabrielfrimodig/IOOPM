
#include <stdio.h>

int main(void)
{
  int total = 0;

  for(int i = 0; i <= 10; i++){
      for(int j = 0; j < i; j++){
        printf("*");
        total++;                        //Total number
      }
    puts("");
  }

  printf("Totalt: %d\n", total);

  return 0;
}
