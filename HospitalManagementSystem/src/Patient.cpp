#include "Patient.h"

Patient::Patient(const std::string& name, int age, const std::string& ailment)
    : name(name), age(age), ailment(ailment) {}

std::string Patient::getName() const {
    return name;
}

int Patient::getAge() const {
    return age;
}

std::string Patient::getAilment() const {
    return ailment;
}
