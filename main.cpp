#include <iostream>
#include <string>

int main() {
    std::cout << "Prof. Oak: Welcome to the world of Pokemon, what is your name? ";

    std::string player_name;
    std::cin >> player_name;

    char confirmation;
    while (true) {
	std::cout << "Sorry, did you say " << player_name << " is your name? My hearing is bad. (y/n) ";
	std::cin >> confirmation;
	if (confirmation == 'y' || confirmation == 'Y') {
	    break;
	}
	std::cout << "Then what is it? ";
	std::cin >> player_name;
    } 

    std::cout << std::endl << "Hello, " << player_name << ". What is your friends name? ";
    std::string friend_name;
    std::cin >> friend_name;
    
    std::cout << "Your friend's name is " << friend_name << "? What a weird name." << std::endl;

    return 0;
}
