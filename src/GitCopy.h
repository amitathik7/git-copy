#ifndef GITCOPY_H
#define GITCOPY_H

#include <string>
#include <iostream>
#include <filesystem>
#include <set>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;

// Structure for .gitcopy directory
//
// .gitcopy
// {
//    commits (directory)
//    branches (directory)
//    HEAD (Stores current head)
//    index (Stores staged files)
// }

class GitCopy
{
private:
	string currBranch;
  set<string> branches;
public:
	bool init();
};

#endif
