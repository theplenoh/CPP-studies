#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;

#define LIST_SZ 100

struct Account
{
    int accID;
    char customerName[50];
    int balance;
};

void printMenu();
void createAccount(Account* [], int*);
void printAllAccounts(Account* const [], const int);

int main()
{
    Account* accList[LIST_SZ];
    int numOfRows = 0;

    printMenu();

    createAccount(accList, &numOfRows);

    printAllAccounts(accList, numOfRows);

    return 0;
}

void printMenu()
{
    cout<<"=== Menu ============================="<<endl;
    cout<<"1. Print this menu"<<endl;
    cout<<"2. Create an account"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Withdraw"<<endl;
    cout<<"5. Print the whole list of accounts"<<endl;
    cout<<"6. Exit this program"<<endl;
    cout<<"======================================"<<endl;
}
void createAccount(Account* list[], int *row)
{
    list[*row] = new Account;

    cout<<"# Create An Account"<<endl;
    cout<<"Account ID: ";
    cin>>list[*row]->accID;
    cout<<"Customer name: ";
    cin>>list[*row]->customerName;
    cout<<"Initial money deposit: ";
    cin>>list[*row]->balance;

    (*row)++;
}
void printAllAccounts(Account* const list[], const int row)
{
    cout<<"# Print All Accounts"<<endl;
    for(int i=0; i<row; i++)
    {
        cout<<"Account ID: "<<list[i]->accID<<endl;
        cout<<"Customer name: "<<list[i]->customerName<<endl;
        cout<<"Balance: "<<list[i]->balance<<endl;
    }
}
