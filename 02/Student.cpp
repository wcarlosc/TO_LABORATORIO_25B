class Student : public Person {
private:
    string major;

public:
    // Constructor
    Student(string name, int age, string major) : Person(name, age), major(major) {}

    // Getter and Setter
    string getMajor() const {
        return major;
    }

    void setMajor(const string& major) {
        this->major = major;
    }

    // toString()
    string toString() const override {
        return Person::toString() + ", Major: " + major;
    }
};
