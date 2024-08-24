#include "Hospital.h"
#include "Patient.h"
#include "Doctor.h"

int main() {
    Hospital hospital;
    hospital.addDoctor("Dr. Shivam", "Cardiologist");
    hospital.addPatient("Datta", 45, "Heart disease");

    hospital.listDoctors();
    hospital.listPatients();

    return 0;
}
