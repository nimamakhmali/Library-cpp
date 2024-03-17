#include <iostream>
#include <conio.h>
#include <ctime>
#include <fstream>
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
          cout  << "\t\t\t\t========= Menu ========="  << endl;   
          if (choice == 1)                   
              cout << "\t\t\t->" ;  
          else

              cout << "  ";
          cout << "\t\t\t\t\4" << endl; 
          if (choice == 2)                    
              cout << "\t\t\t->" ;   
          else
              cout << "  ";
          cout << "\t\t\t\t\3" << endl;
          if (choice == 3)                   
              cout << "\t\t\t->" ;  
          else
              cout << "  ";
              
          cout << "\t\t\t\t\5" << endl;
          if (choice == 4)                    
              cout << "\t\t\t->" ;   
          else
              cout << "  ";
          cout << "\t\t\t\tExit" << endl;
          cout << "\t\t\t\t========================" << endl;

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
  private:
  public:
};
class Chairman
{};
class Book
{
  private:
  string bookNo;
  string bookName;
  public:
  void List()
  {
    fstream booklist("booklist.txt" , ios::in | ios::out );
    if(booklist.is_open())
    {
      booklist.read((char *) &booklist , sizeof(unsigned int));
    }
  }
};
class Computer
{};
class BookList
{
  public:
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
  return 0;
}  
