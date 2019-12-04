//------------------------------ bus root class --------------------------------
/*
#include<iostream.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
#include<ctype.h>                //for file handling
*/
class busroot
  {
    char from[20];
    char to[20];
    int ser;
  public:
   void getdata();
   void dis();
  };

void busroot::getdata()
 {
   cout<<"enter bus starting Point"<<endl;
  cin>>from;
   cout<<"enter ending point "<<endl;
   cin>>to;
 }
void busroot::dis()
 {
   cout<<"\t\tFROM   =   "<<from<<" \t\tTO   =   "<<to<<endl;
 }
 
 
 /*
 int main()
 {
 busroot bb,b;
               fstream ff,a;
               char wish;
                int i=0;
               ff.open("busroot.bin",ios::out|ios::in|ios::binary|ios::ate);

                do
                {
                  bb.getdata();
                   ff.write((char *)&bb,sizeof(busroot));
                    cout<<"\t\t => For One more Add bus-root press y or Y =";
                  cin>>wish;
                  i++;

               }while(wish=='y'||wish=='Y');

                cout<<endl<<"\t\t New root's Add succesfully !!!!!!"<<endl;
			
//----------------------------------//  for display bus root  //---------------------------------------
             a.open("busroot.bin",ios::in|ios::binary);

             a.seekg(0);
            while(a.read((char *)&b,sizeof(busroot)))
            {
              b.dis();
            }
            a.close();
	getch();
	return(0);
 } */