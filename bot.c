#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("\t\t\t\t\t*****BOT MESSENGER*****\t\t\t\t\t\t\t\t\n");
    printf("Hi i am a bot messenger\n\t\t\t\t\t\t\t\t\t");
    while(1)
    {

        gets(str);
        if(strcmp(str,"hi")==0)
        {
            printf(" \nHi i am bot messenger.Ask me something?\n\t\t\t\t\t\t\t\t\t");
        }
        else if(strcmp(str,"How are you?")==0)
        {
            printf("\nI feel good.Thanks for asking \n\t\t\t\t\t\t\t\t\t");
        }
         else if(strcmp(str,"Who is your creator?")==0) {
            printf(" \nI was created by Tarun kumar\n\t\t\t\t\t\t\t\t\t");
        }
        else if(strcmp(str,"how are you")==0)
        {
            printf("\nI feel good.Thanks for asking\n\t\t\t\t\t\t\t\t\t");
        } else if(strcmp(str,"who is your favorite actor ")==0)
        {
            printf("\nI think PRABHAS nailed it in Bahubali\n\t\t\t\t\t\t\t\t\t");
        }
        else if(strcmp(str,"Tell me a joke")==0)
        {
            printf("\nWhat kind of table can you eat?  A vege-table,\n\t\t\t\t\t\t\t\t\t");
        }
         else if(strcmp(str,"Another joke")==0)
        {
            printf("\n Why are pianos hard to open ?The keys are inside.\n\t\t\t\t\t\t\t\t\t");
        }
        else if(strcmp(str,"Who is your favorite cricketer") ==0)
        {
            printf(" \nI think Virat kohli is the best cricketer in the world\n\t\t\t\t\t\t\t\t\t");
        }
        else if(strcmp(str,"what is the national animal of India?")==0)
        {
            printf(" \nTIGER is the NATIONAL ANIMAL OF INDIA\n\t\t\t\t\t\t\t\t\t");
        }
              else if(strcmp(str,"who are you")==0)
        {
            printf(" \nHi i am bot messenger.Ask me something?\n\t\t\t\t\t\t\t\t\t");
        }
       else if(strcmp(str,"Name the three things you recommend me")==0)
        {
            printf(" \nEat sleep repeat ,haha .n\t\t\t\t\t\t\t\t\t");
        }
else if(strcmp(str,"How do you feel about our relationship")==0)
        {
            printf(" \nTrust and respect.Keep your batteries charged.\n\t\t\t\t\t\t\t\t\t");
        }

        else if(strcmp(str,"exit")==0)
        {
            exit(0);
        }





else
        {
            printf("\nI cannot understand try something different. I am in developing stage.\n\t\t\t\t\t\t\t\t\t");
        }
    }
}
