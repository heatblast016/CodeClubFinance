#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
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

void deposit(char name[20], double amount, FILE* ptr)
{
    int trigger = 0;
    account tmp;
    fseek(ptr, 0, SEEK_SET);
    while(!feof(ptr))
    {
         fread(&tmp, sizeof(account), 1, ptr);
         if(strcmp(tmp.name, name))
         {
             trigger == 1;
             break;
         }
    }
    if(trigger == 0)
    {
        printf("ERROR: ACCOUNT NOT FOUND");
    }
    else
    {
        int x = sizeof(account);
        x *= -1;
        fseek(ptr, x, SEEK_CUR);
        tmp.balance += amount;
        fwrite(&tmp, sizeof(account), 1, ptr);
    }
}

void withdraw(char name[20], double amount, FILE* ptr)
{

}
void transfer(double amount,char sender[20], char receiver[20], FILE* ptr)
{

}
void checkbalance(char name[20])
{

}