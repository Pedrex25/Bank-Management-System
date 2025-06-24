#include <stdio.h>
#include <string.h>

/*
In progress...
*/

#define MAX_USERS 1001 // Solution found for creating "Dynamic variable names" for each member created of the bank struct.
// In this case created a global array fot storing all of the members created.

typedef struct Bank
{
    unsigned const char account_number[20];
    char holder_name[100];
    char card_number[17];
    char pin_code[5];
    double balance;
    char account_type[20];
    _Bool is_active;
    char email[100];
    char phone_number[15];
    char address[251];
    char creation_date[11]; // DD-MM-YYYY
    unsigned int transactions_count;
} Bank;

// Implement alogirhtm to create credit cards

float transfer_money(float money)
{
    return money;
}

// first
Bank create_account(unsigned const char account_number[], char holder_name[], char card_number[], char pin_code[], double *balance,
                    char account_type[], _Bool *is_active, char email[], char phone_number[], char address[], char creation_date[],
                    unsigned int *transactions_count)
{
    Bank new_user;
    strcpy(new_user.address, account_number);
    return new_user;
}

// second
void check_amount()
{
}

void login_functionality()
{
}

void list_users()
{
}

int main()
{
    Bank global_users[MAX_USERS];
    int user_count = 0;

    // Automatically assign
    // global_users[user_count++] = create_account("111", "Pedro");
    // global_users[user_count++] = create_account("222", "Joana");

    // printf("User 1 name: %s\n", global_users[0].holder_name);
    // printf("User 2 name: %s\n", global_users[1].holder_name);

    return 0;
}