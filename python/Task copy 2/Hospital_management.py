print("======= HOSPITAL MANAGEMENT ========")

Patients = []


def register_patient():
    patient_id = input("Enter Patient ID: ")
    name = input("Enter Patient Name: ")
    age = input("Enter Patient Age: ")
    problem = input("Enter Patient Problem: ")

    patient = {
        "id": patient_id,
        "name": name,
        "age": age,
        "problem": problem
    }

    Patients.append(patient)

    print("\nPatient Registered Successfully!")


register_patient()