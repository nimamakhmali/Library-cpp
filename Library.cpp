#include <iostream>
#include <conio.h>
#include <ctime>
#include <fstream>
#include <cstring>
using namespace std;

#define UP 72
#define DOWN 80


class Menu
{
  private:
    unsigned int marker;        
    unsigned int choice = '1';
  public:
    void menu()
    {
      system("cls");
      cout<<"\t\t\t\tHELLO"<<endl
      <<"\n\n\t\t   ((WELCOME TO MAKHMALI LIBRARY))"<<
      "\n\n\n\t\t\t Press any key...";
      getch();
      system("cls");
      do              
      {
          system("cls");
          cout  << "========= Menu ========="  << endl;   
          if (choice == 1)                   
              cout << "->" ;  
          else

              cout << "  ";
          cout << " LOG IN TO THE ACCOUNT" << endl; 
          if (choice == 2)                    
              cout << "->" ;   
          else
              cout << "  ";
          cout << "3" << endl;
          if (choice == 3)                   
              cout << "->" ;  
          else
              cout << "  ";
              
          cout << "\5" << endl;
          if (choice == 4)                    
              cout << "->" ;   
          else
              cout << "  ";
          cout << " EXIT" << endl;
          cout << "========================" << endl;

          marker = getch();   

          switch (marker) 
          {
          case UP:               
              if (choice <= 1)  
                  choice = 4;   
              else
                  choice--;
              break;
          case DOWN:           
              if (choice >= 4)
                  choice = 1;
              else
                  choice++;    
              break;
          case 13:   
              bool flag = true;
              switch (choice)
              {
              case 1:
                  system("cls");
                      
    
                  break;
              case 2:
                    
                  
                  break;
              case 3:
                  system("cls");
                  
                  break;
              case 4:
                  system("cls");     
                  exit(0);       
              }
              break;
          }
          
      } while (true);  
   }
};

class Account
{
};
class Chairman
{
  private:
  char bookNo1[9];
  public:
  void take_code()
  {
    cin>>bookNo1;
  }
  
};

class BookList
{ 
  private:
  string bookName;
  string bookNo;
  public:
  void Read_list()
    {
        ifstream Booklist("booklist.txt" , ios::in | ios::out );
    }
};
class Math_Shelf_Manager
{};
class Programming_Shelf_Manager
{};
class Physic_Shelf_Manager
{};
class English_Shelf_Manager
{};


int main()
{
  Menu main_menu;
  main_menu.menu();    
  BookList booklist;
  Account account;
  Chairman chairman;
  return 0;
}  
