#include <iostream>
#include "GradeBook2.h"
//same thing as GradeBook1.
//you just put them in seperate files
using namespace std;

int main() {
    GradeBook2 gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook2 gradeBook2("CS102 Data Structures in C++");

    cout<<"gradebook1 created for course:"<<gradeBook1.getCourseName();
    cout<<endl;

    cout<<"gradebook2  created for course:"<<gradeBook2.getCourseName();

}
