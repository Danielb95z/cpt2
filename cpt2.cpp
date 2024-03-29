#include <iostream>
#include <time.h>
#include <vector>
#include <unistd.h>
using namespace std;

int score1 = 0;
int score2 = 0;
int score3 = 0;

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

vector<string> countries2 = {"China", "India", "United States", "Indonesia", "Pakistan", "Brazil", "Nigeria", "Bangladesh",
	"Russia", "Mexico", "Japan", "Ethiopia", "Philippines", "Egypt", "Vietnam", "Democratic Repulic of the Congo", "Turkey",
	"Iran", "Germany", "Thailand", "France", "United Kingdom", "Tanzania", "South Africa", "Italy", "Kenya", "Myanmar", "South Korea",
	"Colombia", "Spain", "Uganda", "Argentina", "Sudan", "Algeria", "Ukraine", "Iraq", "Afghanistan", "Canada", "Poland",
	"Morocco", "Saudi Arabia", "Uzbekistan", "Angola", "Peru", "Malaysia", "Mozambique", "Ghana", "Nepal", "Venezuela"};

vector<string> capitals = {"Beijing", "New Delhi", "Washington DC", "Jakarta", "Islamabad", "Brasilia", "Abuja", "Dhaka",
	"Moscow", "Mexico City", "Tokyo", "Addis Ababa", "Manila", "Cairo", "Hanoi", "Kinshasa", "Ankara", "Tehran", "Berlin",
	"Bangkok", "Paris", "London", "Dodoma", "Cape Town", "Rome", "Nairobi", "Naypyidaw", "Seoul", "Bogota", "Madrid", "Kampala",
	"Buenos Aires", "Khartoum", "Algiers", "Kyiv", "Baghdad", "Kabul", "Ottawa", "Warsaw", "Rabat", "Riyadh", "Tashkent",
	"Luanda", "Lima", "Kuala Lumpur", "Maputo", "Accra", "Kathmandu", "Caracas"};

void whatcapital(){
	printf("\nIn this game you have to guess the capital of the given country.\n");

	int range = 49;
	srand(time(NULL));
	int randnum = rand();
	randnum = randnum % range;

	printf("What is the capital of %s?", countries2[randnum].c_str());
	printf("\nYour answer here (only use alphabet, case sensitive): ");
	string input;
	cin.ignore();
	getline(cin, input);

	if(input == capitals[randnum]){
		printf("\nYou are correct!\n");
        score3 += 1;
	}
	else{
		printf("\nYou are incorrect.\n");
        score3 -= 1;
	}
    printf("Your score for this game 3 is %d!", score3);
	sleep(2);
}

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
            score2 += 1;
    }
    else{
        cout << "You are incorrect" << endl;
        score2 -= 1;
    }
	printf("Your score for game 2 is %d!", score2);
    sleep(2);
}


void sizes(){
    printf("\nIn this game you are given two cities and choose the city"
    	   " based on the question asked\n");
    string input;
	int range = 81;


	srand(time(NULL));
	int randnum1 = rand();
	randnum1 = randnum1 % range;

	sleep(1); //<-- This sleep is here so the random number generator works! DONT REMOVE IT

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
            score1 += 1;
        }
        else{
            cout << "You are incorrect" << endl;
            score1 -= 1;
        }
    }
    if(randnum1 > randnum2){
        if(input == "N"){
            cout << "You are correct" << endl;
            score1 += 1;
        }
        else{
            cout << "You are incorrect" << endl;
            score1 -= 1;
        }
    }

    cout << "Your score for game_1 is " << to_string(score1) << endl;
	sleep(2);

}


int totalscore(int &score1, int &score2, int &score3){
    int tscore = score1 + score2 + score3;
    return tscore;
}


int main(){
    	int choice = 0;
    	cout << "Welcome to the Cities Game!" << endl;
    	cout << "In this game you will answer questions about cities!" << endl;
	while(true){
    	cout << "\nWhich game woud you like to play: " << endl;
    	cout << "Sizes(1)" << endl << "Which country(2)" << endl;
    	cout << "Country's Capital(3)" << endl << "Stop Playing(4)" << endl;
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
	        cout << "You chose the Country's Capital game!" << endl;
			whatcapital();
		}
		else if(choice == 4){
            int tscore = totalscore(score1,score2,score3);
            cout << "Your Total score was " << to_string(tscore) << endl;
			return 0;
		}
	}
}
