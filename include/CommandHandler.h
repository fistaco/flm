#pragma once

#include "Command.h"

using namespace std;

class CommandHandler
{
public:
	CommandHandler();
	~CommandHandler();

	void handle_command(Command cmd, char** args);

private:
	void handle_create(char** args);
	void handle_delete(char** args);
	void handle_add(char** args);
	void handle_check(char** args);
	void handle_view(char** args);
};

