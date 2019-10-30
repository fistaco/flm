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
	map<Command, function<void()>> cmd_map = {
		{ Command::CREATE, []() {} },
		{ Command::DELETE, []() {} },
		{ Command::ADD, []() {} },
		{ Command::CHECK, []() {}},
		{ Command::VIEW, []() {} }
	};
}

void CommandHandler::handle_create(char** args)
{
	string list_name = args[0];
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
