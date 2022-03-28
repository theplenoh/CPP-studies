#include <iostream>
#include <cstring>
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
void depositToAccount(Account* [], const int);
void withdrawFromAccount(Account* [], const int);
void searchForRecord(Account* [], const int);
void printAllAccounts(Account* [], const int);
void freeAllRecords(Account* [], const int);

int main()
{
    Account* accList[LIST_SZ];
    int numOfRows = 0;

    printMenu();
    while(true)
    {
        int choice;

        cout<<">> ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                printMenu();
                break;
            case 2:
                createAccount(accList, &numOfRows);
                break;
            case 3:
                depositToAccount(accList, numOfRows);
                break;
            case 4:
                withdrawFromAccount(accList, numOfRows);
                break;
            case 5:
                searchForRecord(accList, numOfRows);
                break;
            case 6:
                printAllAccounts(accList, numOfRows);
                break;
            case 7:
                cout<<"Exiting the program."<<endl;
                freeAllRecords(accList, numOfRows);
                return 0;
                break;
            default:
                cout<<"Error - an exception!"<<endl;
                return 1;
        }
    }

    freeAllRecords(accList, numOfRows);

    return 0;
}

void printMenu()
{
    cout<<"=== Menu ============================="<<endl;
    cout<<"1. Print this menu"<<endl;
    cout<<"2. Create an account"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Withdraw"<<endl;
    cout<<"5. Search for an account by customer name"<<endl;
    cout<<"6. Print the whole list of accounts"<<endl;
    cout<<"7. Exit this program"<<endl;
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
void depositToAccount(Account* list[], const int row)
{
    int accID;
    int money;

    cout<<"# Deposit to account"<<endl;
    cout<<"Account ID: ";
    cin>>accID;
    cout<<"Money: ";
    cin>>money;

    for(int i=0; i<row; i++)
    {
        if(accID == list[i]->accID)
        {
            list[i]->balance += money;
            cout<<money<<" is deposited to an account with ID: "<<list[i]->accID<<endl;
        }
    }
}
void withdrawFromAccount(Account* list[], const int row)
{
    int accID;
    int money;

    cout<<"# Withdraw from account"<<endl;
    cout<<"Account ID: ";
    cin>>accID;
    cout<<"Money: ";
    cin>>money;

    for(int i=0; i<row; i++)
    {
        if(accID == list[i]->accID)
        {
            list[i]->balance -= money;
            cout<<money<<" is withdrawn from an account with ID: "<<list[i]->accID<<endl;
        }
    }
}
void searchForRecord(Account* list[], const int row)
{
    char searchWord[20];

    cout<<"Search word: ";
    cin>>searchWord;

    cout<<"# Search Result"<<endl;
    for(int i=0; i<row; i++)
    {
        if(!strcmp(list[i]->customerName, searchWord))
            cout<<i<<". "<<list[i]->accID<<" "<<list[i]->customerName<<endl;
    }
}
void printAllAccounts(Account* list[], const int row)
{
    cout<<"# Print All Accounts"<<endl;
    for(int i=0; i<row; i++)
    {
        cout<<"Account ID: "<<list[i]->accID<<endl;
        cout<<"Customer name: "<<list[i]->customerName<<endl;
        cout<<"Balance: "<<list[i]->balance<<endl;
    }
}
void freeAllRecords(Account* list[], const int row)
{
    for(int i=0; i<row; i++)
        delete list[i];
}
