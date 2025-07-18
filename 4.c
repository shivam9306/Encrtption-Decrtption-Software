//String--Encryption Decrtption
#include<stdio.h>
#include<string.h>
int main(){
    int num;
    char input;
    int i;
    char ch[20];
    int t;
    char a[20];

    while(1){
        printf("*** WELCOME To ENCRYPTION Software ***\n");
        printf("Type 1 For Encryption \n");
        printf("Type 2 for Decryption \n");
        scanf("%d",&num);
        if(num==1){
        printf("You have Selected an option for Encryption \n");
        printf("Type y to confirm for Encryption\n");
        printf("Or Type n to Exit...\n");
        scanf("%s",&input);
        if(input =='y'){
        printf("Now Enter your data to be Encrypted\n");
        scanf("%s",&ch);
        strcpy(a,ch);
         t=strlen(ch);
        printf("Your Entered data is %s \n",ch);
        printf("Data after Encryption is--\n");
         for(i=0;i<t;i++){
             if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u' 
            ||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            printf("%c ",ch[i]+2);
             }else{
            printf("%c ",ch[i]-1);
             }
        }
        }if(input=='n'){
            printf("Thanks for Using Our Software\n");
        }
        printf("\n");
    }
        else if(num==2){
             if(ch[0]=='\0'){
            printf("Please ! Select option 1 to Encrypt data First \n");
             }else{
                printf("you want to be your data Decrypted\n");
                printf("The Decrypted data is %s \n",a);
            }
        }
        else{
            printf("Please Enter valid Choice");
        }
    }
    
    return 0;
}