#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "funcs.h"
void create(char name[20], FILE* ptr)
{
    account tmp;
    tmp.balance = 0;
    for(int i = 0; i < 20; i++)
    {
        tmp.name[i] == name[i];
    }
    fseek(ptr, 0, SEEK_END);
    fwrite(&tmp, sizeof(account), 1, ptr);
}
/*
void deposit(char name[20], double amount, FILE* ptr)
{
    account tmp;
    fseek(ptr, 0, SEEK_SET);
    while(fread(&ptr, sizeof(account), 1, ptr)
    {
        fread(&ptr, sizeof(account), 1, ptr);
        
    }
}
*/
void withdraw(char name[20], double amount, FILE* ptr)
{

}
void transfer(double amount,char sender[20], char receiver[20], FILE* ptr)
{

}
void checkbalance(char name[20])
{

}