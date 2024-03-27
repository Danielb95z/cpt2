#include <iostream>
#include <time.h>
#include <vector>
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
        "Xi'an","Hong Kong","Dongguan","Hangzhou","Foshan","Shenyang",
        "Riyadh","Baghdad","Santiago","Surat","Madrid","Suzhou","Pune",
        "Harbin","Houston","Dallas","Toronto","Dar es Salaam","Miami",
        "Belo Horizonte","Singapore","Philadelphia","Atlanta","Fukuoka",
        "Khartoum","Barcelona","Johannesburg","Saint Petersburg","Qingdao",
        "Dalian","Washington DC","Yangon","Alexandria","Jinan","Guadalajara"};
	string city_list[5] = {"CityA",
						   "CityB",
						   "CityC",
						   "CityD",
						   "CityE"};
    printf("In this game you are given two cities and choose the city"
    	   " based on the question asked\n");
	printf("Is %s or %s bigger?\n", city_list[3].c_str(), city_list[1].c_str()); //just an example of how this could work

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
