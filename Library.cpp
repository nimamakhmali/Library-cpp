#include <iostream>
#include <conio.h>
using namespace std;

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
void menu()
{
	unsigned int marker;        
    unsigned int choice = 1;
    do              
    {
        system("cls");
        cout  << "========= Menu ========="  << endl;   
        if (choice == 1)                   
            cout << "->" ;  
        else
        
            cout << "  ";
        cout << "log in or sign up" << endl; 
        if (choice == 2)                    
            cout << "->" ;   
        else
            cout << "  ";
        cout << "\3" << endl;
        if (choice == 3)                   
            cout << "->" ;  
        else
            cout << "  ";
            
        cout << "Settings" << endl;
        if (choice == 4)                    
            cout << "->" ;   
        else
            cout << "  ";
        cout << "Exit" << endl;
        cout << "========================" << endl;

        marker = getch();   

        switch (marker) 
        {
        case 1:               
            if (choice <= 1)  
                choice = 4;   
            else
                choice--;
            break;
        case 2:           
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
int main()
{
  menu();    
  return 0;
}  
