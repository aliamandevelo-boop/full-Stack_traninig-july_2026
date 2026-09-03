def check_student(student):

   
    if len(student) != 6:
        return False

    student_id = student[0]
    name = student[1]
    age = student[2]
    email = student[3]
    address = student[4]
    country = student[5]


    if student_id == "":
        return False


    if name == "":
        return False


    try:
        age = int(age)

        if age <= 0 or age > 100:
            return False

    except:
        return False


    if "@" not in email or "." not in email:
        return False


    if address == "":
        return False


    if country == "":
        return False

    return True


def format_student(student):

    return (
        "ID: " + student[0] +
        " | Name: " + student[1] +
        " | Age: " + student[2] + "\n" +

        "Email: " + student[3] + "\n" +

        "Location: " + student[4] +
        ", " + student[5] + "\n"
    )


def main():

    input_file = "student.txt"
    output_file = "students_output.txt"

    accepted_students = []

    total_students = 0
    accepted = 0
    rejected = 0


    try:

   
        with open(input_file, "r") as file:

            for line in file:

            
                if line.strip() == "":
                    continue

                total_students += 1

                student = line.strip().split(",")

                student = [item.strip() for item in student]


                if check_student(student):

                    accepted_students.append(student)

                    accepted += 1

                else:

                    rejectaed += 1


       
        with open(output_file, "w") as file:

            for student in accepted_students:

                file.write(format_student(student))
                file.write("\n")


        print("\nStudent Registration System Completed")

        print("-" * 40)

        print("\nAccepted Students:\n")

        for student in accepted_students:

            print(format_student(student))


        print("-" * 40)

        print("Total Students:", total_students)
        print("Accepted:", accepted)
        print("Rejected:", rejected)

        print("\nOutput file:", output_file)


    except FileNotFoundError:

        print("Error: students.txt file not found.")


main()