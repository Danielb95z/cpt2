#include <iostream>
using namespace std;

void sizes(){
    cout << "In this game you are given two cities and choose the city";
    cout << " based on the question asked" << endl;

}
//make new variables to create the other game modes

int main(){
    int choice;
    cout << "Welcome to the Cities Game!" << endl;
    cout << "In this game you will answer questions about cities!" << endl;
    cout << "Which game woud you like to play: " << endl;
    cout << "Sizes(1)" << endl << "Which country(2)" << endl;
    cout << "Countries Largest City(3)" << endl;
    cin >> choice;
    if(choice == 1){
        cout << "You chose the Sizes game!" << endl;
    }
    //game where it gives a city and the used guesses the country based on the city
    else if(choice == 2){
        cout << "You chose the Which Country game!" << endl;
    }
    //gives a country and then the user guesses the city
    else if(choice == 3){
        cout << "You chose the Countries Largest City game!" << endl;
    }
    return 0;
}
