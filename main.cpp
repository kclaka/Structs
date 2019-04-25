#include <iostream>

using namespace std;

const int ARRAYSIZE = 1000;

struct studentRecord{
    string firstName;
    string lastName;
    string sex;
    double gpa;
    int year;
    bool outOfState;
};

struct listType{
    int listElem[ARRAYSIZE];
    int listLength;
};

int seqSearch(listType& doublelist, int searchitem){
    int loc;
    bool found = false;

    for(loc =0; loc < doublelist.listLength; loc++)
        if(doublelist.listElem[loc] == searchitem){
            found = true;
            break;
        }
    if(found)
        return loc;
    else
        return -1;
}

int main() {
    studentRecord kiigbechi;

    kiigbechi.firstName = "Kenny";
    kiigbechi.lastName = "Igbechi";
    kiigbechi.sex = "Male";
    kiigbechi.gpa = 3.0;
    kiigbechi.year = 2019;
    kiigbechi.outOfState = false;

    listType doublelist;

    doublelist.listLength = 10;

    doublelist.listElem[0] = 12;
    doublelist.listElem[1] = 13;
    doublelist.listElem[2] = 20;
    doublelist.listElem[3] = 45;
    doublelist.listElem[4] = 35;
    doublelist.listElem[5] = 65;

    cout<< seqSearch(doublelist, 20)<<endl;


    cout<< kiigbechi.firstName <<endl;
    return 0;
}