#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    
    srand(time(0));
    auto max_number=100;
    auto random_num=rand();
    auto number_gen=random_num%(max_number+1);
    auto counter=5;
    int input=0;
    
    while (counter!=0){
       cout<< "enter number between 1 and 100"<<endl;
       cin>>input;
       
       if (input>max_number){
           
           cout<<"number not valid"<<endl;
           counter++;
       }
      else if (input==number_gen){
           cout<<"you win"<<endl;
           break;
       }
       
       else if (number_gen>input && counter!=1){
           
           cout<<" guess higher"<<endl;
       }
       
       else if (number_gen<input && counter!=1){
           
           cout<< "guess lower"<<endl;
       }
          counter--;
          if (counter==0){
              cout<<"you lose"<<endl;
          }
    }
    
}