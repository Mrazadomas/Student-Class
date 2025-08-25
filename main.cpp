#include <iostream> 
#include <cassert>

using namespace std;

class Student {
    private: 
    string first_name;
    string last_name;

    public: 
    
    int number_of_credits = 0;
    Student(string first, string last) {
        first_name = first;
        last_name = last;
    }

    void setFirstName(string first) {
        first_name = first;
    }

    void setLastName(string last) {
        last_name = last;
    }

    void add_credits(int credits) {
        number_of_credits += credits;
    }

    void reset_credits() {
        number_of_credits = 0;
    }
    string getFirst() {
        return first_name;
    }

    string getLast() {
        return last_name;
    }
};

int main() {
  Student student = Student("Bob", "Bobberson");
 
  assert(student.getFirst() == "Bob");
  assert(student.number_of_credits == 0);
 
  student.add_credits(6);
  student.add_credits(2);
 
  assert(student.number_of_credits == 8);
 
  student.reset_credits();
 
  assert(student.number_of_credits == 0);

  cout << student.getFirst() << " " << student.getLast() << endl;

  student.setFirstName("Riley");

  student.setLastName("Jenkins");

  cout << student.getFirst() << " " << student.getLast() << endl;
 
  return 0;
}
