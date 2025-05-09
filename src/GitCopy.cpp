#include "GitCopy.h"

bool GitCopy::init()
{
	if (fs::exists("./.gitcopy") == true)
  {
    // TODO: Make the function to copy information from the already existing ./.gitcopy directory 
    cout << "[TODO] ./.gitcopy directory already exists here\nWill attempt to copy information" << endl;
    return false;
  }
 
  if (!fs::create_directory("./.gitcopy") || !fs::create_directory("./.gitcopy/branches") || !fs::create_directory("./.gitcopy/commits"))
  {
    cout << "[ERROR] Couldn't create ./.gitcopy directory or it's children" << endl;
    return false;
  }

  if (!fs::create_directory("./.gitcopy/branches/main"))
  {
    cout << "[ERROR] Couldn't create branch \"main\"" << endl;
    return false;
  }

 	return true; 
}
