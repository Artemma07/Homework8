#ifndef HEADER_H
#define HEADER_H
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class Student
{
private:
    string surname;
    string name;
    string city;
    string group;
    int course;
public:
    Student(const string & = "", const string & = "", const string & = "", const string & = "", const int& = 0);

    friend std::ostream& operator<< (std::ostream& out, const Student& student);

    friend std::istream& operator>> (std::istream& in, Student& student);

    Student& operator= (const Student& student);
    void setName(const string& name) {
        Student::name = name;
    }


    void setLastname(const string& lastname) {
        Student::surname = lastname;
    }

    void setGroup(const string& group) {
        Student::group = group;
    }

    void setCourse(int course) {
        Student::course = course;
    }
    void setCity(const string& city) {
        Student::city = city;
    }
    
    const string& getName() const {
        return name;
    }

    const string& getLastname() const {
        return surname;
    }

    const string& getGroup() const {
        return group;
    }
    

    int getCourse() const {
        return course;
    }
        ~Student();



};
#endif 
