#include <glob.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

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
struct inputValue
{
    string timeStamp;
    double value;
    bool r_label;
};  //input value read from input file

int CountInstances(string fileName) {
    fstream handler;
    handler.open(fileName);
    string line;

    int numInstances = 0;

    while (handler.eof() != true) {
        getline(handler, line);

        if (line != "") {
            numInstances++;
        }
    }
    handler.close();

    return numInstances;
}

void LoadData(string fileName, vector<inputValue> &X) {
    fstream handler;

    int datasetSize = CountInstances(fileName); // zlicz l. instancji w pliku

    handler.open(fileName);
    for (int i = 0; i < datasetSize; i++) {
        string line;
        getline(handler, line);
        stringstream linestream(line);
        string dataPortion;

        if (line != "") {
            getline(linestream, dataPortion, ',');
            string timeStamp = dataPortion;
            getline(linestream, dataPortion, ',');
            //cout << "dataPortion:" << dataPortion << endl;
            double value = stod(dataPortion);
            getline(linestream, dataPortion, ' ');
            cout << "dataPortion:" << dataPortion << endl;
            int r_label = stoi(dataPortion);

            inputValue newValue = {timeStamp, value, (r_label == 0 ? false : true)};

            X.push_back(newValue);
        }
    }
    handler.close();
}

int main() {
  
  vector<inputValue> X;
  
  vector<string> files = globVector("./datasets/test_NAB/realTweets/*");
  cout<<files[0]<<endl;
  /*
  for(int i=0; i<files.size(); ++i){
    std::cout << files[i] <<endl;
  }
  */
  LoadData(files[0], X);
}