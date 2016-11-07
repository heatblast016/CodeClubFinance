/*Define/declare stuff*/
typedef struct
{
    char name[20];
    double balance;
} account;
//function prototypes
void create(char name[20], FILE *ptr);
void deposit(char name[20], double amount, FILE* ptr);
void withdraw(char name[20], double amount, FILE* ptr);
void transfer(double amount,char sender[20], char receiver[20], FILE* ptr);
void checkbalance(char name[20]);