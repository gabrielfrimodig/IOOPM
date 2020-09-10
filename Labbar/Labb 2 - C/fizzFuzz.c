
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void print_number(int num)
{
    if(num % 5 == 0 && num % 3 == 0){
        printf("Fizz Buzz");
    }else if(num % 5 == 0){
        printf("Buzz");
    }else if(num % 3 == 0){
        printf("Fizz");
    }else{
        printf("%d", num);
    }
}

bool is_number(char *str)
{
    for(int i = 1; i < strlen(str); i++){
        if (! isdigit(str[i])){
            return false;
        }
    }
    for(int i = 0; i < strlen(str); i++){
        if (! isdigit(str[i])){
            return false;
        }
    }

    return true;
}

int main(int args, char *argv[])
{
    if(args > 1 && is_number(argv[1])){
        for(int i = 1; i < atoi(argv[1]); i++){
            print_number(i);
            printf(", ");
        }
        print_number(atoi(argv[1]));
    }else{
        printf("Du måste skicka in en siffra!");
    }

    return 0;
}
