#include <iostream>
#include <time.h>
#include <vector>
#include <unistd.h>
using namespace std;

void sizes(){
    vector<string> cities = {"Tokyo","Delhi","Shanghai","Sao Paulo",
        "Mexico City","Cairo","Mumbai","Beijing","Dhaka","Osaka",
        "New York City","Karachi","Buenos Aires","Chongqing","Istanbul",
        "Kolkata","Manila","Lagos","Rio de Janeiro","Tianjin","Kinshasa",
        "Guangzhou","Los Angeles","Moscow","Shenzhen","Lahore","Bangalore",
        "Paris","Bogota","Jakarta","Chennai","Lima","Bangkok","Seoul",
        "Nagoya","Hyderabad","London","Tehran","Chicago","Chengdu","Nanjing",
        "Wuhan","Ho Chi Minh City","Luanda","Ahmedabad","Kuala Lumpur",
        "Xian","Hong Kong","Dongguan","Hangzhou","Foshan","Shenyang",
        "Riyadh","Baghdad","Santiago","Surat","Madrid","Suzhou","Pune",
        "Harbin","Houston","Dallas","Toronto","Dar es Salaam","Miami",
        "Belo Horizonte","Singapore","Philadelphia","Atlanta","Fukuoka",
        "Khartoum","Barcelona","Johannesburg","Saint Petersburg","Qingdao",
        "Dalian","Washington DC","Yangon","Alexandria","Jinan","Guadalajara"};


    printf("In this game you are given two cities and choose the city"
    	   " based on the question asked\n");
    string input;
	int range = 81;
	srand(time(NULL));
	int randnum1 = rand();
	randnum1 = randnum1 % range;
	printf("Is %s bigger than ", cities[randnum1].c_str());
	sleep(1);
	srand(time(NULL));
	int randnum2 = rand();
	randnum2 = randnum2 % range;
	printf("%s?\n", cities[randnum2].c_str());
    cout << "Your Answer(Y/N): ";
    getline(cin, input);
    //cin.ignore();
    if(randnum1 < randnum2){
        if(input == "Y"){
            cout << "You are correct" << endl;
        }
        else{
            cout << "You are incorrect" << endl;
        }
    }
    if(randnum1 > randnum2){
        if(input == "N"){
            cout << "You are correct" << endl;
        }
        else{
            cout << "You are incorrect" << endl;
        }
    }

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
		sizes();
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
