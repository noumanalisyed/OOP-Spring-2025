//
// Created by Syed Nouman Ali Shah on 03/12/2024.
//

#include "Course.h"

Course::Course(int id, const std::string &name, const std::string &code)
        : courseId(id), courseName(name), courseCode(code) {}

int Course::getCourseId() const { return courseId; }

std::string Course::getCourseName() const { return courseName; }

std::string Course::getCourseCode() const { return courseCode; }

void Course::addRegistration(Registration *reg) { registrations.push_back(reg); }

void Course::displayCourse() const {
    std::cout << "Course ID: " << courseId
              << ", Name: " << courseName
              << ", Code: " << courseCode << std::endl;
}

void Course::displayRegistrations() const {
    std::cout << "Registrations for Course " << courseName << ":" << std::endl;
    for (const auto &reg: registrations) {
        reg->displayRegistration();
        std::cout << "---------------------------" << std::endl;
    }
}