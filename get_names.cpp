#include <iostream>
#include <string>

std::string get_player_name() {

    std::cout << "What is your name? ";

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
    return player_name;
}

std::string get_friend_name() {
    std::cout << "This guy here is your friend, what was his name? My memory is bad too... ";

    std::string friend_name;
    std::cin >> friend_name;

    char confirmation;
    while (true) {
	std::cout << "You said " << friend_name << " was his name? (y/n) ";
	std::cin >> confirmation;
	if (confirmation == 'y' || confirmation == 'Y') {
	    break;
	}
	std::cout << "Then what was it? Speak up this time: ";
	std::cin >> friend_name;
    } 
    
    std::cout << "His name was " << friend_name << "? What a weird name." << std::endl;
    return friend_name;
}
