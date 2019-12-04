//-------------------------- password function ---------------------------------


#include<iostream.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
#include<ctype.h>                //for file handling

 int password()
 {
       int i=0;
     char a[20],b[20],ch;
    cout<<endl<<"\t\t\tEnter the password"<<endl;
	   fflush(stdin);
	   do
	   {
	     ch=getch();
	     if(isalnum(ch))
	     {
	       b[i]=ch;
	       cout<<"*";
	       i++;
	     }
	     else if(ch=='\r')
	     b[i]='\0';
	     else if(ch=='\b')
	    {
	      i--;
	      cout<<"\b\b";
	    }

	  }while(ch!='\r');
	b[i]='\0';
       fflush(stdin);
       fstream f;
       f.open("----.bharat",ios::in|ios::binary);
	 f.read((char *)&a,sizeof(a));
       if(strcmp(b,a)!=0)
       return(0);
       else
       return(1);
 }

int main()
 {
      int x;
		   x=password();
		  if(x==1)
		{
	 int i=0;
		   char b[20],ch;
		  cout<<endl<<"\t\tEnter the New password"<<endl;
		 fflush(stdin);
		 do
		 {
		  ch=getch();
		   if(isalnum(ch))
		   {
		    b[i]=ch;
		    cout<<"*";
		    i++;
		   }
		   else if(ch=='\r')
		    b[i]='\0';
		   else if(ch=='\b')
		   {
		    i--;
		    cout<<"\b\b";
		   }
		 }while(ch!='\r');
		b[i]='\0';
	       fflush(stdin);
	     fstream f;
	     f.open("----.bharat",ios::out|ios::binary);
	     f.write((char *)&b,sizeof(b));
	     cout<<"Password is changed successfully !!!!!";
	     f.close();
	     }
	   else
	      {
		int ck;
		 cout<<"\n\t\t!! entered password is worng"<<endl;

		 cout<<"\n\t\t press any key to exit"<<endl;
		 exit(0);
	      }


 getch();
 return(0);
 } 