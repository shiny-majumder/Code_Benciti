#include <fstream>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

//Note: Do not change any part of the existing code.
int main(int argc, char *argv[]) {
    std::vector<int> numVec;
    int nextNum;
    int i;
    ifstream inFile;
    inFile.open(argv[1]);
    ofstream outfile;
    outfile.open("output");

    while(inFile >> nextNum){
       numVec.push_back(nextNum);
    }
    
    for(i=0; i<numVec.size(); i++)
    {
        if(numVec[i]+numVec[i+1]+numVec[i+2]==0)
        	numVec.erase (numVec.begin()+i,numVec.begin()+i+3);
    }

   for(auto n:numVec) 
   {
      outfile << n << endl; 
   }
}
