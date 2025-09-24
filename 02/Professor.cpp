#include <string>

class Professor : public Person {
private:
    string subject;

public:
    // Constructor
    Professor(string name, int age, string subject) : Person(name, age), subject(subject) {}

    // Getter and Setter
    string getSubject() const {
        return subject;
    }

    void setSubject(const string& subject) {
        this->subject = subject;
    }

    // toString()
    string toString() const override {
        return Person::toString() + ", Subject: " + subject;
    }
};
