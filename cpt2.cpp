#include <iostream>
using namespace std;

void sizes(){
    cout << "In this game you are given two cities and choose the city";
    cout << " based on the question asked" << endl;

}

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
    else if(choice == 2){
        cout << "You chose the Which Country game!" << endl;
    }
    else if(choice == 3){
        cout << "You chose the Countries Largest City game!" << endl;
    }
    return 0;
}
