#include <stdio.h>
int main()
{
    char me[100];
    FILE *wesa = fopen("auma.txt", "r");
    fgets(me, 100, wesa);
    printf("%s", me);
    fclose(wesa);
    return 0;
}