#include<iostream>
using namespace std;

class ACCOUNT
{
    public:
    struct acc_details
    {
        string name_of_accountholder;
        long int acc_number;
        string type_of_account;
        long int balance_ammount;
    };

    acc_details ad[2];

    void initialize()
    {
        cout << "Enter the account holder details.\n\n";
        for( int i = 0; i<2;i++)
        {
            cout << "Enter account holder " << i+1 << " name : ";
            cin >> ad[i].name_of_accountholder;
            cout << "Enter account holder " << i+1 << " account number : ";
            cin >> ad[i].acc_number;
            cout << "Enter account holder " << i+1 << " type of account : ";
            cin >> ad[i].type_of_account;
            cout << "Enter account holder " << i+1 << " balance amount : ";
            cin >> ad[i].balance_ammount;
            cout << "\n\n";
        }
    }
    void deposit_money()
    {
        long int find_acc,deposit_amount,found=0;
        cout << "Enter your account number : ";
        cin >> find_acc;
        for( int i = 0 ; i<2; i++)
        {
            if(find_acc==ad[i].acc_number)
            {
                cout << "Enter amount to be deposited : ";
                cin >> deposit_amount;
                ad[i].balance_ammount+=deposit_amount;
                cout << "\n\nAmount is succsfully deposited to your account.\n\n";
                found=0;
                break;
            }
            else{
                found=1;
            }
        }
            if(found)
            {
                cout << "\nError ::  Account not found!\n\n";
            }
    }
        void wid_money()
    {
        long int find_acc,wid_amount,found=0;
        cout << "Enter your account number : ";
        cin >> find_acc;
        for( int i = 0 ; i<2; i++)
        {
            if(find_acc==ad[i].acc_number)
            {
                cout << "Enter amount to be withdrawal : ";
                cin >> wid_amount;
                if(wid_amount <= ad[i].balance_ammount)
                {
                    ad[i].balance_ammount-=wid_amount;
                    cout << "\n\nAmount is succsfully withdrawal from account.\n\n";
                }
                if(wid_amount > ad[i].balance_ammount)
                {
                    cout << "Not info funds in your account!";
                }
                found=0;
                break;
            }
            else{
                found=1;
            }
        }
            if(found)
            {
                cout << "\nError ::  Account not found!\n\n";
            }
    }
    void display_acc_holders()
    {
        cout << "All account holder details,\n\n";
        for( int i = 0 ; i<2 ; i++)
        {
            cout << "Name : " << ad[i].name_of_accountholder << endl;
            cout << "Account number  : " << ad[i].acc_number << endl;
            cout << "Type of account  : " << ad[i].type_of_account << endl;
            cout << "Balance amount : " << ad[i].balance_ammount << endl;
        }
    }
    
};
int main()
{
    ACCOUNT ob;
    ob.initialize();
    ob.deposit_money();
    ob.wid_money();
    ob.display_acc_holders();
    cout << "\nWritten by:\n";
    cout << "AMAN KUMAR \nEnroll number 03113203123 \nBranch IT 1 sem 2";
    return 0;
}