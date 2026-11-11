#include <iostream>
#include <string>
using namespace std;
int main () {

cout<<"\t" "\t""\t""\t""\t""\t""_____QUIZ GAME_____"<<endl;
cout<<"\t" "\t""\t""RULES ARE AS FOLLOWS :-"<<endl;
cout<<"\t" "\t" "1. No Spelling Mistakes Will Be Tolerated.  "<<endl;
cout<<"\t" "\t" "2. A Single Wrong Answer And Your Game Is Over."<<endl;
cout<<"\t" "\t" "3. There Will Be Ten Questions To Answer. "<<endl;
cout<<"\t" "\t" "4. Answer All Of Them Correctly To Win The Game. "<<endl;
cout<<"\t" "\t" "5. All Answers Are Case Sensitive. "<<endl;
cout<<"\t" "\t" "6. First Letter Of Each Answer Must Be Capitalized. "<<endl;
cout<<"\t" "\t" "7. All Answers Must Be Typed In Full Words. "<<endl;
cout<<"\t" "\t" "8. Good Luck! "<<endl;

cout<<"\t" "\t" ""<<endl;
cout<<"\t" "\t" ""<<endl;
cout<<"\t" "\t" ""<<endl;
cout<<"\t" "\t" ""<<endl;
cout<<"\t" "\t" ""<<endl;

string answer1;

 cout<<"\t" "Q-1. What is the capital of France? " <<endl;                              // Question 1
 std::cin >> answer1;
 if (answer1 == "Paris") {
    cout << "\t" "Correct! Moving on to the next question." << endl;
    
    cout<<"\t" "\t" ""<<endl;
    cout<<"\t" "\t" ""<<endl;

   cout<< "\t" "Q-2. What is the largest planet in our solar system? " <<endl;              // Question 2
   string answer2;
   std::cin >> answer2;
if (answer2 == "Jupiter") {
    cout << "\t" "Correct! Moving on to the next question." << endl;
    
    cout<<"\t" "\t" ""<<endl;
    cout<<"\t" "\t" ""<<endl;

   cout<< "\t" "Q-3. What is the chemical symbol for gold? " <<endl;                    // Question 3
   string answer3;
   std::cin >> answer3;
if (answer3 == "Au") {
    cout << "\t" "Correct! Moving on to the next question." << endl;    
    
    cout<<"\t" "\t" ""<<endl;
    cout<<"\t" "\t" ""<<endl;

    cout<< "\t" "Q-4. What is the largest ocean on Earth? " <<endl;                     // Question 4
    string answer4;
    std::cin >> answer4;
if (answer4 == "Pacific") {
     cout << "\t" "Correct! Moving on to the next question." << endl;
     
     cout<<"\t" "\t" ""<<endl;
     cout<<"\t" "\t" ""<<endl;

   cout<< "\t" "Q-5. What is the smallest prime number? " <<endl;                   // Question 5
   string answer5;
   std::cin >> answer5;
if (answer5 == "2") {
    cout << "\t" "Correct! Moving on to the next question." << endl;
    
    cout<<"\t" "\t" ""<<endl;
    cout<<"\t" "\t" ""<<endl;

    cout<< "\t" "Q-6. What is the currency of Japan? " <<endl;                   // Question 6
    string answer6;
      std::cin >> answer6;
if (answer6 == "Yen") {
    cout << "\t" "Correct! Moving on to the next question." << endl;
    
    cout<<"\t" "\t" ""<<endl;
    cout<<"\t" "\t" ""<<endl;

    cout << "\t" "Q-7.What is the capital of Japan? " <<endl;                   //  Question 7
    string answer7; 
    std::cin >> answer7;

if (answer7 == "Tokyo") {
        cout << "\t" "Correct! Moving on to the next question." << endl;

        cout<<"\t" "\t" ""<<endl;
        cout<<"\t" "\t" ""<<endl;

        cout << "\t" "Q-8. What is the chemical formula for water? " <<endl;                   // Question 8
        string answer8;
        std::cin >> answer8;

if (answer8 == "H2O") {
             cout << "\t" "Correct! Moving on to the next question." << endl;
        cout<<"\t" "\t" ""<<endl;
        cout<<"\t" "\t" ""<<endl;

        cout << "\t" "Q-9. What is the largest desert in the world? " <<endl;           // Question 9   
        string answer9;
        std::cin >> answer9;

if (answer9 == "Sahara") {
             cout << "\t" "Correct! Moving on to the next question." << endl;

             cout<<"\t" "\t" ""<<endl;
             cout<<"\t" "\t" ""<<endl;

               cout << "\t" "Q-10. Which planet is known as the Red Planet? " <<endl;                 // Question 10
               string answer10; 
               std::cin >> answer10;

if (answer10 == "Mars") {
                    cout << "\t" "Congratulations! You have answered all questions correctly and won the game!" << endl;

             
         }
                        else {
             cout << "\t" "Incorrect! Game Over." << endl;}
}
                        else {
             cout << "\t" "Incorrect! Game Over." << endl;}
}
                     else {
             cout << "\t" "Incorrect! Game Over." << endl;
         }
}
                  else {
    cout << "\t" "Incorrect! Game Over." << endl;}
}
               else {
    cout << "\t" "Incorrect! Game Over." << endl;}
}
            else {
    cout << "\t" "Incorrect! Game Over." << endl;
}
}
         else {
    cout << "\t" "Incorrect! Game Over." << endl;}
}
      else {
    cout << "\t" "Incorrect! Game Over." << endl;
    return 0;
 }
}
   else {
    cout << "\t" "Incorrect! Game Over." << endl;
    return 0;

}
}
else {
    cout << "\t" "Incorrect! Game Over." << endl;
    return 0;

 }
 
 cout << "\nPress Enter to exit...";
cin.ignore();
cin.get();

}
