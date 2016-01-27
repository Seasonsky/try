// C++ sample class

#include <iostream>
using namespace std;

// Declare a class of 'Student'
class Student {
  int funds;
 public:
  char name[20];
 protected:
  int salary;
 private:
  unsigned int ID;
  int age;
};

// Display all kinds of things
class Display {
 public:
  void student(Student *stu);
};

void Display::student(Student *stu) {
  cout << endl << "----- Displaying -----" << endl;
  cout << stu->name << endl;
}


// main function for testing
int main() {
    
  cout << endl << "********** Begin of Program **********" << endl;
  
  Student Adam, Lily;
  Display disp;
  
  disp.student(&Adam);
  
  cout << endl << "**********  End of Program  **********" << endl;
  return 0;
}