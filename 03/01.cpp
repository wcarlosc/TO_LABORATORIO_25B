#include <iostream>
#include <string>
#include <list>


using namespace std;
class Person {
    string name = "";
    int age = 0;
    string dni = "00000000";
public:
    Person(string n) : name(n){}
    Person(): name("[Sin nombre]"){}

    string getName(){ return name; }
    int getAge(){ return age; }
    string getDni(){ return dni; }

    void setName(string n){ name = n; }
    void setAge(int a) { age = a; }
    void setDni(string d) { dni = std::move(d); }

};
class Teacher: public Person {
public:
    Teacher(string n) : Person(n) {}

};
class Student: public Person {
    string cui = "00000000";
public:    
    Student(string n, string c) : Person(n), cui(c) {}
    Student(string n) : Person(n){}
    Student(): Person(){}

};
class Schedule {
    string day = "Hoy";
    string startTime = "00:00"; 
    string endTime = "00:00";
public:
    Schedule(string d, string start, string end)
    : day(d), startTime(start), endTime(end) {}

    Schedule(){}

    void setSchedule(string d, string start, string end){
        day = d;
        startTime = start;
        endTime = end;
    }

    string getSchedule() {   
        return day + " de " + startTime + " a  " + endTime;
    }
};
class Course {
    string title;
    Schedule schedule;

public:

    Course(string t, Schedule sch) 
    : title(t), schedule(sch) {}

    Course()
    : title("Curso sin titulo"), schedule() {}

    string getTitle(){ return title; }
    string getSchedule(){ return schedule.getSchedule(); }
};

class University {
    list<Course*> courses;
public:
    void addCourse(Course* c) {
        if (c) courses.push_back(c);
    }
    void removeCourse(Course* c) {
        if (c) courses.remove(c);
    }
    void printCourses(){
        for (Course* c : courses) {
            cout <<"* Curso: "<< c->getTitle()<<"- Horario: "<<c->getSchedule() << endl;
        }
    }

    
    list<Course*>& getCourses() { return courses; }
};
class Report{
    public:
    void tempReport(Student& student){
        cout << "[Resporte] Estudiante \n"<<
        "Nombre:"<<student.getName()<<
        "\nedad:"<<student.getAge()<<
        "\ndni:"<<student.getDni()<<endl;
    }
};


int main(){
    
    Student s1("Diego","87654321");
    Student s2;
    Report r;
    r.tempReport(s1);
    r.tempReport(s2);

    Teacher t1("Manuel");
    Teacher t2("Carmen");
    
    Schedule sch1("Lunes","08:00","10:000");
    Schedule sch2("Martes","10:00","12:00");
    Schedule sch3("Miercoles","12:00","14:00");
    Schedule sch4("Jueves","14:00","16:00");
    
    Course c1("Programacion",sch1);
    Course c2;
    Course c3("Matematicas",sch2);
    Course c4("Fisica",sch3);
    Course c5("Quimica",sch4);
    cout<<endl;

    University u1;
    u1.addCourse(&c1);
    u1.addCourse(&c2);
    u1.addCourse(&c3);
    u1.addCourse(&c4);
    u1.addCourse(&c5);
    cout<<endl; 

    cout<<"Listado de cursos"<<endl;
    u1.printCourses();
    

    return 0;
}