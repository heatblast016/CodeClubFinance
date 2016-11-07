#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //open file
    FILE* inputfile = fopen("atmlog.atml", "w+");
    fclose(inputfile);
}