#include <bits/stdc++.h>
using namespace std;

// User defined data type : properties (data members) + actions (memeber function)
class Friend {
  public:
    string name;
    int age;

    Friend(string initName, int initAge) {
      cout << "Constructor Called\n";
      name = initName;
      age = initAge;
    }

    ~Friend() {
      cout << "Destructor Called!!\n";
    }

    string getName() {
      return name;
    }

    int getAge() {
      return age;
    }

    void setName(string newName) {
      name = newName;
    } 

    void setAge(int newAge) {
      age = newAge;
    }

};

int main() {
  Friend ross("Ross", 40);
  Friend Sachin("Sachin Singla", 51);
  cout << ross.getName() << " " << ross.getAge() << "\n";
  
  cout << Sachin.getName() << "\n";
}


