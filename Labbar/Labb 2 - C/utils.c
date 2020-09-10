
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int ask_question_int(char *question)
{
    int result = 0;
    int conversions = 0;

    do{
        printf("%s\n", question);
        conversions = scanf("%d", &result);

        int c;
        do{       // Tar bort oöndskade chars som är kvar
            c = getchar();
        } while (c != '\n');

        putchar('\n');
    } while (conversions < 1);  // char * > 1

    return result;
}

char *ask_question_string(char *question, char *buf, int buf_siz)
{
    char result[255];
    do{
        printf("%s\n", question);
        scanf("%s", result);
    } while (strlen(result) == 0);

    return strdup(result); //pointer to a null-terminated string
}

int read_string(char *buf, int buf_siz)
{
    char ch;
    int i=0;
    do {
        ch = getchar();

        if(ch!='\n') {
            buf[i] = ch;
            i++;
        }
    } while(ch != '\n' && i < buf_siz-1);

    if(i == buf_siz-2) {  //== clear string buffert
        int c;
        do {
            c = getchar();
        } while (c != '\n' && c != EOF);
    }

    buf[i] = '\0'; // null terminated

    return i;
}
