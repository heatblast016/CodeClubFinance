#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "funcs.h"
int main(void)
{
    //open file
    FILE* inputfile = fopen("atmlog.atml", "w+");
    char name[20];
    for(int i = 65; i <= 85; i++)
    {
        name[i-65] = i;
    }
    create(name, inputfile);
    fclose(inputfile);
}