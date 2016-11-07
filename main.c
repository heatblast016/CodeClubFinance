#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "funcs.h"
int main(void)
{
    //open file
    FILE* inputfile = fopen("atmlog.atml", "w+");
    fclose(inputfile);
}