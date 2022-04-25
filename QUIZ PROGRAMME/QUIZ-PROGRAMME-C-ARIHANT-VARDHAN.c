#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct play{
	char fname[20];
	char lname[20];
	int score;
}p;

void start();
void scoreboard();
void help();

void main(){
	system("Color 70");
	int choice=0;
 do{
	printf("\n---------------------------------------------------------\n");
	printf("Enter : \n1 to start playing\n2 to see scoreboard\n3 to open help \n4 to exit\n");
	scanf("%d",&choice);
	printf("\n---------------------------------------------------------\n");
	switch(choice)
	{
		case 1:
			start();
			break;
		case 2:
			scoreboard();
			break;
		case 3:
			help();
			break;
		case 4:
			printf("\nExiting\n");
			break;
		default:
			printf("oops ! you entered wrong choice");
	}
	
}while (choice!=4);
}
void help(){
	
	 printf("\n\n ************************* HELP *************************\n");  
     printf("\n -------------------------------------------------------------------------");  
     printf("\n .................... C program Quiz Game...........\n");  
     printf("\n >> There will be a total of 10 questions\n"); 
	 printf("\n >> The question will be general knowledge based\n"); 
     printf("\n >> You will be given 4 options");  
     printf("\n >> You have to press the correct option i.e. 1, 2 ,3 or 4");  
     printf("\n >> Each question will carry 10 points");  
     printf("\n >> You will be asked questions continuously.");  
     printf("\n >> There is no negative marking for wrong answer");  
  
    printf("\n\n ************************* BEST OF LUCK *************************\n\n");  
  
}  

void start()  
{  
          int ans;  
          int count=0;    
        
          FILE *fp;  
  
          if((fp=fopen("C:arihant.txt","a"))==NULL)//will create a file
             {  
                 printf("Empty file\n");  
             }  
  
  
        printf("\nPlease enter your First name: ");  
        scanf("%s",p.fname); 
		printf("\nPlease enter your Last name: "); 
		scanf("%s",p.lname);
		printf("******************* Welcome \" %s %s\"  to C Quiz Game *************************** \n\n", p.fname,p.lname);
		printf("Q(1).Out of the following leaders who became the president first?\n1.Pranab Mukherjee\n2.Pratibha Patil\n3.A. P. J. Abdul Kalam\n4.K. R. Narayanan\n");
		printf("Your answer: ");
		scanf("%d",&ans);
		
		if(ans==4)
		{
		 printf("Correct! +10 points\n\n");  
            ++count; 		
			}	
		else  
        {  
            printf("Wrong answer! Correct answer is 4.K. R. Narayanan\n\n");  
        }  
		
		printf("Q(2).Which of these is the title of a film directed by Rohit Shetty?\n1.Devgan Vaani \n2.Shetty Salah\n3.Chal Chopra\n4.Bol Bachchan\n");
		printf("Your answer: ");  
        scanf("%d",&ans); 
        if(ans==4)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4.Bol Bachchan\n\n");  
        }
		  
       printf("Q(3).Which of these cannot be the same for two different persons?\n1. Fingerprints.\n2. Skin Colour\n3.Blood Group\n4.Eye Colour \n");
        printf("Your answer: ");  
        scanf("%d",&ans); 
        if(ans==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.Fingerprints.\n\n");  
        }
        
		printf("Q(4).Which of these Chief Minister of an Indian State is an IIT Graduate?\n1. Manohar Parrikar\n2.Okram Ibobi Singh.\n3.Kiran Kumar Reddy\n4.Omar Abdullah\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.Manohar Parrikar\n\n");  
        }  
		  
        printf("Q(5).Who did Viswanathan Anand defeat in 2012 to retain the world Chess Champion title ?\n1. Rusian Ponomariov.\n2. Vladimir Kramnik\n3. Vesselin Topalov\n4. Boris Gelfand.\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==4)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. Boris Gelfand\n\n");  
        }    
        
        printf("Q(6).Which river was set as the eastern boundary of Maharaja Ranjit SIngh’s kingdom by the Treaty of Amritsar of 1809 ?\n1. Sutlej\n2. Beas\n3. Ghaggar\n4. Ravi\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1. Sutlej\n\n");  
        }    
		  
		printf("Q(7).Complete the Hindi proverb : “Ab Pachhtave hoth kya jab Chidiya Chug gayi________” ?\n1. Daana\n2. Khet\n3. Moti\n4. Beej\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2. Khet\n\n");  
        }  
		
		printf("Q(8).Which of these lines would you associate with Akshay Kumar in ‘ Rowdy Rathore’ ?\n1. Abracadabra \n2. My Name is Khan.\n3. I Hate Luv Stories\n4. Dont Angry Me.\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==4)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. Don’t Angry Me.\n\n");  
        }
        
	    printf("Q(9).Vijay Kumar Won a Silver medal at the 2012 London Olympics in which sport ?\n1. Shooting.\n2. Boxing.\n3. Badminton\n4. Wrestling.\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1. Shooting.\n\n");  
        } 
    
        printf("Q(10).Which of these buildings in Rajasthan was built to provide employment to people during a period of famine ?\n1. Amber Fort.\n2. Hawa Mahal\n3. Mehrangarh Fort\n4. Umaid Bhawan palace\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==4)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. Umaid Bhawan palace\n\n");  
        } 
        
         if(count > 0)  
        {  
                printf("You scored: %d points \t", count*10);
				printf("\n***********Thanks for playing***********\n");
  
                p.score=count*10;  
  
                fprintf(fp,"%s %s %d", p.fname,p.lname,p.score);  //writing in file
                    fclose(fp);
        }
        else  
        {  
            printf("\nYou scored Zero , Try again!\n");  
        }
    }
void scoreboard() 
	    {   
			FILE *fp;  
			if((fp=fopen("C:arihant.txt", "r"))==NULL)  //reading the file
			{  
                printf("\nNo games played yet!\n");  
            }    
            else  
            {  
			 printf("\n******************************* HIGH SCORES *******************************\n\n");  
			 printf("F.NAME     L.NAME     POINTS\n");  
			 while(fscanf(fp,"%s %s %d",p.fname,p.lname,&p.score) !=EOF)  
			 {  
			 printf("____________________________\n");  
			 printf("%s     %s     %d \n\n",p.fname,p.lname,p.score);  
             }
			 fclose(fp);  
			 }
		}

