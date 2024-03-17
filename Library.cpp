#include <iostream>
#include <conio.h>
#include <iomanip>
#include <ctime>
using namespace std;

#define UP 72
#define DOWN 80
class Menu
{
  public:
  void menu()
{
    system("cls");
    cout<<"\t\t\t\tHELLO"<<endl
    <<setw(5)<<"\n\n\t\t   ((WELCOME TO MAKHMALI LIBRARY))"<<
    "\n\n\n\t\t\t Press any key...";
    getch();
    system("cls");
	 unsigned int marker;        
    unsigned int choice = 1;
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
{};
class Chairman
{};
class Book
{};
class Computer
{};
class bookList
{};
class Math_Shelf_Manager
{};
class Programming_Shelf_Manager
{};
class Physic_Shelf_Manager
{};
class English_Shelf_Manager
{};



//*********************************MENU*********************************
int main()
{
  Menu main_menu;
  main_menu.menu();    
  return 0;
}  
