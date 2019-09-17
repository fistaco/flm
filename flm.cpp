#include <iostream>
#include "include/Command.h"
#include <map>

using namespace std;

int main(int argc, char** argv)
{
	// Map the user's command to its Enum representation
	string command_str = string(argv[1]); // The first argument after the executable's name
	map<string, Command> command_map = {
		{ "create", Command::CREATE },
		{ "delete", Command::DELETE },
		{ "del", Command::DELETE },
		{ "add", Command::ADD },
		{ "remove", Command::CREATE },
		{ "check", Command::CHECK},
		{ "chk", Command::CHECK },
		{ "view", Command::VIEW },
	};
	// Handle the user's command
	Command cmd = command_map.find(command_str)->second;
	if (cmd == Command::CREATE)
	{
		cout << "Ayy lmao\n";
	}

	return 0;
}
