//
// Created by studentloaner on 4/13/2022.
//

#ifndef GRADEBOOK2_GRADEBOOK2_H
#define GRADEBOOK2_GRADEBOOK2_H

#include <iostream>
#include<string>
using namespace std;

#endif //GRADEBOOK2_GRADEBOOK2_H

class GradeBook2{
public:
    GradeBook2(string name){
        setCourseName(name);
    }
    void setCourseName(string name){
        courseName=name;
    }
    string getCourseName(){
        return courseName;
    }
    void displayMessage(){
        cout<<"Welcome to the the grade book \n"
            <<getCourseName()<<"!"<<endl;
    }
private:
    string courseName;
};