/*Define a structure customer to specify data of customer in a bank. The data to be
stored is: Account number (integer), Name (character string having at most 50 characters), and Balance in
account (integer).
Assume data for all the 10 customers of the bank are stored in the structure array :
struct customer bank[10];
The function, transaction, is used to perform a customer request for withdrawal or deposit to the account.
Every such request is represented by the following three quantities: Account number of the customer,
request type (0 for deposit and 1 for ) and amount. The function prototype is as follows:
int transaction ( int account_number, int request_type, int amount, struct customer bank[10])
The transaction function returns 0 if the transaction fails and 1 otherwise. The transaction fails only when
the account balance is less than the withdrawal amount requested. The array bank (defined above) is
another input to the transaction function and is suitably updated after every request. In case of a failed
transaction no change is made in the bank array.
Write a main() function which populates the array bank with values for 5 customers. Also, the main()
should take a withdrawal request from the user (i.e., read values for account number, amount), and call
the transaction function, and thereby print if it is a valid transaction. If valid, it should print the balance
after the withdrawal.*/
#include<stdio.h>
struct customer{
    long int accountno;
    char name[50];
    long int balance;
 }s[3];
int transaction(long int account_number, int request_type, long int *balance, int amount);
int main(){
    int request_type,amount,w,d;
    for(int i=0;i<3;i++){
    printf("Enter customer %d details:\n", i + 1);
    printf("Name: ");
	getchar();
    scanf("%[^\n]s", s[i].name);
     printf("Account Number: ");
     scanf("%ld", &s[i].accountno);
     printf("Balance: ");
     scanf("%ld", &s[i].balance);
    }
printf("Enter customer number(0to9): ");
int k;
scanf("%d",&k);
printf("Request type (withdrawal: 1, deposit: 0): ");
scanf("%d",&request_type);
    if(request_type==1){
    printf("Enter the amount for withdrawal: ");
     scanf("%d",&amount);
    w=transaction(s[k].accountno, request_type, &(s[k].balance), amount);
    if(w==1){
    printf("Transaction successful! name:%s\tNew balance: %ld\n",s[k].name,s[k].balance);
    }else
     printf("Transaction unsuccessful.name:%s\tCurrent balance: %ld\n",s[k].name,s[k].balance + amount);
    }
    else if(request_type==0){
printf("Enter the amount to deposit: ");
scanf("%d", &amount);
d=transaction(s[k].accountno, request_type, &(s[k].balance), amount);
 if(d==1){
     printf("Transaction successful.name;%s\tNew balance: %ld\n",s[k].name,s[k].balance);} }
 return 0;}
int transaction(long int account_number, int request_type, long int *balance, int amount) {
    if(request_type==1){
        *balance-=amount;
    if(*balance<0){
    return 0; }
    else {
    return 1;}
    }
    if(request_type==0){ 
    *balance+=amount;
    return 1;}
}
