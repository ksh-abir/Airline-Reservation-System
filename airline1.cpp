//Khandokar Sakhawat Hossen


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:
       
       Management ()
       {
          mainMenu();
       }
};


class Details
{
    public:
       
       static string name, gender;
       int phoneNo;
       int age;
       string add;
       static int cID;
       char arr[100];

       void information()
       {
            cout<<"\nEnter the customer ID:";
            cin >> cID;
            cout << "\nEnter the Name:";
            cin >> name;
            cout << "\nEnter the Age:";
            cin >> age;
            cout << "\nAddress: ";
            cin >> add;
            cout << "\n Gender: ";
            cin >> gender;
            cout << "Your details are safe with us\n"<< endl;
             
       }
      
};

int Details :: cID;
string Details :: name;
string Details :: gender;



class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};
            for (int a = 0; a < 6; a++)
            {
                cout<<(a+1)<<".flight to" << flightN[a]<< endl;
            }

            cout << "\n Welcome to Airlines!" << endl;
            cout << "Press the number of the country you want to book" << endl;
            cin>> choice;

            switch (choice)
            {
            case 1:
                {
                    cout << "___________Welcome to Dubai Emmirats___________\n" << endl;
                    cout << "Enjoy your journey" << endl;
                    cout << "Displaying the following flights\n" << endl;

                    cout<< "1. DUB -498" <<endl;
                    cout << "\t01-08-23 8:00AM 10hrs Tk 20,000" << endl;
                    cout << "1. DUB -508" << endl;
                    cout << "\t01-08-23 2:00PM 14hrs Tk 17,000" << endl;
                    cout << "1. DUB -111" << endl;
                    cout << "\t01-08-23 8:00PM 8hrs Tk 30,000" << endl;

                    cout << "\nSelect the flight you want to book" << endl;
                    cin>>choice1;

                   if (choice1==1)
                   {
                        charges = 20000;
                        cout<<"\n You have successfully purchased the flight DUB -498"<< endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 2)
                   {
                        charges = 17000;
                        cout << "\n You have successfully purchased the flight DUB -508" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 3)
                   {
                        charges = 30000;
                        cout << "\n You have successfully purchased the flight DUB -111" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else
                   {
                        cout << "Invalid input!, shifting to the previous menu " << endl;
                        flights();

                   }

                   cout << "Press any key to go back to mainmenu:" << endl;
                   cin>>back;

                   if (back==1)
                   {
                        mainMenu();
                   }
                   else
                   {
                        mainMenu();
                   }
                   
                }

                case 2: 
                {
                   cout << "___________Welcome to Canadians Airline___________\n"<< endl;
                   cout << "Enjoy your journey" << endl;
                   cout << "Displaying the following flights\n"<< endl;

                   cout << "1. CA -999" << endl;
                   cout << "\t01-08-23 10:00AM 10hrs Tk 40,000" << endl;
                   cout << "1. CA -888" << endl;
                   cout << "\t01-08-23 4:00PM 14hrs Tk 30,000" << endl;
                   cout << "1. CA -111" << endl;
                   cout << "\t01-08-23 10:00PM 8hrs Tk 50,000" << endl;

                   cout << "\nSelect the flight you want to book" << endl;
                   cin >> choice1;

                   if (choice1 == 1)
                   {
                        charges = 40000;
                        cout << "\n You have successfully purchased the flight CA -999" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 2)
                   {
                        charges = 30000;
                        cout << "\n You have successfully purchased the flight CA -888" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 3)
                   {
                        charges = 50000;
                        cout << "\n You have successfully purchased the flight CA -111" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else
                   {
                        cout << "Invalid input!, shifting to the previous menu " << endl;
                        flights();
                   }

                   cout << "Press any key to go back to mainmenu:" << endl;
                   cin >> back;

                   if (back == 1)
                   {
                        mainMenu();
                   }
                   else
                   {
                        mainMenu();
                   }
                }

                case 3:
                {
                   cout << "___________Welcome to British Airways___________\n"<< endl;
                   cout << "Enjoy your journey" << endl;
                   cout << "Displaying the following flights\n"<< endl;

                   cout << "1. UK -498" << endl;
                   cout << "\t01-08-23 8:00AM 10hrs Tk 40,000" << endl;
                   cout << "1. UK -508" << endl;
                   cout << "\t01-08-23 2:00PM 14hrs Tk 50,000" << endl;

                   cout << "\nSelect the flight you want to book" << endl;
                   cin >> choice1;

                   if (choice1 == 1)
                   {
                        charges = 40000;
                        cout << "\n You have successfully purchased the flight UK -498" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 2)
                   {
                        charges = 50000;
                        cout << "\n You have successfully purchased the flight UK -508" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }


                   else
                   {
                        cout << "Invalid input!, shifting to the previous menu " << endl;
                        flights();
                   }

                   cout << "Press any key to go back to mainmenu:" << endl;
                   cin >> back;

                   if (back == 1)
                   {
                        mainMenu();
                   }
                   else
                   {
                        mainMenu();
                   } 
                }

                case 4:
                {
                   cout << "___________Welcome to US Airways___________\n"<< endl;
                   cout << "Enjoy your journey" << endl;
                   cout << "Displaying the following flights\n" << endl;

                   cout << "1. US -498" << endl;
                   cout << "\t01-08-23 8:00AM 10hrs Tk 45,000" << endl;
                   cout << "1. US -508" << endl;
                   cout << "\t01-08-23 2:00PM 14hrs Tk 35,000" << endl;
                   cout << "1. US -111" << endl;
                   cout << "\t01-08-23 8:00PM 8hrs Tk 55,000" << endl;

                   cout << "\nSelect the flight you want to book" << endl;
                   cin >> choice1;

                   if (choice1 == 1)
                   {
                        charges = 45000;
                        cout << "\n You have successfully purchased the flight US -498" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 2)
                   {
                        charges = 35000;
                        cout << "\n You have successfully purchased the flight US -508" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 3)
                   {
                        charges = 55000;
                        cout << "\n You have successfully purchased the flight US -111" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else
                   {
                        cout << "Invalid input!, shifting to the previous menu " << endl;
                        flights();
                   }

                   cout << "Press any key to go back to mainmenu:" << endl;
                   cin >> back;

                   if (back == 1)
                   {
                        mainMenu();
                   }
                   else
                   {
                        mainMenu();
                   }
                }

                case 5:
                {
                   cout << "___________Welcome to Austrailian Airlines___________\n"
                        << endl;
                   cout << "Enjoy your journey" << endl;
                   cout << "Displaying the following flights\n"
                        << endl;

                   cout << "1. AS -498" << endl;
                   cout << "\t01-08-23 6:00AM 10hrs Tk 30,000" << endl;
                   cout << "1. AS -508" << endl;
                   cout << "\t01-08-23 1:00PM 14hrs Tk 25,000" << endl;
                   cout << "1. AS -111" << endl;
                   cout << "\t01-08-23 11:00PM 8hrs Tk 30,000" << endl;

                   cout << "\nSelect the flight you want to book" << endl;
                   cin >> choice1;

                   if (choice1 == 1)
                   {
                        charges = 30000;
                        cout << "\n You have successfully purchased the flight AS -498" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 2)
                   {
                        charges = 25000;
                        cout << "\n You have successfully purchased the flight AS -508" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 3)
                   {
                        charges = 30000;
                        cout << "\n You have successfully purchased the flight AS -111" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else
                   {
                        cout << "Invalid input!, shifting to the previous menu " << endl;
                        flights();
                   }

                   cout << "Press any key to go back to mainmenu:" << endl;
                   cin >> back;

                   if (back == 1)
                   {
                        mainMenu();
                   }
                   else
                   {
                        mainMenu();
                   }
                }

                case 6:
                {
                   cout << "___________Welcome to European Airlines___________\n"<< endl;
                   cout << "Enjoy your journey" << endl;
                   cout << "Displaying the following flights\n"  << endl;

                   cout << "1. EU -498" << endl;
                   cout << "\t01-08-23 11:00AM 10hrs Tk 50,000" << endl;
                   cout << "1. EU -508" << endl;
                   cout << "\t01-08-23 3:00PM 14hrs Tk 40,000" << endl;
                   cout << "1. EU -111" << endl;
                   cout << "\t01-08-23 9:00PM 8hrs Tk 50,000" << endl;

                   cout << "\nSelect the flight you want to book" << endl;
                   cin >> choice1;

                   if (choice1 == 1)
                   {
                        charges = 50000;
                        cout << "\n You have successfully purchased the flight EU -498" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 2)
                   {
                        charges = 40000;
                        cout << "\n You have successfully purchased the flight EU -508" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else if (choice1 == 3)
                   {
                        charges = 50000;
                        cout << "\n You have successfully purchased the flight EU -111" << endl;
                        cout << "\n You can go back to main menu and take the ticket" << endl;
                   }

                   else
                   {
                        cout << "Invalid input!, shifting to the previous menu " << endl;
                        flights();
                   }

                   cout << "Press any key to go back to mainmenu:" << endl;
                   cin >> back;

                   if (back == 1)
                   {
                        mainMenu();
                   }
                   else
                   {
                        mainMenu();
                   }
                }
            
            default:
                {
                    cout<<"Invalid input! Shifting to the main menu"<< endl;
                    mainMenu();
                    break;
                }

                
            }
        }


};

float registration :: charges;
int registration :: choice;


class ticket : public registration, Details
{
    public:
        
        void Bill()
        {
            string destination="";
            ofstream outf("records.txt");
            {
                outf << "________KSH Airlines__________"<< endl;
                outf << "___________Ticket_____________" << endl;
                outf << "______________________________" << endl;

                outf << "Customer ID:"<< Details::cID << endl;
                outf << "Customer Name:" << Details::name << endl;
                outf << "Customer Gender:" << Details::gender << endl;
                outf << "\tDestination" << endl << endl;

                if (registration::choice==1)
                {
                    destination = "Dubai";
                }
                else if (registration::choice == 2)
                {
                    destination = "Canada";
                }
                else if (registration::choice == 3)
                {
                    destination = "UK";
                }
                else if (registration::choice == 4)
                {
                    destination = "USA";
                }
                else if (registration::choice == 5)
                {
                    destination = "Australia";
                }
                else if (registration::choice == 6)
                {
                    destination = "Europe";
                }

                outf<<"Destination\t\t"<<destination<<endl;
                outf << "Flight cost :\t\t" << registration::charges <<endl;
            }
            outf.close();
        }
        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if (!ifs)
             {
                cout<<"File eror!"<<endl;
             }
                while (!ifs.eof())
             {
                ifs.getline(arr, 100);
                cout<< arr<< endl;
             }
            }
            ifs.close();
            
        }
};



void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
    
    cout<<"\t              KSH Airlines  \n" <<endl;
    cout<< "\t ............... Main Menu............."<< endl;
    cout << "\t ......................................" << endl;
    cout << "\t\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add customer details   \t|" << endl;
    cout << "\t|\t Press 2 for flight registration   \t|" << endl;
    cout << "\t|\t Press 3 for ticket and charges    \t|" << endl;
    cout << "\t|\t Press 4 to Exit                   \t|" << endl;
    cout << "\t\t\t\t\t\t\t\t|" << endl;
    cout << "\t ......................................" << endl;

    cout<<"Enter the choice:" ;
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:
      {
          cout<<"_________Customers_________\n" <<endl;
          d.information();
          cout << " Press any key to go back to Main menu";
          cin>>back;

          if (back==1)
          {
             mainMenu();
          }
          else
          {
             mainMenu();
          }
          break;
      }

    case 2:
      {
          cout << "_________Book a flight using this system_________\n"<< endl;
          r.flights();
          break;
      }

    case 3:
      {
          cout << "_________Get Your Ticket_________\n" << endl;
          t.Bill();

          cout << "Your ticket has printed you can collect it\n"<< endl;
          cout << "Press 1 to display your ticket";

          cin>>back;

          if (back==1)
          {
            t.dispBill();
            cout << " Press any key to go back to Main menu";
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

          }
          else
          {
            mainMenu();
          }
          break;

      }

    case 4:
      {
          cout << "\n\n\t_____Thank You______"<< endl;
          break;
      }
      default : 
         {
          cout << "Invalid input! please try again\n" << endl;
          mainMenu();
          break; 
         }

    }
}



int main()
{
    Management Mobj;
    return 0;
  
}