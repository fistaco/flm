#include "../../include/CommandHandler.h"
#include "../../include/Command.h"
#include <map>
#include <functional>

using namespace std;

CommandHandler::CommandHandler()
{
}

CommandHandler::~CommandHandler()
= default;

void CommandHandler::handle_command(Command cmd, char** args)
{
	typedef void (CommandHandler::*func_ptr)(char**);
	func_ptr test = handle_create;
	map<Command, func_ptr> cmd_map = {
		{ Command::CREATE, handle_create },
		{ Command::DELETE, handle_delete },
		{ Command::ADD, handle_add },
		{ Command::CHECK, handle_check },
		{ Command::VIEW, handle_view }
	};
}

void CommandHandler::handle_create(char** args)
{
	char* list_name = args[0];
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
