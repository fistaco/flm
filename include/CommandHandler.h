#pragma once

#include "Command.h"
#include <list>

using namespace std;

class CommandHandler
{
public:
	CommandHandler();
	~CommandHandler();

	void handle_command(Command cmd, list<string> args);

	void handle_create(list<string> args);
	void handle_delete(list<string> args);
	void handle_add(list<string> args);
	void handle_check(list<string> args);
	void handle_view(list<string> args);
};

