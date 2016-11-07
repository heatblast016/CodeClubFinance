#include <stdio.h>
#include <stdlib.h>
void create(char name[20], FILE* ptr)
{
    account tmp;
    tmp.balance = 0;
    for(int i = 0; i < 20; i++)
    {
        tmp.name[i] == name[i];
    }
    fseek(ptr, 0, SEEK_END);
    fwrite(&tmp, sizeof(tmp), 1, ptr);
}
void deposit(double amount, FILE* ptr)
{

}
void withdraw(double amount, FILE* ptr)
{

}
void transfer(double amount,char sender[20], char receiver[20], FILE* ptr)
{

}
void checkbalance(char name[20])
{

}