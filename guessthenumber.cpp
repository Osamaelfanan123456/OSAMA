#include <iostream>
using namespace std;

int main()
 {
   for (int i= 0; i<1900;i++)
   {
   srand(time(0));
   int guessnumber=rand()%5+1;
   int guesstries=1;
   int choose;
   cout << "please, Guess The Number Between 1&5.\n";
   cout << "You Have 3 Tries.\n";
   cout << "********************************\n";
   
   while(true)
   {
      (cin>>choose);
      if (choose==guessnumber)
      {
         cout<< "Great, Correct Guess.\n";
         break;
      }
      else
      {
         cout<< "Wrong Guess.\n";
         guesstries++;
      }
      if (guesstries==4)
      {
         cout << "sorry,You Failed The Number Is:"<<guessnumber<<"\n";
         break;
      }
      
   }
   cout << "====================\n";
   }
   return 0;
}
