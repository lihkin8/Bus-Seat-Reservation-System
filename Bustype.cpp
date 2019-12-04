//--------------------------- bus type class-------------------------------------
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
class bustype
{
 char a[20];
 public:
 void intype();
 void distype();
};
void bustype::intype()
 {
   cout<<"   enter the bus-type"<<endl;
   cin>>a;

 }
 void bustype::distype()
 {
// cout<<"\n\t\t\tthe bus type is as => "<<endl;
 cout<<"\t\t\t"<<a<<endl;
 getch();
 }
 
 
 /*
 int main()
 {
  bustype b;
  fstream ff;
    char wish;
    int i=0;
		 ff.open("bustype.bin",ios::out|ios::in|ios::binary|ios::ate);
					 do
                {
                   b.intype();
                   ff.write((char *)&b,sizeof(bustype));
                    cout<<"\nFor one more add bustype press \"y\" \"Y\"\n";

                  cin>>wish;

                 i++;

               }while(wish=='y'||wish=='Y');
                cout<<endl<<"New bus-type is Add succesfully !!!!!!"<<endl;

//----------------------------------for display searched bus root ---------------------------------------
             ff.open("bustype.bin",ios::in|ios::binary);
            cout<<"\nThe bus type is as => "<<endl;
             ff.seekg(0);
            while(ff.read((char *)&b,sizeof(bustype)))
            {
              b.distype();
              cout<<"\n";
            }

          ff.close();
          getch();
 			 return(0);

 }       */