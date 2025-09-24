class University {
private:
    string name;
    vector<Course> courses;

public:
    // Constructor
    University(string name) : name(name) {}

    // Add course
    void addCourse(const Course& course) {
        courses.push_back(course);
    }

    // Getters and Setters
    string getName() const {
        return name;
    }

    void setName(const string& name) {
        this->name = name;
    }

    vector<Course> getCourses() const {
        return courses;
    }

    // toString()
    string toString() const {
        string result = "University: " + name + "\nCourses:\n";
        for (const auto& course : courses) {
            result += course.toString() + "\n";
        }
        return result;
    }
};
