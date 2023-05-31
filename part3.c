#include<stdio.h>
#include<string.h>
#include<stdlib.h>              // for using clear_screen {system("cls")}
#include<process.h>             // for using exit()
#include<unistd.h>              // for using sleep() 

char str[100];                  // global variable

//Declaring function prototypes
void bill_2( float );
void discount();
void ptm_online( float);
void ptm_off_card( float);
void bill_1( float);
void Book_Menu();
void ncert_corner_XIth_1();
void ncert_and_refrence_corner_XIth();
void ref_corner_XIth_1();
void ref_corner_XIth();
void ncert_corner_XIIth_1();
void ncert_and_refrence_corner_XIIth();
void ref_corner_XIIth_1();
void ref_corner_XIIth();
void draw();
void draw1();
float book_choose();
void thankyou();


void draw()
{
    system("cls");
	printf("\t@@=====================*****************=====================@@");
	sleep(1);
	printf("\n\t@@=====================*****************=====================@@");
	sleep(1);
}
void draw1()
{
    printf("\t@@=====================*****************=====================@@");
	sleep(1);
	printf("\n\t@@=====================*****************=====================@@");
	sleep(1);
}


void thankyou()
{
    sleep(2);
    char ans;
    printf ("\n\n* Do you want to continue (y for YES else press any key):\t");
	scanf("%s", &ans);
	while (ans == 'y')
	{
		Book_Menu();
	}
	printf ("\n\t\t\t!!!!!!! THANK YOU FOR SHOPPING !!!!!!!");
	printf ("\n\t\t\t$$$$$$- VISIT AGAIN -$$$$$$$");
	printf ("\n\t\t\t\t(_)");
    exit(0);
}


void main()                                                          // MAIN FUNCTION
{
	 
	char uid[10],pwd[10], ans;
	int c=1,n=3;                      // ( c ) = loop counter       and        ( n ) = chances
	draw();
	printf ("\n\t\t!!!!!!!--- WELCOME TO  BOOK STORE ---!!!!!!!\n");
	sleep(1);
	draw1();
	printf("\n                                           ");
	sleep(1);
	printf ("\n\t\tXXXXXXXXX_You Have Only Three Attempts_XXXXXXXXX");
	do
	{
        
        n=n-1;
		printf ("\n\t\t\t\t(ATTEMPTS LEFT):%d",n );         
		printf ("\n");
		sleep(1);
		printf ("\n* ENTER USERID:");
		scanf("%s",&uid);
		printf ("\n* ENTER PASSWORD:");
		scanf("%s",&pwd);
	  if((strcmp(uid,"AASV")==0) && (strcmp(pwd,"1234")==0))
	   {
		   sleep(1);		   
		printf ("\n\t\t\tYOU LOGGED IN..............\n\n\n");
		sleep(2);
		break;
	   }
	  if(c==3)
	   {
		 printf ("\nYou Can't Try Further ");
		 printf ("\n-------- PROGRAM IS LOCKED-------");

		 exit(0);
 }
		else
	      {
		printf ("\n<Incorrrect User Id And Password>");
		printf ("\n Please Try Again (_)");
	       }
	    c++;
	 }while(c<=3);

	  Book_Menu();
	     
}

void Book_Menu()
{
    system("cls");
	int choice,opt;
	printf ("\n\t+++++++++++- WELCOME TO BOOK MENU -+++++++++++");
	sleep(1);
	printf ("\nBooks Available Only For Senior Classses(XIth & XIIth)");
	printf ("\n");
	sleep(1);
	printf ("\nBook Types:");
	printf ("\n(i) NCERT For All Subjects ");
	printf ("\n(ii) Refference Books  For All Subjects ");
	printf ("\n");
	sleep(2);
	printf ("\nPlease select your required choice:");
	printf ("\nEnter 1 For Class XIth");
	printf ("\nEnter 2 For Class XIIth");
	printf ("\nEnter 3 To Exit");
	sleep(1);
	printf ("\n * YOUR CHOICE:");
	scanf("%d",&choice);
	if(choice==1)                 
	{
		printf ("\n Please select the requred option:");
	    printf ("\n1 for ncert books and refrence books");
        printf ("\n2 for refrence books only");
        printf ("\n3 for NCERT books only");
	    printf ("\n4 for exit");
		sleep(2);
	    printf ("\n*YOUR CHOICE:");
	    scanf("%d",&opt);
		switch(opt)                               
		{
			case 1:ncert_and_refrence_corner_XIth();
				break;
            case 2:ref_corner_XIth_1();
                break;
            case 3:ncert_corner_XIth_1();
                break;
			case 4:exit(0);
				break;
			default:printf ("\nENTERED WRONG INPUT");
				 break;
		 }
	}


	else if(choice==2)
	{     printf ("\n  Please select the requred option:");     
	      printf ("\n1 for ncert books and refrence books");
	      printf ("\n2 for reference books");
          printf ("\n3 for NCERT books");
          printf ("\n4 for exit");
	      printf ("\n*YOUR CHOICE:");
	      scanf("%d",&opt);
	    switch(opt)
		{
			case 1:ncert_and_refrence_corner_XIIth();
				break;
			case 2:ref_corner_XIIth_1();
				 break;
            case 3:ncert_corner_XIIth_1();
                 break;
			case 4:exit(0);
				break;
			default:printf ("\nENTERED WRONG INPUT");
				 break;
		 }
	  }
		 else
		 {
		 exit(0);
		 }

}


// ALL 11th FUNCTION STARTS

void ncert_corner_XIth_1()
{
	system("cls");
	int opt;
	printf ("\n\t\t &&&&&&&&&- NCERT CORNER (CLASS-XI)-&&&&&&&&&");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:ENGLISH (SET)");
	printf ("\n->COST:150/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:HINDI (SET)");
	printf ("\n->COST:200/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:CHEMISTRY (SET WITH LABORATORY MANUAL)");
	printf ("\n->COST:500/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:PHYSICS (SET WITH LABORATORY MANUAL)");
	printf ("\n->COST:500/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:COMPUTER SCIENCE ");
	printf ("\n->COST:300/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:MATHEMATICS");
	printf ("\n->COST:250/- Rs");
    printf ("\n");
	sleep(2);
    printf ("\n");
    printf ("\n\tI must say you are looking for discount so here it is:-\n->press 0 for discount: ");
	scanf("%d",&opt);
	discount();
}
void ncert_and_refrence_corner_XIth()
{
	system("cls");
	int opt;
	printf ("\n\t\t &&&&&&&&&- NCERT CORNER (CLASS-XI)-&&&&&&&&&");
	printf ("\n");
	printf ("\n*SUBJECT:ENGLISH (SET)");
	printf ("\n->COST:150/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:HINDI (SET)");
	printf ("\n->COST:200/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:CHEMISTRY (SET WITH LABORATORY MANUAL)");
	printf ("\n->COST:500/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:PHYSICS (SET WITH LABORATORY MANUAL)");
	printf ("\n->COST:500/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:COMPUTER SCIENCE ");
	printf ("\n->COST:300/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:MATHEMATICS");
	printf ("\n->COST:250/- Rs");
    printf ("\n");
	sleep(1);
    ref_corner_XIth();
    printf ("\n");
	sleep(2);
    printf ("\n\tI must say you are looking for discount so here it is:-\n->press 0 for discount: ");
	scanf("%d",&opt);
	discount();
}

void ref_corner_XIth_1()
{
    system("cls");
	int number;
    float price_of_reference=0, price1;
	printf ("\n\t\t &&&&&&&&&- REFFERNCE BOOK CORNER (CLASS-XI)-&&&&&&&&&");
	printf ("\n");
	sleep(1);
	printf ("\n* PRADEEP For Chemistry and physics ( set Rs 1000)");
	sleep(1);
	printf ("\n* S.L ARORA For Chemistry and physics ( Rs 850 )");
	sleep(1);
	printf ("\n* SUMITHA ARORA For Computer Science ( Rs 850 )");
	sleep(1);
	printf ("\n* R.D SHARMA For Mathematics ( Rs 500 )");
	sleep(1);
	printf ("\n* TATA.M BY MANOJ DUBEY For Mathematics ( Rs 1000)" );
	sleep(1);
	printf ("\n* ARIHANT BOOKS For JEE MAINS ( Rs 450 )");
	sleep(1);
	printf ("\n* ARIHANT BOOKS For JEE MAINS ( Rs 450)");
	sleep(1);
	printf ("\n* H.C VERMA For Physics ( Rs 800)");
	sleep(1);
	printf ("\n* ALL IN ONE For JEEMAINS & ADVANCE( Rs 650 )");
	printf ("\n");
    sleep(2);
    printf ("\n Enter the number of Refference books you want to buy:\t");
    scanf("%d", &number);
    printf ("\n Enter the subject of the reference books:\n");
    for (int i=0; i<number; i++)
    {
        scanf("%s", &str[i]);
    }
    printf ("\n Enter the price of all refference book you want to purchase one by one:\n");
    for (int i=0; i<number; i++)
    {
        scanf("%f", &price1);
        price_of_reference += price1;
    }

	sleep(4);
    printf ("\n*Let's move farword for Billing Process:-");
    sleep(2);
    bill_1( price_of_reference);
}

void ref_corner_XIth()
{
	 
	printf ("\n\t\t &&&&&&&&&- REFFERNCE BOOK CORNER (CLASS-XI)-&&&&&&&&&");
	printf ("\n");
	sleep(1);
	printf ("\n* PRADEEP For Chemistry and physics ( set Rs 1000)");
	sleep(1);
	printf ("\n* S.L ARORA For Chemistry and physics ( Rs 850 )");
	sleep(1);
	printf ("\n* SUMITHA ARORA For Computer Science ( Rs 850 )");
	sleep(1);
	printf ("\n* R.D SHARMA For Mathematics ( Rs 500 )");
	sleep(1);
	printf ("\n* TATA.M BY MANOJ DUBEY For Mathematics ( Rs 1000)" );
	sleep(1);
	printf ("\n* ARIHANT BOOKS For JEE MAINS ( Rs 450 )");
	sleep(1);
	printf ("\n* ARIHANT BOOKS For JEE MAINS ( Rs 450)");
	sleep(1);
	printf ("\n* H.C VERMA For Physics ( Rs 800)");
	sleep(1);
	printf ("\n* ALL IN ONE For JEEMAINS & ADVANCE( Rs 650 )");
	printf ("\n");
	sleep(1);
}



// ALL 12th Class Function:-

void ncert_corner_XIIth_1()
{
	system("cls"); 
	int opt;
	printf ("\n\t\t &&&&&&&&&- NCERT CORNER (CLASS-XII)-&&&&&&&&&");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:ENGLISH (SET)");
	printf ("\n->COST:150/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:HINDI (SET)");
	printf ("\n->COST:200/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:CHEMISTRY (SET WITH LABORATORY MANUAL)");
	printf ("\n->COST:500/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:PHYSICS (SET WITH LABORATORY MANUAL)");
	printf ("\n->COST:500/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:COMPUTER SCIENCE ");
	printf ("\n->COST:300/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:MATHEMATICS");
	printf ("\n->COST:250/- Rs");
    printf ("\n");
    printf ("\n");
	sleep(2);
    printf ("\n\tI must say you are looking for discount so here it is:-\n->press 0 for discount: ");
	scanf("%d",&opt);
	discount();
}
void ncert_and_refrence_corner_XIIth()
{
	system("cls"); 
	int opt;
	printf ("\n\t\t &&&&&&&&&- NCERT CORNER (CLASS-XII)-&&&&&&&&&");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:ENGLISH (SET)");
	printf ("\n->COST:150/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:HINDI (SET)");
	printf ("\n->COST:200/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:CHEMISTRY (SET WITH LABORATORY MANUAL)");
	printf ("\n->COST:500/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:PHYSICS (SET WITH LABORATORY MANUAL)");
	printf ("\n->COST:500/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:COMPUTER SCIENCE ");
	printf ("\n->COST:300/- Rs");
	printf ("\n");
	sleep(1);
	printf ("\n*SUBJECT:MATHEMATICS");
	printf ("\n->COST:250/- Rs");
    printf ("\n");
	sleep(1);
    ref_corner_XIIth();
    printf ("\n");
	sleep(2);
    printf ("\n\tI must say you are looking for discount so here it is:-\n->press 0 for discount: ");
	scanf("%d",&opt);
	discount();
}

void ref_corner_XIIth_1()
{
	system("cls"); 
	int number;
    float price_of_reference=0, price1;
	printf ("\n\t\t &&&&&&&&&- REFFERNCE BOOK CORNER (CLASS-XII) -&&&&&&&&&");
	printf ("\n");
	sleep(1);
	printf ("\n* PRADEEP For Chemistry and physics ( set Rs 1000)");
	sleep(1);
	printf ("\n* S.L ARORA For Chemistry and physics ( Rs 850 )");
	sleep(1);
	printf ("\n* SUMITHA ARORA For Computer Science ( Rs 850 )");
	sleep(1);
	printf ("\n* R.D SHARMA For Mathematics ( Rs 500 )");
	sleep(1);
	printf ("\n* TATA.M BY MANOJ DUBEY For Mathematics ( Rs 1000)" );
	sleep(1);
	printf ("\n* ARIHANT BOOKS For JEE MAINS ( Rs 450 )");
	sleep(1);
	printf ("\n* ARIHANT BOOKS For JEE MAINS ( Rs 450)");
	sleep(1);
	printf ("\n* H.C VERMA For Physics ( Rs 800)");
	sleep(1);
	printf ("\n* ALL IN ONE For JEEMAINS & ADVANCE( Rs 650 )");
	printf ("\n");
    sleep(2);
    printf ("\n Enter the number of Refference books you want to buy:\t");
    scanf("%d", &number);
    printf ("\n Enter the subject of the reference books:\n");
    for (int i=0; i<number; i++)
    {
        scanf("%s", &str[i]);
    }
    printf ("\n Enter the price of all refference book you want to purchase one by one:\n");
    for (int i=0; i<number; i++)
    {
        scanf("%f", &price1);
        price_of_reference += price1;   
    }

	sleep(4);
    printf ("\n*Let's move farword for Billing Process:-");
    sleep(2);
    bill_2( price_of_reference);
}

void ref_corner_XIIth()
{
	 
	printf ("\n\t\t &&&&&&&&&- REFFERNCE BOOK CORNER (CLASS-XII)-&&&&&&&&&");
	printf ("\n");
	sleep(1);
	printf ("\n* PRADEEP For Chemistry and physics ( set Rs 1000)");
	sleep(1);
	printf ("\n* S.L ARORA For Chemistry and physics ( Rs 850 )");
	sleep(1);
	printf ("\n* SUMITHA ARORA For Computer Science ( Rs 850 )");
	sleep(1);
	printf ("\n* R.D SHARMA For Mathematics ( Rs 500 )");
	sleep(1);
	printf ("\n* TATA.M BY MANOJ DUBEY For Mathematics ( Rs 1000)" );
	sleep(1);
	printf ("\n* ARIHANT BOOKS For JEE MAINS ( Rs 450 )");
	sleep(1);
	printf ("\n* ARIHANT BOOKS For JEE MAINS ( Rs 450)");
	sleep(1);
	printf ("\n* H.C VERMA For Physics ( Rs 800)");
	sleep(1);
	printf ("\n* ALL IN ONE For JEEMAINS & ADVANCE( Rs 650 )");
	printf ("\n");
	sleep(1);
}

void bill_1( float price)
{    
	system("cls");
    printf ("\n --------------BILL corner--------------");
	float total1;
	int ch,opt,ans;

    printf ("\n Choose the required option:-");
    printf ("\n 1 for NCERT + Refrence books bill:");
    printf ("\n 2 for NCERT book bill:");
    printf ("\n 3 for Refrence books bill:\n");
	printf ("\n Choice:\t");
    scanf ("%d", &ans);
    switch(ans)
    {
        case 1:sleep(2);
               total1 = price;
		       printf ("\nThe total amount for whole set of XI core is to be paid by you is:%f",total1);
	           printf ("\n");
			   sleep(3);
               break;
        case 2:sleep(2);
               total1 = price;
		       printf ("\nThe total amount for whole set of XI core is to be paid by you is:%f",total1);
	           printf ("\n");
			   sleep(3);
               break; 
        case 3:sleep(2);
               total1 = price;
		       printf ("\nThe total amount for whole set of XI core is to be paid by you is:%f",total1);
	           printf ("\n");
			   sleep(3);
               break;
        default: printf ("\n Wrong input");
               break;
    } 
	printf ("\n How  do you want your product ?");
	printf ("\nEnter 1 for home delivery");
	printf ("\nEnter 2 for by your own means");
	printf ("\n *YOUR CHOICE:");
	scanf("%d",&ch);
	printf ("\n By what mean do you want to pay?");
	printf ("\nEnter 1 for cash on delivery");
	printf ("\nEnter 2 for online payment now");
	printf ("\nEnter 3 for paymant now by credit card ");
	printf ("\n *Your choice");
	scanf("%d",&opt);
    if (opt ==1)
    {
        thankyou();
    }
	if(opt==2)
	{
	    ptm_online(total1);
	}
	else if (opt==3)
	{
	  ptm_off_card(total1);
	}
	else
	{
		printf ("\t");
	}

}


//payment functions starts...........
void ptm_online( float value)
{
    system("cls");
    printf ("\n\t ----------- PAYMENT corner ----------\n");
	int account,mobile,password;
	printf ("\n\t\t\t*** WELCOME TO ONLINE PAYMENT ***");
	printf ("\n");
	printf ("\n# ENTER YOUR ACCOUNT NUMBER :");
	scanf("%d",&account);
	printf ("\n# ENTER YOUR MOBILE NO.:");
	scanf("%d",&mobile);
	printf ("\n# AMOUNT TO BE PAID:%f", value);
	printf ("\n\n# ENTER PASSWORD:");
	scanf("%d",&password);
	printf ("\n");
	printf ("\n\n\t\t\t\tProcessing............");
	sleep(2);
	printf ("\n \t YOUR TRANSACTION HAS BEEN COMPLETED");
    thankyou();
}
void ptm_off_card( float value1)
{
    system("cls");
    printf ("\n\t ---------- PAYMENT corner ---------\n");
    int passward;
	printf ("\n\t\t**** WELCOME TO CREDIT CARD PAYMENT ****");
	printf ("\n");
	printf ("\nPut your credit card here for scanning");
	printf ("\n\t\t**********************");
	printf ("\n\t\t*                    *");
	printf ("\n\t\t*                    *");
	printf ("\n\t\t*                    *");
	printf ("\n\t\t*                    *");
	printf ("\n\t\t*                    *");
	printf ("\n\t\t*                    *");
	printf ("\n\t\t**********************");
    sleep(5);
	printf ("\n Scanning.............");
	sleep(5);
	printf ("\nScanning completed");
	printf ("\n");
	printf ("\n* AMOUNT TO BE PAID:%f", value1);
	printf ("\n* ENTER PASSWORD:");   
	 scanf("%d",&passward);
	sleep(3);
	printf ("\n\t\t YOUR TRANSACTION HAS BEEN COMPLETED");
    thankyou();
}

void bill_2( float price)   // dicount and refference
{
    system("cls");
    printf ("\n ------------BILL corner--------------");
	float total1;
	int ch,opt,ans;

    printf ("\n Choose the required option:-");
    printf ("\n 1 for NCERT + Refrence books bill:");
    printf ("\n 2 for NCERT book bill:");
    printf ("\n 3 for Refrence books bill:\n");
	printf ("\n Choice:\t");
    scanf ("%d", &ans);
    switch(ans)
    {
        case 1:sleep(2);
               total1 = price;
		       printf ("\nThe total amount for whole set of XI core is to be paid by you is:%f",total1);
	           printf ("\n");
			   sleep(3);
               break;
        case 2:sleep(2);
               total1 = price;
		       printf ("\nThe total amount for whole set of XI core is to be paid by you is:%f",total1);
	           printf ("\n");
			   sleep(3);
               break; 
        case 3:sleep(2);
               total1 = price;
		       printf ("\nThe total amount for whole set of XI core is to be paid by you is:%f",total1);
	           printf ("\n");
			   sleep(3);
               break;
        default: printf ("\n Wrong input");
               break;
        
    } 
	 
	printf ("\n How  do you want your product ?");
	printf ("\nEnter 1 for home delivery");
	printf ("\nEnter 2 for by your own means");
	printf ("\n *YOUR CHOICE:");
	scanf("%d",&ch);
	printf ("\n By what mean do you want to pay?");
	printf ("\nEnter 1 for cash on delivery");
	printf ("\nEnter 2 for online payment now");
	printf ("\nEnter 3 for paymant now by credit card ");
	printf ("\n *Your choice");
	scanf("%d",&opt);
    if (opt ==1)
    {
        thankyou();
    }
	if(opt==2)
	{
	     ptm_online(total1);
	}
	else if (opt==3)
	{
	  ptm_off_card( total1);
	}
	else
	{
		printf ("\t");

	}	
    
}

void discount()
{
	float price_cal;
	int ch;
	printf ("\n\t\t**** WELCOME TO PROVIDED DISCOUNT ****");
	printf ("\n");
	sleep(1);
	printf ("\n * Discount on each book is not available");
	printf ("\n");
	sleep(1);
	printf ("\n * Discounts are only available on NCERT textbooks");
	printf ("\n");
	sleep(1);
	printf ("\n * No discounts on reference books");
	printf ("\n");
	sleep(1);
	printf ("\n * 60 percent discount on whole set of ncert books per classs");
	printf ("\n");
	sleep(1);
	printf ("\n * Each set of ncert books have no discounts");
	printf ("\n");
	printf ("\n");
	sleep(2);

	price_cal = book_choose();          // function calling and initializing value

    sleep(2);
    printf ("\n");
	printf ("\n * Enter 1 for further processing for XIth books ( payment information )");
	printf ("\n * Enter 2 for further processing for XIIth books ( payment information )");
	printf ("\n * Enter 3 for exit");
    printf ("\n * Choice:\t");
	scanf("%d",&ch);
    sleep(2);
	switch(ch)
	{
	  case 1: bill_1(price_cal);
		   break;
	  case 2: bill_2(price_cal);
		   break;
	  case 3: exit(0);
		  break;
		default: printf ("\n wrong input:");

	}
}

float book_choose()
{
    int number; 
    char ans;
    float price1 =0, price_after_discount, total_price, price;
    printf("\n Enter the number of NCERT books you want to purchase:\t");
    scanf("%d",&number);
    printf ("\n Enter the book you want to purchase:\n");
    for(int i=0; i<number; i++)
    {
        scanf("%s", &str[i]);
    }
    printf ("\n Enter the price of each NCERT book one by one:\t");
    for(int i=0; i<number; i++)
    {
        scanf("%f", &price);
        price1 += price;   // price1 = price1 + price
    }
    printf ("\n Total price of NCERT books:\t%f", price1);
    price_after_discount = price1 - (price1*0.1);           // calculating discount
    sleep(2);
    printf ("\n Total price of NCERT books after DISCOUNT:\t%f", price_after_discount);

    printf ("\n Are you also looking for Refference books(y/n):\t");
    scanf("%s", &ans);
    if ( ans == 'y')
    {
        printf ("\n Enter the number of reference books you want to purchase:\t");
        scanf("%d", &number);
        printf ("\n Enter the subject of refference book you want to purchase:\n");
        for(int i=0; i<number; i++)
        {
            scanf("%s", &str[i]);
        }
        printf ("\n Enter the price of all reference books one by one which you want to purchase:\n");
        price1 = 0;
        for(int i=0; i<number; i++)
        {
            scanf("%f", &price);
            price1 += price;
        }
        printf ("\n Total price of refrence book is :\t%f", price1);

        total_price = price1 + price_after_discount;
    }
    else
    {
        total_price = price_after_discount;
    }
    return total_price;
}