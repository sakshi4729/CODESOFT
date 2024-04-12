#include<iostream>
#include<cstdlib>
#include<ctime>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int range;
    cout<<"Enter range of random number: ";
    cin>>range;
    long long int random=rand()%range;
    cout<<"Guess a number!!"<<endl;
    long long int guess;
    do{
        cout<<"Your guess number:";
        cin>>guess;
        if(guess>range){
            cout<<"The number you guessed is out of range!!"<<endl;
        }
        else if(guess>random){
            cout<<"The number you guessed is Too High!! Try again"<<endl;
        }
        else if(guess<random){
            cout<<"The number you guessed is Too Low!! Try again"<<endl;
        }
        else{
            cout<<"The number you guessed is correct!!"<<endl;
        }
    }
    while(guess!=random);
    return 0;
}
