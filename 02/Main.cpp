#define Student
#define Professor
#define Course
#define Schedule
#define University
#define Report

int main() {
    // Create Professors
    Professor prof1("Juan Pérez", 40, "Mathematics");
    Professor prof2("Ana Gómez", 35, "Physics");

    // Create Students
    Student student1("Luis Martínez", 20, "Engineering");
    Student student2("María Sánchez", 22, "Law");
    Student student3("Carlos Díaz", 19, "Medicine");

    // Create Schedules
    Schedule schedule1("Monday", "08:00 - 10:00");
    Schedule schedule2("Tuesday", "10:00 - 12:00");

    // Create Courses
    Course course1("Calculus", schedule1);
    Course course2("Algebra", schedule2);

    // Create University and add courses
    University university("XYZ University");
    university.addCourse(course1);
    university.addCourse(course2);

    // Create Report for a Student
    Report reportForStudent1(student1);
    cout << reportForStudent1.generateReport() << endl;

    // Print University information and its courses
    cout << university.toString() << endl;

    return 0;
}
