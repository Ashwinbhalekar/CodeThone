//Noobs Banking System Project.

#include<iostream>
using namespace std;

class account
{
private:
    string name;
    int accno;
    string atype;
public:
    void  getAccountDetails()
    {
        cout<<"\tEnter Customer Name : ";
        cin>>name;
        cout<<"\tEnter Account Number  : ";
        cin>>accno;
        cout<<"\tEnter Account Type    : ";
        cin>>atype;
    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accno;
        cout<<"\nAccount Type    : "<<atype;
    }
    void applyLoan()
    {
        int choice;
        cout<<"\n________Choose Your Loan Option_________ \n";
        cout<<"\n1.Home loan\n";
        cout<<"\n2.Education loan\n";
        cout<<"\n3.Auto loan\n";
        cin>>choice;
        switch (choice)
        {
            case 1: cout<<"____Your choice of home, with your choice of home loan__\n ___Apply now___";
            break;
                    
            case 2: cout<<"\n___Give your career dreams an edge__\n____Apply now___\n";
            break;
            case 3: cout<<"\n___WHY REACH WHEN YOU CAN ARRIVE?___\n Presenting quick and hassle free auto loan\n";
                    cout<<"\n Apply now";
                    break;
            default: cout<<"\nInvalid choice";



       
        }

        
    }
};
class current_account : public account
{
private:
    float balance;
public:
    void c_display()
    {
        cout<<"\nBalance :"<<balance;
    }
    void c_deposit()
    {
        float deposit;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"\n\nBalance : "<<balance;
        cout<<"\nEnter amount to be withdraw :";
        cin>>withdraw;
        if(balance > 1000)
        {
            balance=balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
 
    }
 
 
};
 
class saving_account : public account
{
private:
    float sav_balance;
public:
    void s_display()
    {
        cout<<"\nBalance :  "<<sav_balance;
    }
    void s_deposit()
    {
        sav_balance=200;
        float deposit,interest;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        //interest=(sav_balance*2)/100;
        //sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance :- "<<sav_balance;
        cout<<"\nEnter amount to be withdraw : ";
        cin>>withdraw;
        if(sav_balance > 500)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
};
 
 
 
int main()
{
    current_account c1;
    saving_account s1;
    char type;
    cout<<"\n_________________Welcome to noobs bank______________\n";
    cout<<"\nEnter S for saving customer and C for current a/c customer : ";
    cin>>type;
    int choice;
    if(type=='s' || type=='S')
    {
        s1.getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Apply for loans"<<endl;
            cout<<"6)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s1.s_deposit();
                break;
            case 2 :
                s1.s_withdraw();
                break;
            case 3 :
                s1.s_display();
                break;
            case 4 :
                s1.displayDetails();
                s1.s_display();
                break;
            case 5  :
                s1.applyLoan();    
            case 6 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else if(type=='c' || type=='C')
    {
        c1.getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                c1.c_deposit();
                break;
            case 2 :
                c1.c_withdraw();
                break;
            
            case 3 :
                c1.c_display();
                break;
            case 4 :
                c1.displayDetails();
                c1.c_display();
                break;
            case 5 :

                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else
    {
        cout<<"\nInvalid Account Selection";
    }
end:
    cout<<"\nThank You for Banking with us..";
    return 0;
}
