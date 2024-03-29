#include <iostream>
#include <time.h>
#include <vector>
#include <unistd.h>
using namespace std;

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

vector<string> countries = {"Japan","India","China","Brazil","Mexico","Egypt","India","China","Bangladesh","Japan","United States","Pakistan",
    "Argentina","China","Turkey","India","Philippines","Nigeria","Brazil","China","Democratic Republic of the Congo", "China", "United States","Russia",
    "China","Pakistan","India","France","Colombia","Indonesia","India","Peru","Thailand","South Korea","Japan","India","United Kingdom","Iran","United States",
    "China","China","China","Vietnam","Angola","India","Malaysia","China","China","China","China","China","China","Saudi Arabia","Iraq","Chile","India","Spain",
    "China","India","China","United States","United States","Canada","Tanzania","United States","Brazil","Singapore","United States","United States","Japan",
    "Sudan","Spain","South Africa","Russia","China","China","United States", "Myanmar", "Egypt", "China","Mexico"};


void whichcountry(){
    printf("\nIn this game you are given a city and you have to"
            " choose which country the city given belongs to");
    string input;
    int range = 81;

    srand(time(NULL));
    int randnum = rand();
    randnum = randnum % range;

	printf("\nWhere is %s located in? ", cities[randnum].c_str());
    cout << "\nYour Answer(Case Sensitive): ";
    cin.ignore();
    getline(cin, input);

    //Checking Process

    if(input == countries[randnum]){
            cout << "You are correct" << endl;
        }
        else{
            cout << "You are incorrect" << endl;
        }
}


void sizes(){
    printf("\nIn this game you are given two cities and choose the city"
    	   " based on the question asked\n");
    string input;
	int range = 81;


	srand(time(NULL));
	int randnum1 = rand();
	randnum1 = randnum1 % range;



	srand(time(NULL));
	int randnum2 = rand();
	randnum2 = randnum2 % range;

    while(randnum1 == randnum2){

        srand(time(NULL));
        randnum1 = rand();
        randnum1 = randnum1 % range;

        srand(time(NULL));
        randnum2 = rand();
        randnum2 = randnum2 % range;

    }

    printf("Is %s bigger than ", cities[randnum1].c_str());
	printf("%s?\n", cities[randnum2].c_str());
    cout << "Your Answer(Y/N): ";

    //getline(cin, input); <-- This part isn't properly setting the player input into input (this makes the player always incorrect)
    //cin.ignore();
	cin >> input;
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
	sleep(2);

}


int main(){
    	int choice = 0;
    	cout << "Welcome to the Cities Game!" << endl;
    	cout << "In this game you will answer questions about cities!" << endl;
	while(true){
    	cout << "\nWhich game woud you like to play: " << endl;
    	cout << "Sizes(1)" << endl << "Which country(2)" << endl;
    	cout << "Countries Largest City(3)" << endl << "Stop Playing(4)" << endl;
	    cin >> choice;
	    if(choice == 1){
	        cout << "You chose the Sizes game!" << endl;
			sizes();
	    }
	    //game where it gives a city and the used guesses the country based on the city
	    else if(choice == 2){
	        cout << "You chose the Which Country game!" << endl;
            whichcountry();
	    }
	    //gives a country and then the user guesses the city
	    else if(choice == 3){
	        cout << "You chose the Countries Largest City game!" << endl;
		}
		else if(choice == 4){
			return 0;
		}
	}
}
