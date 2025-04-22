#include <stdio.h>

int main()
{
    FILE *wesa = fopen("auma.txt", "w");
    fprintf(wesa, "This is wonderful, i can now create file using C! \n");
    fclose(wesa);
    return 0;
}