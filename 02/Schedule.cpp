class Schedule {
private:
    string day;
    string time;

public:
    // Constructor
    Schedule(string day, string time) : day(day), time(time) {}

    // Getters and Setters
    string getDay() const {
        return day;
    }

    void setDay(const string& day) {
        this->day = day;
    }

    string getTime() const {
        return time;
    }

    void setTime(const string& time) {
        this->time = time;
    }

    // toString()
    string toString() const {
        return "Day: " + day + ", Time: " + time;
    }
};
