#include "commons.h"
#include <unistd.h>

#define GetCurrentDir getcwd

using namespace std;

std::string commons::GetCurrentWorkingDir(void)
{
  char buff[FILENAME_MAX];
  getcwd(buff, FILENAME_MAX);
  std::string current_working_dir(buff);
  return current_working_dir;
}

std::string commons::GetImageDataPath(string path)
{
  commons c;
  string DATA_PATH = c.GetCurrentWorkingDir();

  //Create new Images

  //cout << DATA_PATH << endl;

  string imgPath = DATA_PATH+path;

  //cout << imgPath << endl;

  return imgPath;
};

