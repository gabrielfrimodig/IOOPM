
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


bool is_number(char *str)
{
    if(str[0] == '-' && strlen(str) > 1){
        for(int i = 1; i <strlen(str); i++){
            if(!isdigit(str[i])){
                return false;
            }
        }
    }else{
        for(int i = 0; i <strlen(str); i++){
            if(!isdigit(str[i])){
                return false;
            }
        }
    }

    return true;
}

int main(int args, char *argv[])
{
    if((is_number(argv[1]) && is_number(argv[2])) && args == 3){
        int x = abs(atoi(argv[1])); //Absolut value
        int y = abs(atoi(argv[2]));

        if(x > 0 && y > 0){
            bool done = false;

            while (! done){
                if (x > y){
                    x = x - y;
                }
                else if (x < y){
                    y = y - x;
                }
                else{   // x == y
                    printf("gcd(%d, %d) = %d\n", atoi(argv[1]), atoi(argv[2]), x);
                    done = true;
                }
            }
        } else{
            puts("Usage: ./a.out (int>0) (int>0) xxxx");
            }
    } else{
        puts("Usage: ./a.out (int>0) (int>0)");
        }

  return 0;
}
