//----------header file section-----------------------------------------------------
#include<iostream.h>
#include<process.h>
#include<time.h>
//#include<timer.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>              //for file handling
#include<ctype.h>                
#include"busroot.cpp"             //include the  busroot source file
#include"bustype.cpp"             //include the  bustype source file
#include"password.cpp"           //include the   password source file 

//------------------------------ main body -----------------------------------------
 int main()
  {
    int c;
	
    while(1)
    {  main_menu:
	   fflush(stdin);
	   clrscr();
	   cout<<"                    $$ Welcome to Bus Manegement  System $$                   "<<endl;
	   cout<<"                    $$______By-Bharat kumar dhaker_______$$                   "<<endl;
cout<<"                $$______www.computersciencearticle.in_______$$                   "<<endl;
      cout<<"\n\n\n                             Main-Menu                                    "<<endl;
      cout<<endl<<"\t\t->> press \"1\" key for Log on Administrator User"<<endl;
      cout<<"\n\t\t->> press \"2\" key for Log on to Local User"<<endl;
      cout<<"\n\t\t->> Press\"0\" key for LOG-OUT the Bus-System"<<endl;
      cout<<"\n\t\t->> enter your choice"<<endl;
      cin>>c;
     switch(c)
     {
//-------------------administrator user--------------------------------------------------
      case 1:
      {  int count=1,count1=1;
	     clrscr();
		  start_administrator:
          cout<<"                    $$ Welcome to Bus Manegement  System $$                   "<<endl;
	      cout<<"                    $$______By-Bharat kumar dhaker_______$$                   "<<endl; 
cout<<"                $$______www.computersciencearticle.in_______$$                   "<<endl;
          cout<<"\n\n__________________________ Welcome To Administrator Account   ________________"<<endl;
        
          int x,choice;
          x=password();
          if(x==1&&count<2)
          {
           while(1)
           { administrator:
cout<<"                    $$ Welcome to Bus Manegement  System $$                   "<<endl;
	      cout<<"                    $$______By-Bharat kumar dhaker_______$$                   "<<endl; 
cout<<"                $$______www.computersciencearticle.in_______$$                   "<<endl;
	     cout<<"\n__________________________  Menu of Administrator User  ________________________"<<endl;
	     cout<<"\n\t\t->> press \"1\" key for Add New bus-root"<<endl;
             cout<<"\n\t\t->> press \"2\" key for delete bus-root"<<endl;
             cout<<"\n\t\t->> press \"3\" key for Modified the bus-root"<<endl;
             cout<<"\n\t\t->> press \"4\" key for Adding New bus-type"<<endl;
             cout<<"\n\t\t->> press \"5\" key for delete Bus-type"<<endl;
             cout<<"\n\t\t->> press \"6\" key for modified the bus-type"<<endl;
             cout<<"\n\t\t->> press \"7\" key For Changing Charges"<<endl;
             cout<<"\n\t\t->> press \"8\" key For changing Password"<<endl;
             cout<<"\n\t\t->> press \"0\" key For Log-Out System"<<endl;
             cout<<"\n\t\t->>  enter your choice"<<endl;
             cin>>choice;
             switch(choice)
             {
//--------------------for addting new bus root--------------------------------------------------
              case 1:
              {
               busroot bb;
               fstream ff;
               char wish;
               
               ff.open("busroot.bin",ios::out|ios::in|ios::binary|ios::ate);

                do
                {
                  bb.getdata();
                   ff.write((char *)&bb,sizeof(busroot));
                    cout<<"\t\t => For One more Add bus-root press \"y\" or \"Y\" =";
                  cin>>wish;
                  

               }while(wish=='y'||wish=='Y');
               	ff.close();
                cout<<endl<<"\t\t New root's Add succesfully !!!!!!"<<endl;
//--------------------------------------------------------------------------------------------				
				int bkd;
				clrscr();
cout<<"                    $$ Welcome to Bus Manegement  System $$                   "<<endl;
	      cout<<"                    $$______By-Bharat kumar dhaker_______$$                   "<<endl; 
cout<<"                $$______www.computersciencearticle.in_______$$                   "<<endl;
				cout<<"\t\t   what you want to do\n";
				cout<<"\t\t=> press \"1\" key for Show All present Bus-root's \n";
				cout<<"\t\t=> press \"2\" key for goto Home Page\n";
                cout<<"\t\t=> Press \"0\" Key for Log-Out System\n";
                cout<<"\t\t=> press \"3\" key for Countinue\n";	
                cout<<"\t\t=> Enter your choice\n";				
				cin>>bkd;
				 
				 switch(bkd)
				 {
				  case 1:
				  {
				  
                   busroot b;
                     fstream a;
//------------------//  for display all bus root  //---------------------------------------
                    cout<<"\n\n\t\t The all bus-root is as =>\n";
                    a.open("busroot.bin",ios::in|ios::binary);

                     a.seekg(0);
                    while(a.read((char *)&b,sizeof(busroot)))
                     {
                        b.dis();
					    getch();
                     }
                       a.close();
				  }
				  break;
				  case 2:
				  goto main_menu;
				  break;
				  case 0:
				  exit(0);
				  break;
				  case 3:
				  goto start_administrator;
				  
				 }
              }
            	break;
//-------------------------------------------------------------------------------------
              case 2:
              {

              }
              break;
//------------------------------------------------------------------------------------
              case 3:
              {
              }
              break;
//-----------------------------------------------------------------------------------
              case 4:
              {
                bustype e;
               fstream gg;
               char wish;

	        	 gg.open("bustype.bin",ios::out|ios::in|ios::binary|ios::ate);
					 do
                {
                   e.intype();
                   gg.write((char *)&e,sizeof(bustype));
                    cout<<"For contunee press \"y\" or \"Y\"";
                    cin>>wish;


               }while(wish=='y'||wish=='Y');
                cout<<endl<<"\nNew bus-type is Add succesfully !!!!!!"<<endl;
              gg.close();
			  int bkd;
				clrscr();
cout<<"                    $$ Welcome to Bus Manegement  System $$                   "<<endl;
	      cout<<"                    $$______By-Bharat kumar dhaker_______$$                   "<<endl; 
cout<<"                $$______www.computersciencearticle.in_______$$                   "<<endl;
				cout<<"\t\t   what you want to do\n";
				cout<<"\t\t=> press \"1\" key for Show All present Bus-type's \n";
				cout<<"\t\t=> press \"2\" key for goto Home Page\n";
                cout<<"\t\t=> Press \"0\" Key for Log-Out System\n";
                cout<<"\t\t=> press \"3\" key for Countinue\n";	
                cout<<"\t\t=> Enter your choice\n";				
				cin>>bkd;
				 
				 switch(bkd)
				 {
				  case 1:
				  {
				  
                   bustype b;
                     fstream a;
//-------------------//  for display all bustype  //---------------------------------------
                  cout<<"\n\n\t\tThe all Bus type is as =>\n";                  
				  a.open("bustype.bin",ios::in|ios::binary);

                  a.seekg(0);
                 while(a.read((char *)&b,sizeof(bustype)))
                  {
                      b.distype();
                      }
                       a.close();
				  }
				  break;
				  case 2:
				  goto main_menu;
				  break;
				  case 0:
				  exit(0);
				  break;
				  case 3:
				  goto start_administrator;
				  
				 }
              
              }
              break;
//---------------------------------------------------------------------------------------
              case 5:
              {
              }
              break;
//------------------------------------------------------------------------------------
              case 6:
              {
              }
              break;
//--------------------------------------------------------------------------------------
              case 7:
              {
              }
              break;
//-----------------------------------------------------------------------------------------
              case 8:
              {  kumar:
                  x=password();
                  if(x==1&&count1<2)
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
                int ck,rem1;
                 count1++;
                  rem1=count1;
				 cout<<"Hey !!! you have tri ["<<rem1<<"] time's and you have ["<<count1<<"] time's so be carefull";
				cout<<"\n\t\t!! entered password is worng"<<endl;
                 cout<<"\n\t\t=> what do you want  ?"<<endl;
                 cout<<"\n\t\t=> Press \"1\" key to re-enter the password"<<endl;
                 cout<<"\n\t\t and press other to exit"<<endl;
                 cin>>ck;
                 if(ck==1&&count1<2)
                goto kumar;
               else
               exit(0);
              }

              }
              break;
//---------------------------------------------------------------------------------              
              case 0:
              {
cout<<"                    $$ Welcome to Bus Manegement  System $$                   "<<endl;
	      cout<<"                    $$______By-Bharat kumar dhaker_______$$                   "<<endl; 
cout<<"                $$______www.computersciencearticle.in_______$$                   "<<endl;
              cout<<"                         Thnak's For Using & Good By !!!!!!                            ";
              getch();
              exit(0);
              }
			  break;
	//------------------default case  if you enter worng choice then done here----------------------
			  default:
			  {
			   cout<<"entered choice is worng !!!!  please enter correct choice\n";
			   goto administrator;
			  }
             }
           }
         }
         else
         {
         int ck,rem,tryt;
		 tryt=count;
		 count++;
		 rem=3-count;
		 cout<<"\n\n\tHey !!! you have tri ["<<tryt<<"] time's and you have ["<<rem<<"] time's so be carefull";
         cout<<"\n\t\t!! entered password is worng"<<endl;
         cout<<"\n\t\t=> what do you want  ?"<<endl;
         cout<<"\n\t\t=> Press \"1\" key to re-enter the password"<<endl;
         cout<<"\n\t\t and press other to exit"<<endl;
         cin>>ck;
         if(ck==1&&count<=2)
         goto start_administrator;
         else
         exit(0);
         }
      }
      break;
	  //-----------------------------local user--------------------------------------------------
      case 2:
      {
        int ch;
		clrscr();
       cout<<"\n____________   welcome to Local User  ___________________________"<<endl;
       while(1)
       {
        local_menu:
cout<<"                    $$ Welcome to Bus Manegement  System $$                   "<<endl;
	      cout<<"                    $$______By-Bharat kumar dhaker_______$$                   "<<endl; 
cout<<"                $$______www.computersciencearticle.in_______$$                   "<<endl;
       cout<<endl<<"                            Menu of Local User                            "<<endl;
       cout<<"\n\t\t ->> press \"1\" key For Search Bus-root"<<endl;
       cout<<"\n\t\t ->> press \"2\" key For Registration"<<endl;
       cout<<"\n\t\t ->> press \"0\" key For Log-Out System"<<endl;
       cout<<"\n\t\t Enter your choice"<<endl;
       cin>>ch;
       switch(ch)
       {
//----------------/   for search the bus root   //--------------------------------------------
        case 1:
        {
              busroot b;
             fstream a;
//---------------------//  for display searched bus root  //----------------------------
             a.open("busroot.bin",ios::in|ios::binary);

             a.seekg(0);
            while(a.read((char *)&b,sizeof(busroot)))
            {
              b.dis();
            }
            a.close();
            cout<<"\n\t\t what do you want do \n ";
        }
        break;
//----------------//   for registration //---------------------------------------------
        case 2:
        {
        }
        break;
//-----------------------//  for Log out the local user   //------------------------------
        case 0:
        {
        cout<<"___________________ Thanks For Using & Good By !!!!!   _____________________";
        getch();
        exit(0);
        }
        default:
        {
        	 cout<<"entered choice is worng !!!!  please enter correct choice\n";
          goto local_menu;
        }
       }
      }
       }
      break;
//--------------------------for main menu Log out------------------------------------------
      case 0:
      {
      cout<<"____________________    Thanks & Good By !!!!!!    ___________________________";
      getch();
      exit(0);
     }
//----------------------------default case  if you enter worng choice then done here----------------------
	default:
	 {
	 cout<<"entered choice is worng !!!!  please enter correct choice\n";
	 goto main_menu;
	 }
   }
 getch();
 return(0);
 }
 }

