#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include "functions.h"
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME ONE AMONG THE MANY !!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());


    if(choice=='V')
	{
	    show_record();
	    goto mainhome;
	}
    else if(choice=='H')
	{
	    help();
        getch();
	    goto mainhome;
	}
	else if(choice=='R')
	{
        reset_score();
	    getch();
	    goto mainhome;
    }
	else if(choice=='Q')
	    exit(1);
    else if(choice=='S')
    {
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
    gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 5 questions to test your");
    printf("\n    Basic knowledge in C. You are eligible to play the game if you give atleast 3");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 1000/-Rs!");
    printf("\n    By this way you can win upto TEN THOUSAND cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    
    if (toupper(getch())=='Y')
	{
		goto home;
    }
	else
	{
        goto mainhome;
        system("cls");
    }

    home:
        system("cls");
        count=0;
        for(i=1;i<=5;i++)
        {
            system("cls");
            r1=i;
            switch(r1)
		    {
		    case 1:
		            printf("\n\nWhich of the following is not a valid variable name declaration?");
		            printf("\n\nA.int _a3;\t\tB. int a_3\n\nC.int 3_a\t\tD.int _3a");
		            if (toupper(getch())=='C')
			        {
			            printf("\n\nCorrect!!!");
                        count++;
			            getch();
			            break;
                    }
		            else
		            {
		                printf("\n\nWrong!!! The correct answer is C.int 3_a");
		                getch();
		                break;
		            }

            case 2:
		            printf("\n\n\n All keywords in C are in ____________");
		            printf("\n\nA.LowerCase letters\t\tB.UpperCase letters\n\nC.CamelCase letters\t\tD.None of the mentioned");
		            if (toupper(getch())=='A')
			        {
                        printf("\n\nCorrect!!!");
                        count++;
			            getch();
			            break;
                    }
		            else
		            {
                        printf("\n\nWrong!!! The correct answer is A.LowerCase letters");
		                getch();
		                break;
                    }

            case 3:
		            printf("\n\n\nFind an integer constant.");
		            printf("\n\nA.3.145\t\tB.34\n\nC.125.00\t\tD.0.5");
		            if (toupper(getch())=='B')
			        {
                        printf("\n\nCorrect!!!");count++;
			            getch();
			            break;
                    }
		            else
		            {
                        printf("\n\nWrong!!! The correct answer is B.34");
		                getch();
		                break;
                    }

            case 4:
		            printf("\n\n\nWho invented C Language?");
		            printf("\n\nA.Charles Babbage\t\tB.Grahambel\n\nC.Dennis Ritchie\t\tD.Steve Jobs");
		            if (toupper(getch())=='C')
			        {
                        printf("\n\nCorrect!!!");count++;
			            getch();
			            break;
                    }
		            else
		            {
                        printf("\n\nWrong!!! The correct answer is C.Dennis Ritchie");
		                getch();
		                break;
                    }

            case 5:
                    printf("\n\n\nC is a which level language.?");
                    printf("\n\nA.Low Level\t\tB.High Level\n\nC.Low + High\t\tD.None");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");count++;
                        getch();
                        break;
                    }
                    else
		            {
                        printf("\n\nWrong!!! The correct answer is B.High Level");
		                getch();
		                break;
                    }
            }
        }

	if(count>=3)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
    countr=0;
    for(i=1;i<=10;i++)
    {
        system("cls");
        r=i;

        switch(r)
		{
		case 1:
		        printf("\n\nThe format identifier percent i is also used for _____ data type.");
		        printf("\n\nA.char\t\tB.int\n\nC.float\t\tD.double");
		        if (toupper(getch())=='B')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                    getch();
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is B.int");
                    getch();
		            goto score;
		            break;
                }
		case 2:
		        printf("\n\n\nWhich of the following is a User-defined data type?");
		        printf("\n\nA.typedef int Boolean;\t\tB.typedef enum {Mon, Tue, Wed, Thu, Fri} Workdays;\n\nC.struct {char name[10], int age};\t\tD.all of the mentioned");
		        if (toupper(getch())=='D')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is D.all of the mentioned");
                    getch();
		            goto score;
		            break;
		        }

        case 3:
		        printf("\n\n\nWhat is the following is invalid header file in C?");
		        printf("\n\nA.math.h\t\tB.mathio.h\n\nC.string.h\t\tD.ctype.h");
		        if (toupper(getch())=='B')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is B.mathio.h");
                    getch();
		            goto score;
		            break;
                }

        case 4:
		        printf("\n\n\nWhat is the number of characters used to distinguish Identifier or Names of Functions and Global variables.?");
		        printf("\n\nA.31\t\tB.32\n\nC.33\t\tD.28");
		        if (toupper(getch())=='A')
			    {
                    printf("\n\nCorrect!!!");countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is A.31");
                    getch();
		            goto score;
		            break;
		        }

        case 5:
		        printf("\n\n\nEach statement in a C program should end with.?");
		        printf("\n\nA.Semicolon ;\t\tB.Colon :\n\nC.Period . (dot symbol)\t\tD.None of the above.");
		        if (toupper(getch())=='A')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
                    break;
                }
		        else
		        {
		            printf("\n\nWrong!!! The correct answer is A.Semicolon ;");
		            getch();
		            goto score;
		            break;
		        }

		case 6:
		        printf("\n\n\nA function which calls itself is called a ___ function.");
		        printf("\n\nA. Self Function\t\tB.Auto Function\n\nC.Recursive Function\t\tD.Static Function");
		        if (toupper(getch())=='C' )
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is C.Recursive Function");
                    goto score;
		            getch();
		            break;
                }

        case 7:
		        printf("\n\n\nHow many values can a C Function return at a time.?");
		        printf("\n\nA. Only One Value\t\tB.Maximum of two values\n\nC.Maximum of three values\t\tD.Maximum of 8 values");
		        if (toupper(getch())=='A')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is A. Only One Value");
                    getch();
		            goto score;
		            break;
                }

        case 8:
		        printf("\n\n\nWhat is the value of an array element which is not initialized.?");
		        printf("\n\nA.By default Zero 0\t\tB.1\n\nC.Depends on Storage Class\t\tD.None of the above.");
		        if (toupper(getch())=='C')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch(); 
                    break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is C.Depends on Storage Class");
                    getch();
		            goto score;
		            break;
                }

        case 9:
		        printf("\n\n\nWhat are the types of data allowed inside a structure.?");
		        printf("\n\nA.int, float, double, long double\t\tB.char, enum, union\n\nC.pointers and Same structure type members\t\tD.All the above");
		        if (toupper(getch())=='D')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is D.All the above");
                    getch();
		            goto score;
		            break;
                }

        case 10:
		        printf("\n\n\nWhat is the input file in a C program building process.?");
		        printf("\n\nA.filename.k\t\tB.filename.cpp\n\nC.filename.c\t\tD.filename.p");
		        if (toupper(getch())=='C')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch(); 
                    break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is C.filename.c");
                    getch();
                    break;
                    goto score;
                }
        }
    }


	score:
    system("cls");
	score=(float)countr*1000;
	if(score>0.00 && score<10000.00)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);
         goto go;}

	 else if(score==10000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION %s ****************",playername);
	    printf("\n\t\t\t\t YOU ARE A ONE AMONG THE MANY!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
    {
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}