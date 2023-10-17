#include <stdio.h>
#include <string.h>

int main(){
    char text[50] = "Hello World! Hey\n";
    char *splitted_text = strtok(text, " ");

    while (splitted_text != NULL)
    {
        printf("%s\n", splitted_text);
        splitted_text = strtok(NULL, " ");
    }
    return 0;
}