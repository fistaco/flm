#include "../../include/CommandHandler.h"
#include "../../include/Command.h"
#include <map>
#include <functional>
#include <iostream>

using namespace std;

CommandHandler::CommandHandler()
{
}

CommandHandler::~CommandHandler()
= default;

void CommandHandler::handle_command(Command cmd, char** args)
{
	// Map commands to function pointers
	typedef void (CommandHandler::*func_ptr)(char**);
	map<Command, func_ptr> cmd_map = {
		{ Command::CREATE, &CommandHandler::handle_create },
		{ Command::DELETE, &CommandHandler::handle_delete },
		{ Command::ADD, &CommandHandler::handle_add },
		{ Command::CHECK, &CommandHandler::handle_check },
		{ Command::VIEW, &CommandHandler::handle_view }
	};

	// Call the handler corresponding to the given command
	func_ptr handler = cmd_map[cmd];
	(this->*handler)(args);
}

void CommandHandler::handle_create(char** args)
{
	char* list_name = args[0];
	cout << "Creating list with name " << list_name << "\n";
}

void CommandHandler::handle_delete(char** args)
{
}

void CommandHandler::handle_add(char** args)
{
}

void CommandHandler::handle_check(char** args)
{
}

void CommandHandler::handle_view(char** args)
{
}
