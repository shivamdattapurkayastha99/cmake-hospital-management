#ifndef HOSPITAL_H 
#define HOSPITAL_H 
#include "Doctor.h"
#include "Patient.h"
#include<vector>
#include <string>
using namespace std;


class Hospital
{
public:
	void addDoctor(const string& name, const string& specialization);
	void addPatient(const string& name,int age, const string& ailment);
	void listDoctors() const;
	void listPatients() const;

private:
	vector <Doctor> doctors;
	vector<Patient> patients;
};





#endif
