#include <glob.h>
#include <vector>
#include <iostream>

//using std::vector;
using namespace std;

vector<string> globVector(const string& pattern){
    glob_t glob_result;
    glob(pattern.c_str(),GLOB_TILDE,NULL,&glob_result);
    vector<string> files;
    for(unsigned int i=0;i<glob_result.gl_pathc;++i){
        files.push_back(string(glob_result.gl_pathv[i]));
    }
    globfree(&glob_result);
    return files;
}

int main() {
  vector<string> files = globVector("./datasets/NAB/data/artificialNoAnomaly/*");
  //cout<<files<<endl;
  for(int i=0; i<files.size(); ++i){
    std::cout << files[i] <<endl;
  }
  
}