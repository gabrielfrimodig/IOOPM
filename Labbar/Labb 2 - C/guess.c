
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "utils.h"

int main()
{
    srandom(time(NULL));
    int number = random() % 100;    // 0 - 100
    int buf_size = 20;
    char buf[buf_size];
    int guessNumber = 0;  // Players guess
    int guessCount = 0;   // Number of guesses done
    int maxGuess = 15;
    bool correct = false;

    puts("Skriv in ditt namn: ");
    read_string(buf, buf_size);
    printf("Du %s, jag tänker på ett tal ... kan du gissa vilket?\n", buf);

    while(!correct && guessCount < maxGuess){
        guessNumber = ask_question_int(" ");

        if(guessNumber == number){
            printf("Bingo! ");
            correct = true;   //End of game
        }else if(guessNumber > number){
            printf("För stort!");
        }else{
            printf("För litet!");
        }

        guessCount++;
    }

    if(guessCount <= maxGuess){
        printf("Det tog %s %d gissningar att komma fram till %d!\n", buf, guessCount, number);
    }else{
        printf("Nu har du slut på gissningar! Jag tänkte på %d!\n", number);
    }

    return 0;
}
