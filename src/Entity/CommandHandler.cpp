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

void CommandHandler::handle_command(Command cmd, list<string> args)
{
	map<Command, function<void()>> cmd_map = {
		{ Command::CREATE, []() {} },
		{ Command::DELETE, []() {} },
		{ Command::ADD, []() {} },
		{ Command::CHECK, []() {}},
		{ Command::VIEW, []() {} }
	};
}

void CommandHandler::handle_create(list<string> args)
{
}

void CommandHandler::handle_delete(list<string> args)
{
}

void CommandHandler::handle_add(list<string> args)
{
}

void CommandHandler::handle_check(list<string> args)
{
}

void CommandHandler::handle_view(list<string> args)
{
}
