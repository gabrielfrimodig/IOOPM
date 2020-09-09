
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int args, char *argv[])
{
  if (args != 2){
      puts("Usage: ./a.out number");
    }else{

      int num = atoi(argv[1]);
      int max = floor(sqrt(num)) + 1;   // floor = skapar heltal av float
      int done = 0;

      for (int i = 2; i <= max; i++){
          for (int j = 2; j <= num; j++){
              if ((j * i) == num){
                  done = 1; // Use Int as boolean
                }
            }
        }

      if (done == 0){
          printf("%d is a prime number\n", num);
        } else{
          printf("%d is not a prime number\n", num);
        }
    }
  return 0;
}
