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
		{ "remove", Command::REMOVE },
		{ "check", Command::CHECK },
		{ "chk", Command::CHECK },
		{ "view", Command::VIEW },
	};

	// Put the commands arguments in one array
	char** cmd_args = new char*[argc - 2];
	for (int i = 0; i < argc - 2; i++)
	{
		char* arg = argv[i + 2];
		cmd_args[i] = arg;
	}
	
	// Handle the user's command // TODO: Catch unusable input gracefully
	Command cmd = command_map.find(command_str)->second;
	if (cmd == Command::CREATE)
	{
		cout << "Ayy lmao\n";
	}

	return 0;
}
