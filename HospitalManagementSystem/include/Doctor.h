#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

class Doctor {
public:
    Doctor(const std::string& name, const std::string& specialization);

    std::string getName() const;
    std::string getSpecialization() const;

private:
    std::string name;
    std::string specialization;
};

#endif 
