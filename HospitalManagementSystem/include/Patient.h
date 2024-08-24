#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
public:
    Patient(const std::string& name, int age, const std::string& ailment);

    std::string getName() const;
    int getAge() const;
    std::string getAilment() const;

private:
    std::string name;
    int age;
    std::string ailment;
};

#endif 
