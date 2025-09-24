#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age) {}

    string getName() const {
        return name;
    }

    void setName(const string& name) {
        this->name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    virtual string toString() const {
        return "Name: " + name + ", Age: " + to_string(age);
    }
};
