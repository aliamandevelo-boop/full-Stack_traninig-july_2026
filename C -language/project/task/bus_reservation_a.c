#include<stdio.h>
#include<string.h>


struct User
{
    char name[30];
    char username[30];
    char password[20];
};


struct Bus
{
    int busNo;
    char busName[40];
    char type[20];
    int capacity;
    char source[30];
    char destination[30];
    char time[20];
};


struct Ticket
{
    char username[30];
    char passenger[30];
    int busNo;
    int seatNo;
    float amount;
    char payment[20];
    int status;
};


struct User users[10];
struct Ticket tickets[50];

int userCount=0;
int ticketCount=0;



void registerUser()
{

printf("\n===== REGISTER =====\n");


printf("Enter Name : ");
scanf("%s",users[userCount].name);


printf("Create Username : ");
scanf("%s",users[userCount].username);


printf("Create Password : ");
scanf("%s",users[userCount].password);


userCount++;


printf("\nRegistration Successful\n");

}




int login(char uname[])
{

char pass[20];


printf("\n===== LOGIN =====\n");


printf("Username : ");
scanf("%s",uname);


printf("Password : ");
scanf("%s",pass);



for(int i=0;i<userCount;i++)
{

if(strcmp(uname,users[i].username)==0 &&
strcmp(pass,users[i].password)==0)
{

return 1;

}

}


return 0;

}


 

void profile(char uname[])
{

for(int i=0;i<userCount;i++)
{

if(strcmp(uname,users[i].username)==0)
{

printf("\n===== PROFILE =====\n");

printf("Name : %s\n",users[i].name);

printf("Username : %s\n",users[i].username);

}

}

}





void showBus()
{


struct Bus b[3]=
{

{101,"Rajasthan Roadways","AC Sleeper",40,
"Jaipur","Delhi","10 AM"},


{102,"Delhi Transport","Non AC",45,
"Delhi","Agra","12 PM"},


{103,"Karnataka Express","AC Bus",50,
"Bangalore","Mysore","5 PM"}

};



printf("\n===== BUS LIST =====\n");


for(int i=0;i<3;i++)
{


printf("\nBus No : %d",b[i].busNo);

printf("\nName : %s",b[i].busName);

printf("\nType : %s",b[i].type);

printf("\nCapacity : %d",b[i].capacity);

printf("\nRoute : %s to %s",
b[i].source,b[i].destination);

printf("\nTime : %s\n",b[i].time);


}


}






void bookTicket(char uname[])
{

int choice;


printf("\nPassenger Name : ");

scanf("%s",tickets[ticketCount].passenger);



strcpy(tickets[ticketCount].username,uname);



showBus();


printf("\nSelect Bus Number : ");

scanf("%d",&choice);



tickets[ticketCount].busNo=choice;



printf("Select Seat Number : ");

scanf("%d",&tickets[ticketCount].seatNo);



tickets[ticketCount].amount=500;



printf("\nPayment Method\n");

printf("1.UPI\n");

printf("2.Card\n");


int p;

scanf("%d",&p);



if(p==1)
strcpy(tickets[ticketCount].payment,"UPI");

else
strcpy(tickets[ticketCount].payment,"Card");



tickets[ticketCount].status=1;



ticketCount++;


printf("\nTicket Booked Successfully\n");


}






void savedTicket(char uname[])
{


printf("\n===== MY TICKETS =====\n");



for(int i=0;i<ticketCount;i++)
{


if(strcmp(tickets[i].username,uname)==0)
{


if(tickets[i].status==1)
{


printf("\nTicket No : %d",i+1);

printf("\nPassenger : %s",
tickets[i].passenger);


printf("\nBus No : %d",
tickets[i].busNo);


printf("\nSeat : %d",
tickets[i].seatNo);


printf("\nAmount : %.2f",
tickets[i].amount);


printf("\nPayment : %s\n",
tickets[i].payment);


}


}


}



}






void cancelTicket()
{

int no;


printf("Enter Ticket Number : ");

scanf("%d",&no);



tickets[no-1].status=0;


printf("\nTicket Cancelled\n");


}





void modifyTicket()
{

int no;


printf("Enter Ticket Number : ");

scanf("%d",&no);



printf("New Seat Number : ");

scanf("%d",&tickets[no-1].seatNo);



printf("\nTicket Modified\n");


}







int main()
{


int choice;

char username[30];


while(1)
{


printf("\n\n===== BUS RESERVATION SYSTEM =====");


printf("\n1.Register");

printf("\n2.Login");

printf("\n3.Exit");


printf("\nChoice : ");

scanf("%d",&choice);



if(choice==1)
{

registerUser();

}



else if(choice==2)
{


if(login(username))
{


int menu;


while(1)
{


printf("\n\n===== MENU =====");


printf("\n1.Profile");

printf("\n2.View Bus");

printf("\n3.Book Ticket");

printf("\n4.My Ticket");

printf("\n5.Cancel Ticket");

printf("\n6.Modify Ticket");

printf("\n7.Logout");


printf("\nChoice : ");

scanf("%d",&menu);



switch(menu)
{


case 1:

profile(username);

break;



case 2:

showBus();

break;



case 3:

bookTicket(username);

break;



case 4:

savedTicket(username);

break;



case 5:

cancelTicket();

break;



case 6:

modifyTicket();

break;



case 7:

goto logout;


default:

printf("Wrong Choice");

}



}


logout:

printf("\nLogout Successful\n");


}


else
{

printf("\nWrong Username or Password\n");

}


}



else if(choice==3)
{


printf("Thank You");

break;


}


else
{

printf("Invalid Choice");

}



}


return 0;

}