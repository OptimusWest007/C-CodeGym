#include <stdio.h>
int main()
{
    FILE *wesa = fopen("auma.txt", "a");
    fprintf(wesa, "This is a new line\nAnd this is also another new line\nFollowed by this one too!\nGreat\nIsn't it?");
    fclose(wesa);  
    return 0;
}