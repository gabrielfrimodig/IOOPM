
#include <stdio.h>
#include <stdlib.h> //Behövs för atoi

int main(int args, char *argv[])
{
    if(args != 3){
        puts("Usage: ./a.out rows growth"); // Felmeddelande
    }
    else{
        int amount = atoi(argv[1]);     // Konverterar "42" till 42, ASCII to Integer
        int step = atoi(argv[2]);
        int total = 0;

        for(int i=0; i <= amount; i++){
            for(int j=0; j<(i*step); j++){
                printf("*");
                total++;
            }
            printf("\n");
        }

        printf("Totalt: %d\n", total);
    }

  return 0;
}
