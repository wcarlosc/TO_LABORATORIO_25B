class Report {
private:
    Student student;

public:
    // Constructor
    Report(const Student& student) : student(student) {}

    // Generate report
    string generateReport() const {
        return "Student Report:\n" + student.toString();
    }
};
