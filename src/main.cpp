#include <iostream>
#include <string>
#include "GitCopy.h"

using namespace std;

int main(int argc, char *argv[])
{
	string command;

	if (argc >= 2)
	{
		command = string(argv[1]);
	}

	// Possible Commands:
	// init : Initializes a new repository (creating a new .gitcopy folder)
	// add <file> : Marks files to be included in the next commit
	// commit -m message : Records a snapshot of the current staged files
	// status : Shows what's staged, unstaged, or untracked
	// log : Shows commit history
	// diff : Shows differences between files/version
	// checkout : Switches to a different commit or branch
	// branch : Lists or creates branches
	// merge : Merges one branch into another

	GitCopy git;

	if (command == "init")
	{
		git.init();
	}
	else
	{
		cout << "[ERROR] Invalid command: " << command << endl;
		return 1;
	}

	return 0;
}

