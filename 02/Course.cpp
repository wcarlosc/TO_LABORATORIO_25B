
class Course {
private:
    string name;
    Schedule schedule;

public:
    // Constructor
    Course(string name, Schedule schedule) : name(name), schedule(schedule) {}

    // Getters and Setters
    string getName() const {
        return name;
    }

    void setName(const string& name) {
        this->name = name;
    }

    Schedule getSchedule() const {
        return schedule;
    }

    void setSchedule(const Schedule& schedule) {
        this->schedule = schedule;
    }

    // toString()
    string toString() const {
        return "Course: " + name + ", Schedule: [" + schedule.toString() + "]";
    }
};
