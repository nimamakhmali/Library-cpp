#include <iostream>
#include <conio.h>
#include <ctime>
#include <fstream>
#include <Windows.h>

using namespace std;

#define UP 72
#define DOWN 80
Account account;

class Menu
{
    
private:
    unsigned int marker;
    unsigned int choice = '1';
  
public:
    void menu()
    {
        system("cls");
        cout << "\t\t\t\tHELLO" << endl
             << "\n\n\t\t   ((WELCOME TO MAKHMALI LIBRARY))"
             << "\n\n\n\t\t\t Press any key...";
        getch();
        system("cls");
        do
        {
            system("cls");
            cout << "========= Menu =========" << endl;
            if (choice == 1)
                cout << "->";
            else
                cout << "  ";
            cout << " LOG IN or SIGN UP" << endl;
            if (choice == 2)
                cout << "->";
            else
                cout << "  ";
            cout << " SEARCH..." << endl;
            if (choice == 3)
                cout << "->";
            else
                cout << "  ";

            cout << " SETTINGS" << endl;
            if (choice == 4)
                cout << "->";
            else
                cout << "  ";
            cout << " EXIT" << endl;
            cout << "========================" << endl;

            marker = getch();

            switch (marker)
            {
            case 72:
                if (choice <= 1)
                    choice = 4;
                else
                    choice--;
                break;
            case 80:
                if (choice >= 4)
                    choice = 1;
                else
                    choice++;
                break;
            case 13:
                switch (choice)
                {
                case 1:
                    cout << "\t\t\t\tMAKHMALI LIBRARY" << endl;
                    cout << "Do you want to create an account or log in? (Enter 's' for sign up or 'l' for log in): ";
                    char option;
                    cin >> option;
                    if (option == 's' || option == 'S')
                    {  
						account.sign_up();
                    }
                    else if (option == 'l' || option == 'L')
                    {	
                        account.log_in();
                    }
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
    string name;
    string code;

public:
    void log_in()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your student number: ";
        cin >> code;

        ifstream file("accounts.txt");
        if (file.is_open())
        {
            string storedName, storedCode;
            bool accountFound = false;
            while (file >> storedName >> storedCode)
            {
                if (storedName == name && storedCode == code)
                {
                    accountFound = true;
                    break;
                }
            }
            file.close();
            if (accountFound)
            {
                cout << "You have successfully logged in!" << endl;
            }
            else
            {
                cout << "Invalid name or student number. Login failed." << endl;
            }
        }
        else
        {
            cout << "Unable to open accounts file." << endl;
        }
    }

    void sign_up()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your student number: ";
        cin >> code;

        ofstream file("accounts.txt", ios::app);
        if (file.is_open())
        {
            file << name << " " << code << endl;
            cout << "Account created successfully!" << endl;
            file.close();
        }
        else
        {
            cout << "Unable to open accounts file." << endl;
        }
    }
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

class Assistant
{
  private:
  public:
};


int main()
{
    Account account;
    Menu main_menu;
    main_menu.menu();
    return 0;
}