#include "Hospital.h"
#include<iostream>
using namespace std;

void Hospital::addDoctor(const string& name, const string& specialization) {
	doctors.emplace_back(name, specialization);
}
void Hospital::addPatient(const string& name,int age, const string& ailment) {
	patients.emplace_back(name, age,ailment);
}
void Hospital::listDoctors() const {
    cout << "Doctors in Hospital:\n";
    for (const auto& doctor : doctors) {
        cout << "Name: " << doctor.getName() << ", Specialization: " << doctor.getSpecialization() << "\n";
    }
}
void Hospital::listPatients() const {
    cout << "Patients in Hospital:\n";
    for (const auto& patient : patients) {
        cout << "Name: " << patient.getName() << ", Age: " << patient.getAge() << ", Ailment: " << patient.getAilment() << "\n";
    }
}