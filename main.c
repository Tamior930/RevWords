#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char* input)
{
    int len = strlen(input);
    int half = strlen(input) / 2;

    char* rev = (char*)malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++) {
        
        rev[i] = input[i];
        if(i >= half)
        rev[i] = input[len - i - 1];
    }

    rev[len] = '\0';

    return rev;
}

int main()
{
    char input[20];

    scanf("%s", input);

    char* reversed = reverse(input);
    printf("%s", reversed);

    free(reversed);

    return 0;
}
